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
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk Logic")
	void ApplyPerkEffect(AActor* TargetActor);
};
