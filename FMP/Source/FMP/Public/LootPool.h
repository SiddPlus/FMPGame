#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerks.h"
#include "LootPool.generated.h"


/**
 * @brief Component that manages a pool of available perks and allows drawing random ones.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API ULootPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** @brief Sets default values for this component's properties */
	ULootPool();

private:
	/** @brief Reference to the player's perk component to check for unlocked/equipped perks */
	UPROPERTY()
	TObjectPtr<UPlayerPerks> PlayerPerksComponent;

protected:
	/** @brief Called when the game starts */
	virtual void BeginPlay() override;

public:	
	/** @brief Called every frame */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	/** @brief Sets up property replication for networking */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	/** @brief Initiates drawing a random perk from the pool */
	UFUNCTION(BlueprintCallable, Category = "Loot Pool")
	void DrawRandomPerk(); 
	
	/** @brief Server RPC to execute the drawing of a random perk */
	UFUNCTION(Server, Reliable)
	void ServerDrawRandomPerk();
	
	/** @brief Resets the current perk pool based on unlocked but unequipped perks */
	UFUNCTION(BlueprintCallable, Category = "Loot Pool")
	void ResetPool();
	
	/**
	 * @brief Checks if there are any perks available to be drawn.
	 * @return True if a perk can be drawn, false if the pool is empty.
	 */
	UFUNCTION(BlueprintPure, Category = "Loot Pool")
	bool CanDrawPerk() const;

	/** @brief The active pool of perks that can currently be drawn */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Loot Pool | Runtime")
	TArray<FPerks> CurrentPerkPool;

private:
	/**
	 * @brief Server-side logic to randomly select and remove a perk from the pool.
	 * @param OutPerk The perk that was drawn.
	 * @return True if a perk was successfully drawn.
	 */
	bool DrawPerk_ServerLogic(FPerks& OutPerk);
};
