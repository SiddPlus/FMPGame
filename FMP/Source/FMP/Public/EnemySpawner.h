#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "EnemySpawner.generated.h"

/**
 * @brief Actor responsible for spawning enemies at runtime based on configured rates and multipliers.
 */
UCLASS()
class FMP_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	/** @brief Sets default values for this actor's properties */
	AEnemySpawner();

protected:
	/** @brief Called when the game starts or when spawned */
	virtual void BeginPlay() override;
	
	/** @brief The class of the enemy character to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<ACharacter> EnemyToSpawnClass;

	/** @brief The Niagara portal effect to play when an enemy spawns */
	UPROPERTY(EditAnywhere, Category = "Spawning|Effects")
	UNiagaraSystem* PortalSystemAsset;
	
	/** @brief Frequency of enemy spawns in seconds */
	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "0.5"))
	float SpawnRate = 5.0f;

	/** @brief Maximum radius around the spawner where enemies can spawn */
	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "100.0"))
	float SpawnRadius = 500.0f;

	/** @brief Maximum number of active enemies this spawner can maintain at once */
	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "1"))
	int MaxConcurrentEnemies = 10;

	/** @brief Multiplier applied to the spawned enemy's health */
	UPROPERTY(BlueprintReadOnly, Category = "Spawning")
	float CurrentHealthMultiplier = 1.0f;

	/** @brief Multiplier applied to the spawned enemy's movement speed */
	UPROPERTY(BlueprintReadOnly, Category = "Spawning")
	float CurrentSpeedMultiplier = 1.0f;

	/** @brief Handle for the repeating spawn timer */
	FTimerHandle SpawnTimerHandle;
	
	/** @brief Tracks all currently active enemies spawned by this spawner */
	UPROPERTY(VisibleAnywhere, Transient, Category = "Spawning")
    TArray<AActor*> SpawnedEnemies;

	/** @brief Instantiates a new enemy and applies the current multipliers */
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnEnemy();

	/** @brief Multicast function to trigger the portal effect on all clients */
	UFUNCTION(NetMulticast, Reliable)
	void SpawnPortalEffect(FVector Location);

public:	
	/** @brief Called every frame */
	virtual void Tick(float DeltaTime) override;

	/**
	 * @brief Updates the spawner's settings, adjusting difficulty parameters.
	 * @param NewSpawnRate The new time interval between spawns.
	 * @param NewMaxConcurrentEnemies The new cap for active enemies.
	 * @param HealthMult The new health multiplier for spawned enemies.
	 * @param SpeedMult The new speed multiplier for spawned enemies.
	 */
	UFUNCTION(BlueprintCallable, Category = "Spawning|Control")
	void ConfigureSpawner(float NewSpawnRate, int32 NewMaxConcurrentEnemies, float HealthMult, float SpeedMult);

	/** @brief Initiates the repeating spawn timer based on the configured SpawnRate */
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void StartSpawningTimer();

	/** @brief Stops the spawn timer and destroys all currently active enemies spawned by this instance */
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void EndSpawningAndClearEnemies();

	/** @brief Notifies spawner when enemy dies */
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void NotifyEnemyDeath(AActor* DeadEnemy);

};
