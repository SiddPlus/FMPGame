#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TheGameState.generated.h"

/** 
 * @brief Delegate triggered when the round state changes.
 * @param IsActive True if the round is now active, false otherwise.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundStateChange, bool, IsActive);

/** 
 * @brief Delegate triggered when the number of ready players changes.
 * @param CurrentReadyPlayers The number of players currently ready.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReadyChange, int32, CurrentReadyPlayers);

/**
 * @brief Game state class for handling round management, player readiness, and game progression.
 */
UCLASS()
class FMP_API ATheGameState : public AGameState
{
	GENERATED_BODY()

public:
	/** @brief Default constructor */
	ATheGameState();

	/** @brief Component responsible for logging performance metrics */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPerformanceLogger* PerformanceLogger;

	/** @brief Indicates whether a round is currently active */
	UPROPERTY(ReplicatedUsing = OnRep_IsRoundActive, BlueprintReadOnly, Category = "Round Management")
	bool bIsRoundActive = false;

	/** @brief Indicates whether a run (a series of rounds) is currently active */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Run Management")
	bool bIsRunActive = false;

	/** @brief Indicates whether the entire team has been wiped out */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game")
	bool bIsTeamWiped = false;

	/** @brief Timer tracking the duration of the current round */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	float RoundTimer = 0.0f;

	/** @brief The number of the current round */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	int32 CurrentRoundNumber = 1;

	/** @brief Number of players that have marked themselves as ready */
	UPROPERTY(ReplicatedUsing = OnRep_ReadyPlayers, BlueprintReadOnly, Category = "Round Management")
	int32 ReadyPlayersCount = 0;

	/** @brief Total number of players connected to the game */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Round Management")
	int32 TotalPlayersInGame = 0;

	/** @brief Event broadcasted when the round active state changes */
	UPROPERTY(BlueprintAssignable, Category = "Round Management|Events")
	FOnRoundStateChange OnRoundStateChange;

	/** @brief Event broadcasted when the count of ready players changes */
	UPROPERTY(BlueprintAssignable, Category = "Round Management|Events")
	FOnPlayerReadyChange OnPlayerReadyChange;

	/** @brief Replication callback for bIsRoundActive */
	UFUNCTION()
	void OnRep_IsRoundActive() { OnRoundStateChange.Broadcast(bIsRoundActive); }

	/** @brief Replication callback for ReadyPlayersCount */
	UFUNCTION()
	void OnRep_ReadyPlayers() { OnPlayerReadyChange.Broadcast(ReadyPlayersCount); }
	
protected:

	

	

	/** 
	 * @brief Setup variables to be replicated.
	 * @param OutLifetimeProps Array of properties to replicate.
	 */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
