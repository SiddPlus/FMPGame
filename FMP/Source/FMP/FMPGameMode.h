// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FMPGameMode.generated.h"

UCLASS()
class AFMPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFMPGameMode();

	UPROPERTY(EditAnywhere, Category = "Round Management")
	float RoundDuration = 60.0f;

	UPROPERTY(EditAnywhere, Category = "Round Management|Spawning")
	float CurrentRoundSpawnRate = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Round Management|Spawning")
	int32 CurrentRoundMaxEnemies = 10;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Round Management")
	void PlayerReadyUp(APlayerController* PC);

protected:
	void StartRound();
	void EndRound();
	void CheckAllPlayersReady();

private:
	TSet<APlayerController*> ReadyPlayersSet;
};



