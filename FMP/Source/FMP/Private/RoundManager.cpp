// Fill out your copyright notice in the Description page of Project Settings.


#include "RoundManager.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ARoundManager::ARoundManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	NetUpdateFrequency = 1.0f; 

}

// Called when the game starts or when spawned
void ARoundManager::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARoundManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate the core state variables
	DOREPLIFETIME(ARoundManager, bIsRoundActive);
	DOREPLIFETIME(ARoundManager, RoundTimer);
	DOREPLIFETIME(ARoundManager, CurrentRoundNumber);
}

void ARoundManager::StartRound()
{
	if (HasAuthority()) // Server check
	{
		// 1. Initial State Setup
		RoundTimer = RoundDuration;
		bIsRoundActive = true;
		bHasRoundEnded = false;
		CurrentRoundNumber++;
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Round Started! Timer Reset."));
		
		// Ensure Tick is enabled for counting down
		SetActorTickEnabled(true);
	}
}

// Server-side only function to end the round
void ARoundManager::EndRound()
{
	if (HasAuthority() && bIsRoundActive && !bHasRoundEnded) // Server check
	{
		bIsRoundActive = false; // Stop the timer logic
		bHasRoundEnded = true;  // Prevent re-entry
		RoundTimer = 0.0f;      // Finalize the timer display to zero
		
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Round Ended! Time's Up."));
		
		// You would typically call a GameMode function here to handle match scoring, etc.
		
		// Disable Tick to save performance until the next round starts
		SetActorTickEnabled(false);
	}
}

// Public entry point to start the round (callable from Blueprints or GameMode)
void ARoundManager::BeginNewRound()
{
	if (HasAuthority()) // Only allow the server to initiate the start
	{
		StartRound();
	}
}


// Called every frame
void ARoundManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority() && bIsRoundActive)
	{
		// 1. Countdown logic
		RoundTimer -= DeltaTime;

		// 2. Display the timer (visible to all clients on their screens)
		GEngine->AddOnScreenDebugMessage(12345, DeltaTime + 0.1f, FColor::Yellow, 
			FString::Printf(TEXT("Round Timer: %.1f"), RoundTimer));

		// 3. Check for completion
		if (RoundTimer <= 0.0f)
		{
			EndRound();
		}
	}
	
	// *** CLIENT-SIDE DISPLAY (Optional, but useful for non-authoritative debug) ***
	// If a client receives a replicated timer value, they can display it too.
	// We only display the time if the server hasn't ended the round yet.
	else if (!HasAuthority() && bIsRoundActive) 
	{
		GEngine->AddOnScreenDebugMessage(12345, DeltaTime + 0.1f, FColor::Cyan, 
			FString::Printf(TEXT("Client View: %.1f"), RoundTimer));
	}

}

