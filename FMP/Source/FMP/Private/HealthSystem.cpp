// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthSystem.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UHealthSystem::UHealthSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Components on replicated Actors must be set to replicate if their properties are replicated.
	SetIsReplicatedByDefault(true);

	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
}


void UHealthSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Register CurrentHealth for replication with a RepNotify function (OnRep_Health)
	DOREPLIFETIME(UHealthSystem, CurrentHealth);
}

// Called when the game starts
void UHealthSystem::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->HasAuthority())
	{
		CurrentHealth = MaxHealth;
	}
	
}

void UHealthSystem::HandleHealthChange(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	// The engine's damage system ensures this event is triggered on the server.
	// We pass the damage amount to our primary health modification function.
    
	// We check HasAuthority() again here just in case, but the binding in BeginPlay
	// usually ensures this event is only processed by the authority.
	if (GetOwner()->HasAuthority())
	{
		DecreaseHealth(Damage, DamageType);
	}
}

void UHealthSystem::DecreaseHealth(float DeltaAmount, const class UDamageType* DamageType)
{
	// Ensure this function only executes on the Server/Authority
	if (!GetOwner()->HasAuthority() || DeltaAmount <= 0.0f)
	{
		return;
	}

	
	float HealthDelta = -FMath::Abs(DeltaAmount);
	CurrentHealth = FMath::Clamp(CurrentHealth + HealthDelta, 0.0f, MaxHealth);
	
	// This function is only called on the Server. We manually call the RepNotify 
	// function on the Server to execute the logic immediately and broadcast the delegate.
	// The replication system will automatically send the new 'CurrentHealth' to clients.
	OnRep_Health(CurrentHealth - HealthDelta); 
}

void UHealthSystem::IncreaseHealth(float DeltaAmount)
{
	// Ensure this function only executes on the Server/Authority
	if (!GetOwner()->HasAuthority() || DeltaAmount <= 0.0f)
	{
		return;
	}
	
	float HealthDelta = FMath::Abs(DeltaAmount);
	CurrentHealth = FMath::Clamp(CurrentHealth + HealthDelta, 0.0f, MaxHealth);
	
	// Manually call RepNotify on the Server for immediate execution/delegate broadcast
	OnRep_Health(CurrentHealth + HealthDelta); 
}


void UHealthSystem::OnRep_Health(float OldHealth)
{
	// This function is called on both the Server (when manually triggered) and all Clients (when replicated).
	
	float HealthDelta = CurrentHealth - OldHealth;
	
	OnHealthChanged.Broadcast(this, CurrentHealth, HealthDelta, nullptr);
}
// Called every frame
void UHealthSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

