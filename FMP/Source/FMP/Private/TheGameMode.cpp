// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"
#include "TheGameState.h"
#include "EnemySpawner.h"
#include "PlayerPerks.h"
#include "TelemetryLogger.h"
#include "Kismet/GameplayStatics.h"

ATheGameMode::ATheGameMode()
{
    GameStateClass = ATheGameState::StaticClass();
}

void ATheGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Cache spawners to avoid expensive searches mid-game
    TArray<AActor*> FoundSpawners;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundSpawners);
    for (AActor* Actor : FoundSpawners)
    {
        if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
            CachedSpawners.Add(Spawner);
    }
}

void ATheGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
    if (ATheGameState* GS = GetGameState<ATheGameState>())
    {
        GS->TotalPlayersInGame++;
    }
}

void ATheGameMode::Logout(AController* Exiting)
{
    Super::Logout(Exiting);
    if (ATheGameState* GS = GetGameState<ATheGameState>())
    {
        GS->TotalPlayersInGame--;
        if (APlayerController* PC = Cast<APlayerController>(Exiting))
        {
            ReadyPlayersSet.Remove(PC);
            GS->ReadyPlayersCount = ReadyPlayersSet.Num();
        }
    }
}

void ATheGameMode::PlayerReadyUp(APlayerController* PC)
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS || GS->bIsRoundActive || !PC) return;

    ReadyPlayersSet.Add(PC);
    GS->ReadyPlayersCount = ReadyPlayersSet.Num();

    // Auto-start when all are ready
    if (GS->ReadyPlayersCount >= GS->TotalPlayersInGame && GS->TotalPlayersInGame > 0)
    {
        StartRound();
    }
}

void ATheGameMode::StartRound()
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    GS->RoundTimer = BaseRoundDuration;
    GS->bIsRoundActive = true;

    // Trigger all spawners
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
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    GetWorldTimerManager().ClearTimer(RoundTimerHandle);
    GS->bIsRoundActive = false;

    // Cleanup enemies
    for (AEnemySpawner* Spawner : CachedSpawners)
    {
        Spawner->EndSpawningAndClearEnemies();
    }

    // Process Perks and Telemetry for all players (OG Core Logic)
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (APlayerController* PC = It->Get())
        {
            if (APawn* Pawn = PC->GetPawn())
            {
                if (UPlayerPerks* Perks = Pawn->FindComponentByClass<UPlayerPerks>())
                {
                    Perks->CheckAndUnlockPerks(GS->CurrentRoundNumber); // Unlocks & notifies UI
                    TelemetryLogger::RecordSessionData(GS->CurrentRoundNumber, Perks->UnlockedPerks); // Save state
                }
            }
        }
    }

    // Scale difficulty for the next round
    GS->CurrentRoundNumber++;
    CurrentRoundSpawnRate = FMath::Max(0.1f, CurrentRoundSpawnRate - 0.1f);
    CurrentRoundMaxEnemies += 1;
    BaseRoundDuration += 60.0f;

    // Reset ready status for intermission
    ReadyPlayersSet.Empty();
    GS->ReadyPlayersCount = 0;
}

