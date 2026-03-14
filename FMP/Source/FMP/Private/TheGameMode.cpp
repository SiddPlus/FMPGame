// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"
#include "ProceduralGeneration.h"
#include "Kismet/GameplayStatics.h"
#include "TheGameState.h"

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
}


void ATheGameMode::StartRound()
{
    ATheGameState* GS = GetGameState<ATheGameState>();
    if (!GS) return;

    GS->RoundTimer = BaseRoundDuration;
    GS->bIsRoundActive = true;

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

