// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameState.h"
#include "PerformanceLogger.h"
#include "Net/UnrealNetwork.h"

ATheGameState::ATheGameState()
{
	PrimaryActorTick.bCanEverTick = true;

	PerformanceLogger = CreateDefaultSubobject<UPerformanceLogger>(TEXT("PerformanceLogger"));
}

void ATheGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATheGameState, bIsRoundActive);
	DOREPLIFETIME(ATheGameState, RoundTimer);
	DOREPLIFETIME(ATheGameState, CurrentRoundNumber);
	DOREPLIFETIME(ATheGameState, ReadyPlayersCount);
	DOREPLIFETIME(ATheGameState, TotalPlayersInGame);
}

