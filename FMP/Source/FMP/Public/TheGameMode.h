#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TheGameMode.generated.h"

/**
 * @brief Game mode class that manages rules, scoring, and round progression.
 */
UCLASS()
class FMP_API ATheGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	/** @brief Default constructor */
	ATheGameMode();

	/** @brief Base duration for a single round in seconds */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float BaseRoundDuration = 60.0f;

	/** @brief Rate at which enemies spawn in the current round */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float CurrentRoundSpawnRate = 5.0f;

	/** @brief Maximum number of enemies that can be active in the current round */
	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 CurrentRoundMaxEnemies = 10;

	/**
	 * @brief Marks a player as ready to start the next round.
	 * @param PC The PlayerController of the player who is ready.
	 */
	UFUNCTION(BlueprintCallable, Category = "Round")
	void PlayerReadyUp(APlayerController* PC);

	/**
	 * @brief Registers a player as downed or out of action.
	 * @param PC The PlayerController of the downed player.
	 */
	UFUNCTION(BlueprintCallable, Category = "Game")
	void RegisterPlayerDown(APlayerController* PC);

	/**
	 * @brief Called after a successful login.
	 * @param NewPlayer The newly logged-in PlayerController.
	 */
	virtual void PostLogin(APlayerController* NewPlayer) override;

	/**
	 * @brief Restarts a player's pawn.
	 * @param NewPlayer The Controller of the player to restart.
	 */
	virtual void RestartPlayer(AController* NewPlayer) override;

	/** @brief Called when the game begins or is spawned */
	virtual void BeginPlay() override;

	/**
	 * @brief Called when a player logs out.
	 * @param Exiting The Controller of the exiting player.
	 */
	virtual void Logout(AController* Exiting) override;

	/**
	 * @brief Accepts or rejects a player attempting to join the server.
	 * @param Options The connection options string.
	 * @param Address The connection address.
	 * @param UniqueId The unique net ID of the joining player.
	 * @param ErrorMessage The output error message if login is rejected.
	 */
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

protected:
	/** @brief Initiates a new round */
	void StartRound();
	
	/** @brief Ends the current round */
	void EndRound();
	
	/** @brief Advances the round timer and checks for round completion */
	void AdvanceTimer();
	
	/** @brief Ends the current game run entirely (e.g., team wipe or final round completed) */
	void EndRun();
	
	/** @brief Updates enemy scaling parameters based on round number or other factors */
	void RefreshDifficultyScaling();

private:
	/** @brief Timer handle used for managing round time updates */
	FTimerHandle RoundTimerHandle;

	/** @brief List of cached enemy spawners in the map */
	UPROPERTY()
	TArray<class AEnemySpawner*> CachedSpawners;

	/** @brief List of players currently in the downed state */
	UPROPERTY()
	TArray<APlayerController*> DownPlayers;

	/** @brief Set of players who have indicated they are ready */
	TSet<APlayerController*> ReadyPlayersSet;
};
