// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TheGameMode.generated.h"

UCLASS()
class FMP_API ATheGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATheGameMode();

	UPROPERTY(EditAnywhere, Category = "Settings")
	float BaseRoundDuration = 60.0f;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float CurrentRoundSpawnRate = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 CurrentRoundMaxEnemies = 10;

	UFUNCTION(BlueprintCallable, Category = "Round")
	void PlayerReadyUp(APlayerController* PC);

	virtual void PostLogin(APlayerController* NewPlayer) override;

protected:
	void StartRound();
	void EndRound();
	void AdvanceTimer();

private:
	FTimerHandle RoundTimerHandle;

	UPROPERTY()
	TArray<class AEnemySpawner*> CachedSpawners;

	TSet<APlayerController*> ReadyPlayersSet;
};
