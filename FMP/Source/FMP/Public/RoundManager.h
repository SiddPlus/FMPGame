// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoundManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundStateChanged, bool, IsActive);

class FLifetimeProperty;
class AEnemySpawner;

UCLASS()
class FMP_API ARoundManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoundManager();

	UPROPERTY(EditAnywhere, Replicated, Category = "Round Management")
	float RoundDuration = 60.0f;

	UPROPERTY(EditAnywhere, Replicated, Category = "Round Management|Spawning", Meta = (ClampMin = "0.1"))
	float CurrentRoundSpawnRate = 5.0f;

	UPROPERTY(EditAnywhere, Replicated, Category = "Round Management|Spawning", Meta = (ClampMin = "1"))
	int32 CurrentRoundMaxEnemies = 10;

	UPROPERTY(BlueprintAssignable, Category = "Round Management|Events")
	FOnRoundStateChanged OnRoundStateChanged;
	
private:
	UPROPERTY(ReplicatedUsing = OnRep_IsRoundActive)
	bool bIsRoundActive = false;
	
	UPROPERTY(ReplicatedUsing = OnRep_RoundTimer)
	float RoundTimer = 0.0f;
	
	UPROPERTY()
	bool bHasRoundEnded = false;

	UPROPERTY(Replicated)
	int32 CurrentRoundNumber = 1;

	UPROPERTY(Transient) 
	TArray<AEnemySpawner*> AllEnemySpawners;
	
	void StartRound();
	
	void EndRound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnRep_IsRoundActive(); // Calls the Blueprint event delegate
	
	UFUNCTION()
	void OnRep_RoundTimer();

	UFUNCTION(Server, Reliable)
	void Server_BeginNewRound();

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
