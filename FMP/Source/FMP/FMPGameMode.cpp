// Copyright Epic Games, Inc. All Rights Reserved.

#include "FMPGameMode.h"
#include "TheGameState.h"
#include "EnemySpawner.h"
#include "Kismet/GameplayStatics.h"

AFMPGameMode::AFMPGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	GameStateClass = ATheGameState::StaticClass();
}

void AFMPGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (ATheGameState* GS = GetGameState<ATheGameState>())
	{
		GS->TotalPlayersInGame++; // Maintain accurate player count
	}
}

void AFMPGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	if (ATheGameState* GS = GetGameState<ATheGameState>())
	{
		GS->TotalPlayersInGame--;

		// Cleanup ready status if they disconnect
		if (APlayerController* PC = Cast<APlayerController>(Exiting))
		{
			ReadyPlayersSet.Remove(PC);
			GS->ReadyPlayersCount = ReadyPlayersSet.Num();
		}
	}
}

void AFMPGameMode::PlayerReadyUp(APlayerController* PC)
{
	ATheGameState* GS = GetGameState<ATheGameState>();
	if (!GS || GS->bIsRoundActive || !PC) return;

	// Toggle logic
	if (ReadyPlayersSet.Contains(PC))
	{
		ReadyPlayersSet.Remove(PC);
	}
	else
	{
		ReadyPlayersSet.Add(PC);
	}

	GS->ReadyPlayersCount = ReadyPlayersSet.Num();
	CheckAllPlayersReady();
}

void AFMPGameMode::CheckAllPlayersReady()
{
	ATheGameState* GS = GetGameState<ATheGameState>();
	if (GS && GS->TotalPlayersInGame > 0)
	{
		if (ReadyPlayersSet.Num() >= GS->TotalPlayersInGame)
		{
			StartRound();
		}
	}
}

void AFMPGameMode::StartRound()
{
	ATheGameState* GS = GetGameState<ATheGameState>();
	if (!GS) return;

	// Initialize state
	GS->RoundTimer = RoundDuration;
	GS->bIsRoundActive = true;
	ReadyPlayersSet.Empty();
	GS->ReadyPlayersCount = 0;

	// Configure and start all spawners in the level
	TArray<AActor*> FoundSpawners;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundSpawners);

	for (AActor* Actor : FoundSpawners)
	{
		if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
		{
			Spawner->ConfigureSpawner(CurrentRoundSpawnRate, CurrentRoundMaxEnemies);
			Spawner->StartSpawningTimer();
		}
	}
}

void AFMPGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ATheGameState* GS = GetGameState<ATheGameState>();
	if (GS && GS->bIsRoundActive)
	{
		GS->RoundTimer -= DeltaTime; // Server authoritative countdown

		if (GS->RoundTimer <= 0.0f)
		{
			EndRound();
		}
	}
}

void AFMPGameMode::EndRound()
{
	ATheGameState* GS = GetGameState<ATheGameState>();
	if (!GS) return;

	GS->bIsRoundActive = false;
	GS->RoundTimer = 0.0f;

	// Stop all spawners
	TArray<AActor*> FoundSpawners;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundSpawners);

	for (AActor* Actor : FoundSpawners)
	{
		if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
		{
			Spawner->EndSpawningAndClearEnemies();
		}
	}

	// Update difficulty for next round
	GS->CurrentRoundNumber++;
	CurrentRoundSpawnRate = FMath::Max(0.1f, CurrentRoundSpawnRate - 0.1f);
	CurrentRoundMaxEnemies += 1;
	RoundDuration += 60.0f;
}
