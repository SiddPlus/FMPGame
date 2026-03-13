// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameMode.h"

void ATheGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (NewPlayer)
    {
        RestartPlayer(NewPlayer);
    }
}

