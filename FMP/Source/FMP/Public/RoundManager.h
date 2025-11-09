// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoundManager.generated.h"

class FLifetimeProperty;
class AEnemySpawner;

UCLASS()
class FMP_API ARoundManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoundManager();

	UPROPERTY(EditAnywhere, Category = "Round Management")
	float RoundDuration = 60.0f;
	
private:
	UPROPERTY(Replicated)
	bool bIsRoundActive = false;
	
	UPROPERTY(Replicated)
	float RoundTimer = 0.0f;
	
	UPROPERTY()
	bool bHasRoundEnded = false;

	UPROPERTY(Replicated)
	int32 CurrentRoundNumber = 0;

	UPROPERTY(Transient) 
	TArray<AEnemySpawner*> AllEnemySpawners;
	
	void StartRound();
	
	void EndRound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "Round Management")
	void BeginNewRound();
	
	UFUNCTION(BlueprintPure, Category = "Round Management")
	float GetRemainingTime() const { return RoundTimer; }
	
	UFUNCTION(BlueprintPure, Category = "Round Management")
	bool IsRoundActive() const { return bIsRoundActive; }

	UFUNCTION(BlueprintPure, Category = "Round Management")
	int32 GetCurrentRoundNumber() const { return CurrentRoundNumber; }

};
