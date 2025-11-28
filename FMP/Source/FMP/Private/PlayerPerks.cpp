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
	DOREPLIFETIME(UPlayerPerks, bIsPerkSelectionActive);
}

void UPlayerPerks::OnRep_IsPerkSelectionActive()
{
    OnPerkSelectionNeeded.Broadcast(bIsPerkSelectionActive);
}

void UPlayerPerks::CheckAndUnlockPerks(int32 CurrentRound)
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        // 1. Run CheckUnlockLogic (moves perks Locked -> Unlocked)
        CheckUnlockLogic(CurrentRound); 
        
        // 2. Set authoritative state to TRUE
        bIsPerkSelectionActive = true; 
        
        // 3. Call RepNotify directly on the server (which broadcasts the delegate)
        OnRep_IsPerkSelectionActive(); 
    }
}

void UPlayerPerks::FinishedPerkSelection()
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        // Host/Server click: execute directly
        bIsPerkSelectionActive = false;
        OnRep_IsPerkSelectionActive();
    }
    else // Client click: request server action
    {
        ServerFinishedPerkSelection();
    }
}

void UPlayerPerks::ServerFinishedPerkSelection_Implementation()
{
    // Server performs the authoritative state change
    bIsPerkSelectionActive = false;
    OnRep_IsPerkSelectionActive(); 
}

bool UPlayerPerks::CheckUnlockLogic(int32 CurrentRound)
{
    // 1. Authoritative Check: Ensure only the server runs this logic
    if (!GetOwner() || !GetOwner()->HasAuthority()) 
    {
        return false;
    }
    
    TArray<FPerks> NewlyUnlocked;
    bool bPerkUnlocked = false;
    
    // 2. Iterate LockedPerks backwards for safe removal
    for (int32 i = LockedPerks.Num() - 1; i >= 0; --i)
    {
        FPerks& Perk = LockedPerks[i];
        
        // 3. The Unlock Requirement: UnlockLevel must be LESS THAN the round just completed
        if (Perk.RoundLevelUnlockAmount <= CurrentRound) 
        {
            NewlyUnlocked.Add(Perk);
            LockedPerks.RemoveAt(i); // Remove from Locked Array
            bPerkUnlocked = true;
            
            UE_LOG(LogTemp, Warning, TEXT("SERVER: Perk '%s' unlocked (Required Round %d)."), *Perk.Name, Perk.RoundLevelUnlockAmount);
        }
    }
    
    // 4. Move newly unlocked perks into the replicated UnlockedPerks array
    if (NewlyUnlocked.Num() > 0)
    {
        UnlockedPerks.Append(NewlyUnlocked); 
        // Note: The UnlockedPerks array is replicated, so clients will see the update.
    }
    
    return bPerkUnlocked;
}

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

bool UPlayerPerks::EquipPerk(const FString& PerkName)
{
    if (GetOwner() && GetOwner()->HasAuthority())
    {
        return PerkEquipLogic(PerkName);
    }
    else
    {
        ServerEquipPerk(PerkName);
        return false;
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

