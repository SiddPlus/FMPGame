// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameState.h"
#include "Net/UnrealNetwork.h"

ATheGameState::ATheGameState()
{
	// Ensure the GameState can tick if you want to smooth out timer displays locally
	PrimaryActorTick.bCanEverTick = true;
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

