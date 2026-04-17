#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerks.generated.h"

/**
 * @brief Delegate triggered when the perk selection UI needs to be shown or hidden.
 * @param IsActive True if the selection UI should be active.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerkSelectionNeeded, bool, IsActive);

/**
 * @brief Structure representing a single player perk, including its details and unlock requirements.
 */
USTRUCT(BlueprintType)
struct FPerks
{
	GENERATED_BODY()

public:
	/** @brief The display name of the perk */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	FString Name;
	
	/** @brief Description of the perk's effect */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	FString Description;

	/** @brief Class representing the actual logic/effect of the perk */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	TSubclassOf<class UPerkEffectBase> PerkEffectClass;
	
	/** @brief The round number required to unlock this perk */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	int32 RoundLevelUnlockAmount = 0;
};

/**
 * @brief Component responsible for managing a player's locked, unlocked, and equipped perks.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API UPlayerPerks : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** @brief Sets default values for this component's properties */
	UPlayerPerks();

protected:
	/** @brief Called when the game starts */
	virtual void BeginPlay() override;

public:	
	/** @brief Called every frame */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	/** @brief Required to register replicated properties */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * @brief Unlocks a specific perk by name.
	 * @param PerkName The name of the perk to unlock.
	 */
	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	void UnlockPerk(const FString& PerkName);
	
	/**
	 * @brief Equips an unlocked perk.
	 * @param PerkName The name of the perk to equip.
	 * @return True if the perk was successfully equipped.
	 */
	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	bool EquipPerk(const FString& PerkName);

	/**
	 * @brief Checks the current round number and unlocks any perks that meet the round requirement.
	 * @param CurrentRound The current round number.
	 */
	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	void CheckAndUnlockPerks(int32 CurrentRound); 

	/** @brief Event broadcasted when the perk selection UI state changes */
	UPROPERTY(BlueprintAssignable, Category = "Perk UI")
	FOnPerkSelectionNeeded OnPerkSelectionNeeded; 

	/**
	 * @brief Checks if the perk selection is currently active.
	 * @return True if perk selection is active.
	 */
	UFUNCTION(BlueprintPure, Category = "Perk UI")
	bool IsPerkSelectionActive() const { return bIsPerkSelectionActive; }

	/** @brief Marks the perk selection process as finished */
	UFUNCTION(BlueprintCallable, Category = "Perk UI")
	void FinishedPerkSelection();

	/** @brief Removes all currently active perk effects from the player */
	UFUNCTION(BlueprintCallable, Category = "Perks")
	void RemoveAllPerkEffects();

	/** @brief State variable tracking whether perk selection is currently active */
	UPROPERTY(ReplicatedUsing = OnRep_IsPerkSelectionActive, BlueprintReadOnly, Category = "Perk UI")
	bool bIsPerkSelectionActive = false;

private:
	/** @brief Server RPC to unlock a perk */
	UFUNCTION(Server, Reliable)
	void ServerUnlockPerk(const FString& PerkName);
	
	/** @brief Server RPC to equip a perk */
	UFUNCTION(Server, Reliable)
	void ServerEquipPerk(const FString& PerkName);
	
	/** @brief Internal logic to perform the unlocking of a perk */
	bool PerkUnlockLogic(const FString& PerkName);

	/** @brief Server RPC to finalize the perk selection */
	UFUNCTION(Server, Reliable)
	void ServerFinishedPerkSelection();

	/** @brief List of instantiated perk effects currently active on the player */
	UPROPERTY()
	TArray<class UPerkEffectBase*> ActivePerkInstances;

	/** @brief Server RPC to remove all active perk effects */
	UFUNCTION(Server, Reliable)
	void ServerRemoveAllPerkEffects();
    
	/** @brief Replication callback for bIsPerkSelectionActive */
	UFUNCTION()
	void OnRep_IsPerkSelectionActive();
    
	/** @brief Internal logic to check and unlock perks based on round */
	bool CheckUnlockLogic(int32 CurrentRound);

public:
	/**
	 * @brief Internal logic to perform the equipping of a perk.
	 * @param PerkName The name of the perk to equip.
	 * @return True if successful.
	 */
	bool PerkEquipLogic(const FString& PerkName); 
	
	/** @brief The most recently equipped perk, replicated to clients */
	UPROPERTY(ReplicatedUsing=OnRep_LastEquippedPerk, BlueprintReadOnly, Category = "Perks|Client")
	FPerks LastEquippedPerk;
	
	/** @brief Replication callback for LastEquippedPerk */
	UFUNCTION()
	void OnRep_LastEquippedPerk();
	
	/**
	 * @brief Client-side event triggered when a new perk is equipped.
	 * @param NewPerk The perk that was equipped.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk UI")
	void OnPerkEquipped_ClientEvent(const FPerks& NewPerk);
    
	/** @brief List of perks that are currently locked */
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> LockedPerks;

	/** @brief List of perks that are unlocked but not necessarily equipped */
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> UnlockedPerks;

	/** @brief List of perks that are currently equipped and active */
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> EquippedPerks;
};
