#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerkEffectBase.generated.h"

/**
 * @brief Base class for defining the effects of perks applied to a player.
 * 
 * This class contains a variety of stat multipliers and flat bonuses that can be 
 * configured per-perk in Blueprint, as well as events for applying and removing effects.
 */
UCLASS(Abstract, Blueprintable)
class FMP_API UPerkEffectBase : public UObject
{
	GENERATED_BODY()

public:
	/** @brief Multiplier applied to the player's base movement speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MovementSpeedMultiplier = 1.0f;
	
	/** @brief Flat bonus added to the player's maximum health */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxHealthBonus = 0.0f;

	/** @brief Multiplier applied to the damage dealt by the player */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float DamageMultiplier = 1.0f;

	/** @brief Multiplier applied to the weapon reload speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float ReloadSpeedMultiplier = 1.0f;

	/** @brief Multiplier applied to weapon recoil */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float RecoilMultiplier = 1.0f;

	/** @brief Multiplier applied to weapon spread/accuracy */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float SpreadMultiplier = 1.0f;

	/** @brief Multiplier applied to the damage taken by the player */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float DamageTakenMultiplier = 1.0f;

	/** @brief Multiplier applied to the maximum ammo capacity */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxAmmoMultiplier = 1.0f;

	/** @brief Amount of health regenerated passively over time */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float HealthRegenAmount = 0.0f;

	/** @brief Amount of health restored to the player per enemy killed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float HealthPerKill = 0.0f;

	/** @brief Multiplier applied to slow down enemies (e.g., lower means slower) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float EnemySlowAmmount = 1.0f;
	
	/**
	 * @brief Event triggered when this perk effect is applied to a target actor (player).
	 * @param TargetActor The actor receiving the perk effect.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk Logic")
	void ApplyPerkEffect(AActor* TargetActor);

	/**
	 * @brief Event triggered when this perk effect is removed from a target actor.
	 * @param TargetActor The actor losing the perk effect.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk Logic")
	void UnapplyPerkEffect(AActor* TargetActor);
};
