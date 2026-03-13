// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"
#include "ProceduralGeneration.h"
#include "Kismet/GameplayStatics.h"

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

