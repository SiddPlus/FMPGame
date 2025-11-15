// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPerks.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPlayerPerks::UPlayerPerks()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
    SetIsReplicatedByDefault(true);

	// ...
}


// Called when the game starts
void UPlayerPerks::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerPerks::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerPerks::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UPlayerPerks, LockedPerks);
    DOREPLIFETIME(UPlayerPerks, UnlockedPerks);
    DOREPLIFETIME(UPlayerPerks, EquippedPerks);
    DOREPLIFETIME(UPlayerPerks, LastEquippedPerk); 
}

// --- CLIENT WRAPPERS (Execute on Client, Call RPC) ---

void UPlayerPerks::UnlockPerk(const FString& PerkName)
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        PerkUnlockLogic(PerkName);
    }
    else
    {
        ServerUnlockPerk(PerkName);
    }
}

void UPlayerPerks::EquipPerk(const FString& PerkName)
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        PerkEquipLogic(PerkName);
    }
    else
    {
        ServerEquipPerk(PerkName);
    }
}

void UPlayerPerks::ServerUnlockPerk_Implementation(const FString& PerkName)
{
    PerkUnlockLogic(PerkName);
}

void UPlayerPerks::ServerEquipPerk_Implementation(const FString& PerkName)
{
    PerkEquipLogic(PerkName);
}

bool UPlayerPerks::PerkUnlockLogic(const FString& PerkName)
{
    if (!GetOwner() || !GetOwner()->HasAuthority()) return false;

    int32 FoundIndex = LockedPerks.IndexOfByPredicate([&PerkName](const FPerks& Perk){
        return Perk.Name.Equals(PerkName, ESearchCase::IgnoreCase);
    });

    if (FoundIndex != INDEX_NONE)
    {
        FPerks PerkToUnlock = LockedPerks[FoundIndex];
        LockedPerks.RemoveAt(FoundIndex);
        UnlockedPerks.Add(PerkToUnlock);
        UE_LOG(LogTemp, Warning, TEXT("SERVER: Perk '%s' unlocked."), *PerkName);
        return true;
    }
    
    return false;
}

bool UPlayerPerks::PerkEquipLogic(const FString& PerkName)
{
    if (!GetOwner() || !GetOwner()->HasAuthority()) return false;

    int32 FoundIndex = UnlockedPerks.IndexOfByPredicate([&PerkName](const FPerks& Perk){
        return Perk.Name.Equals(PerkName, ESearchCase::IgnoreCase);
    });

    if (FoundIndex != INDEX_NONE)
    {
        FPerks PerkToEquip = UnlockedPerks[FoundIndex];
        UnlockedPerks.RemoveAt(FoundIndex);
        EquippedPerks.Add(PerkToEquip);

        // SET THE REPLICATED VARIABLE (Triggers RepNotify on client)
        LastEquippedPerk = PerkToEquip; 
        OnRep_LastEquippedPerk(); // Call directly on server for consistency
        
        UE_LOG(LogTemp, Warning, TEXT("SERVER: Perk '%s' equipped."), *PerkName);
        return true;
    }
    
    return false;
}

void UPlayerPerks::OnRep_LastEquippedPerk()
{
    // Check if this is the owning client (ROLE_AutonomousProxy)
    if (GetOwnerRole() == ROLE_AutonomousProxy) 
    {
        // Call the Blueprint Event to pop up the UI
        OnPerkEquipped_ClientEvent(LastEquippedPerk); 
    }
}

