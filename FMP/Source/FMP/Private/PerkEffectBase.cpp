// Fill out your copyright notice in the Description page of Project Settings.


#include "PerkEffectBase.h"
#include "GameFramework/Actor.h"

void UPerkEffectBase::ApplyPerkEffect_Implementation(AActor* TargetActor)
{

	if (TargetActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Perk System: Applying base logic to %s"), *TargetActor->GetName());
		
	}
}

