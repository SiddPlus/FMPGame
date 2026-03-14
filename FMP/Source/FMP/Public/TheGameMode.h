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

	virtual void PostLogin(APlayerController* NewPlayer) override;

protected:
	void StartRound();
	void EndRound();
	void AdvanceTimer();

private:
	FTimerHandle RoundTimerHandle;
};
