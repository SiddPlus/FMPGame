// Fill out your copyright notice in the Description page of Project Settings.


#include "LootPool.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
ULootPool::ULootPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);

	// ...
}


// Called when the game starts
void ULootPool::BeginPlay()
{
	Super::BeginPlay();
	// Find the UPerksComponent on the owning Actor
	
	if (AActor* OwningActor = GetOwner())
	{
		PlayerPerksComponent = OwningActor->FindComponentByClass<UPlayerPerks>();
        
		if (!PlayerPerksComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("LootPoolComponent on %s could not find a UPerksComponent!"), *OwningActor->GetName());
		}
	}

	if (GetOwner() && GetOwner()->HasAuthority())
	{
		// Shuffles the initial deck at game start
		ResetPool();
	}
}


// Called every frame
void ULootPool::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULootPool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ULootPool, CurrentPerkPool);
}

// --- CLIENT CALLABLE WRAPPER ---

void ULootPool::DrawRandomPerk()
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        ServerDrawRandomPerk_Implementation();
    }
    else
    {
        ServerDrawRandomPerk();
    }
}

// --- SERVER RPC IMPLEMENTATION ---

void ULootPool::ServerDrawRandomPerk_Implementation()
{
    FPerks DrawnPerk;

    // 1. Execute the authoritative deck logic
    if (DrawPerk_ServerLogic(DrawnPerk))
    {
        // 2. Transfer the perk to the equipped array using UPerksComponent's server logic.
        if (PlayerPerksComponent)
        {
            // Call the public EquipPerk function. Since we are on the server, 
            // UPerksComponent will correctly execute its PerkEquipLogic.
            if (PlayerPerksComponent->EquipPerk(DrawnPerk.Name))
            {
                UE_LOG(LogTemp, Warning, TEXT("SERVER: Perk '%s' drawn and EQUIPPED."), *DrawnPerk.Name);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("SERVER: Failed to equip drawn perk '%s'."), *DrawnPerk.Name);
            }
        }
    }
}

// --- SERVER LOGIC FUNCTIONS ---

void ULootPool::ResetPool()
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !PlayerPerksComponent)
    {
        return;
    }

    CurrentPerkPool.Empty();

    // Only add perks that are UNLOCKED but NOT yet EQUIPPED
    for (const FPerks& UnlockedPerk : PlayerPerksComponent->UnlockedPerks)
    {
        bool bIsEquipped = PlayerPerksComponent->EquippedPerks.ContainsByPredicate([&UnlockedPerk](const FPerks& EP) {
            return EP.Name.Equals(UnlockedPerk.Name, ESearchCase::IgnoreCase);
        });

        if (!bIsEquipped)
        {
            CurrentPerkPool.Add(UnlockedPerk);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("SERVER: Loot Pool reset. Available non-equipped perks: %d"), CurrentPerkPool.Num());
}

bool ULootPool::DrawPerk_ServerLogic(FPerks& OutPerk)
{
    if (!PlayerPerksComponent)
    {
        OutPerk = FPerks();
        return false;
    }

    // Check if the current deck is empty (shuffling logic)
    if (CurrentPerkPool.Num() == 0)
    {
        ResetPool();
        
        // Final check after reset
        if (CurrentPerkPool.Num() == 0)
        {
            OutPerk = FPerks();
            return false;
        }
    }

    // Draw the perk
    int32 RandomIndex = FMath::RandRange(0, CurrentPerkPool.Num() - 1);
    OutPerk = CurrentPerkPool[RandomIndex];
    CurrentPerkPool.RemoveAt(RandomIndex); // Remove from temporary pool (drawing the card)

    return true;
}

bool ULootPool::CanDrawPerk() const
{
    // Checks the replicated current pool size
    return CurrentPerkPool.Num() > 0;
}

