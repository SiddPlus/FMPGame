// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"
#include "ProceduralGeneration.h"
#include "Kismet/GameplayStatics.h"
#include "TheGameState.h"
#include "EnemySpawner.h"
#include "PlayerPerks.h"
#include "TelemetryLogger.h"

ATheGameMode::ATheGameMode()
{
    
}

void ATheGameMode::BeginPlay()
{
    Super::BeginPlay();

    RefreshDifficultyScaling();
}

void ATheGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (NewPlayer)
    {
        RestartPlayer(NewPlayer);
    }

    if (ATheGameState* GS = GetGameState<ATheGameState>())
    {
        GS->TotalPlayersInGame++;

        RefreshDifficultyScaling();
    }
}

void ATheGameMode::RestartPlayer(AController* NewPlayer)
{
    Super::RestartPlayer(NewPlayer);

    if (NewPlayer)
    {
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
    for (APlayerController* PC : DownPlayers)
    {
        if (PC)
        {
            RestartPlayer(PC);
        }
    }
    DownPlayers.Empty();

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

    GS->CurrentRoundNumber++;

    RefreshDifficultyScaling();

    BaseRoundDuration += 60.0f;

    // Reset ready status for intermission
    ReadyPlayersSet.Empty();
    GS->ReadyPlayersCount = 0;
}

void ATheGameMode::PlayerReadyUp(APlayerController* PC)
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS || GS->bIsRoundActive || !PC) return;

    if (GS->bIsTeamWiped)
    {
        GS->bIsTeamWiped = false;
    }

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


void ATheGameMode::RegisterPlayerDown(APlayerController* PC)
{
    if (PC && !DownPlayers.Contains(PC))
    {
        DownPlayers.Add(PC);

        ATheGameState* GS = GetGameState<ATheGameState>();
        if (!GS) return;

        if (DownPlayers.Num() >= GS->TotalPlayersInGame && GS->TotalPlayersInGame > 0)
        {
            GS->bIsTeamWiped = true;
            EndRun();
        }
    }
}

void ATheGameMode::EndRun()
{
    for (APlayerController* PC : DownPlayers)
    {
        if (PC)
        {
            RestartPlayer(PC);

            if (APawn* NewPawn = PC->GetPawn())
            {
                UPlayerPerks* PerkComp = NewPawn->FindComponentByClass<UPlayerPerks>();
                if (PerkComp)
                {
                    PerkComp->EquippedPerks.Empty();
                }
            }
        }
    }
    DownPlayers.Empty();

    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    GetWorldTimerManager().ClearTimer(RoundTimerHandle);
    GS->bIsRoundActive = false;

    // Cleanup enemies
    for (AEnemySpawner* Spawner : CachedSpawners)
    {
        Spawner->EndSpawningAndClearEnemies();
    }

    // Scale difficulty for the next round
    

    GS->CurrentRoundNumber = 1;

    RefreshDifficultyScaling();

    BaseRoundDuration = 60.0f;

    // Reset ready status for intermission
    ReadyPlayersSet.Empty();
    GS->ReadyPlayersCount = 0;
}

void ATheGameMode::RefreshDifficultyScaling()
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    // Calculate scaling based on total players
    float PlayerScalingFactor = 1.0f + (GS->TotalPlayersInGame - 1) * 0.5f;

    // Calculate base values based on round number
    float BaseRate = FMath::Max(0.5f, 5.0f - (GS->CurrentRoundNumber * 0.2f));
    int32 BaseMax = 10 + (GS->CurrentRoundNumber * 2);

    // Apply scaling
    CurrentRoundSpawnRate = BaseRate / PlayerScalingFactor;
    CurrentRoundMaxEnemies = FMath::CeilToInt(BaseMax * PlayerScalingFactor);
}
