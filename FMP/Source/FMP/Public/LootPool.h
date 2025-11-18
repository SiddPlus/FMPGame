// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerks.h"
#include "LootPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API ULootPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULootPool();

private:
	UPROPERTY()
	TObjectPtr<UPlayerPerks> PlayerPerksComponent;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UFUNCTION(BlueprintCallable, Category = "Loot Pool")
	void DrawRandomPerk(); 
	
	UFUNCTION(Server, Reliable)
	void ServerDrawRandomPerk();
	
	UFUNCTION(BlueprintCallable, Category = "Loot Pool")
	void ResetPool();
	
	UFUNCTION(BlueprintPure, Category = "Loot Pool")
	bool CanDrawPerk() const;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Loot Pool | Runtime")
	TArray<FPerks> CurrentPerkPool;

private:
	bool DrawPerk_ServerLogic(FPerks& OutPerk);

		
};
