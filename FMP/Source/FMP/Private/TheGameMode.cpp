// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"
#include "ProceduralGeneration.h"
#include "Kismet/GameplayStatics.h"
#include "TheGameState.h"
#include "EnemySpawner.h"

ATheGameMode::ATheGameMode()
{
    
}

void ATheGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (NewPlayer)
    {
        RestartPlayer(NewPlayer);

        TArray<AActor*> FoundGenerators;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), AProceduralGeneration::StaticClass(), FoundGenerators);

        if (FoundGenerators.Num() > 0)
        {
            AProceduralGeneration* Generator = Cast<AProceduralGeneration>(FoundGenerators[0]);
            APawn* NewPawn = NewPlayer->GetPawn();

            if (NewPawn)
            {
                FVector TargetLocation = Generator->GetPlayerSpawnPoint();

                if (NewPlayer != UGameplayStatics::GetPlayerController(GetWorld(), 0))
                {
                    TargetLocation += FVector(150.0f, 0.0f, 0.0f);
                }

                NewPawn->SetActorLocation(TargetLocation);
            }
        }
    }

    if (ATheGameState* GS = GetGameState<ATheGameState>())
    {
        GS->TotalPlayersInGame++;
    }
}


void ATheGameMode::StartRound()
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    TArray<AActor*> FoundSpawners;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundSpawners);
    for (AActor* Actor : FoundSpawners)
    {
        if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
            CachedSpawners.Add(Spawner);
    }

    GS->RoundTimer = BaseRoundDuration;
    GS->bIsRoundActive = true;

    for (AEnemySpawner* Spawner : CachedSpawners)
    {
        Spawner->ConfigureSpawner(CurrentRoundSpawnRate, CurrentRoundMaxEnemies);
        Spawner->StartSpawningTimer();
    }

    GetWorldTimerManager().SetTimer(RoundTimerHandle, this, &ATheGameMode::AdvanceTimer, 1.0f, true);
}

void ATheGameMode::AdvanceTimer()
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (GS && GS->bIsRoundActive)
    {
        GS->RoundTimer -= 1.0f;
        if (GS->RoundTimer <= 0.0f) EndRound();
    }
}

void ATheGameMode::EndRound()
{
    
}

void ATheGameMode::PlayerReadyUp(APlayerController* PC)
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS || GS->bIsRoundActive || !PC) return;

    if (ReadyPlayersSet.Contains(PC))
    {
        // Player is already ready, so UNREADY them
        ReadyPlayersSet.Remove(PC);
    }
    else
    {
        // Player is not ready, so READY them up
        ReadyPlayersSet.Add(PC);
    }

    // Sync the count to the GameState so the UI updates for everyone
    GS->ReadyPlayersCount = ReadyPlayersSet.Num();

    // Auto-start when all are ready
    if (GS->ReadyPlayersCount >= GS->TotalPlayersInGame && GS->TotalPlayersInGame > 0)
    {
        StartRound();
    }
}

