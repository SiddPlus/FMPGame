// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerkEffectBase.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class FMP_API UPerkEffectBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MovementSpeedMultiplier = 1.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxHealthBonus = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float DamageMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float ReloadSpeedMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float RecoilMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float SpreadMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float DamageTakenMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxAmmoMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float HealthRegenAmount = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float HealthPerKill = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float EnemySlowMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float ExplosionRadius = 500.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats|Special")
	float ExplosionDamage = 50.0f;
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk Logic")
	void ApplyPerkEffect(AActor* TargetActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Perk Logic")
	void UnapplyPerkEffect(AActor* TargetActor);
};
