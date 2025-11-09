// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class FMP_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<ACharacter> EnemyToSpawnClass;
	
	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "0.5"))
	float SpawnRate = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "100.0"))
	float SpawnRadius = 500.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning", Meta = (ClampMin = "1"))
	int MaxConcurrentEnemies = 10;

	FTimerHandle SpawnTimerHandle;
	
	UPROPERTY(VisibleAnywhere, Transient, Category = "Spawning")
    TArray<AActor*> SpawnedEnemies;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnEnemy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Spawning|Control")
	void ConfigureSpawner(float NewSpawnRate, int32 NewMaxConcurrentEnemies);

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void StartSpawningTimer();

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void EndSpawningAndClearEnemies();

};
