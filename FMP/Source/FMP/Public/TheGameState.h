// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TheGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundStateChange, bool, IsActive);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReadyChange, int32, CurrentReadyPlayers);

UCLASS()
class FMP_API ATheGameState : public AGameState
{
	GENERATED_BODY()

public:
	ATheGameState();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPerformanceLogger* PerformanceLogger;

	UPROPERTY(ReplicatedUsing = OnRep_IsRoundActive, BlueprintReadOnly, Category = "Round Management")
	bool bIsRoundActive = false;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	float RoundTimer = 0.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	int32 CurrentRoundNumber = 1;

	UPROPERTY(ReplicatedUsing = OnRep_ReadyPlayers, BlueprintReadOnly, Category = "Round Management")
	int32 ReadyPlayersCount = 0;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	int32 TotalPlayersInGame = 0;

	UPROPERTY(BlueprintAssignable, Category = "Round Management|Events")
	FOnRoundStateChange OnRoundStateChange;

	UPROPERTY(BlueprintAssignable, Category = "Round Management|Events")
	FOnPlayerReadyChange OnPlayerReadyChange;
	
protected:

	UFUNCTION()
	void OnRep_IsRoundActive() { OnRoundStateChange.Broadcast(bIsRoundActive); }

	UFUNCTION()
	void OnRep_ReadyPlayers() { OnPlayerReadyChange.Broadcast(ReadyPlayersCount); }

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
