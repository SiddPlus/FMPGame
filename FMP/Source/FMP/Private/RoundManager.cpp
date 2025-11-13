// Fill out your copyright notice in the Description page of Project Settings.


#include "RoundManager.h"
#include "Engine/Engine.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "EnemySpawner.h"

// Sets default values
ARoundManager::ARoundManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	NetUpdateFrequency = 1.0f;
	SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);

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
	DOREPLIFETIME(ARoundManager, CurrentRoundNumber)
	DOREPLIFETIME(ARoundManager, CurrentRoundSpawnRate);
	DOREPLIFETIME(ARoundManager, CurrentRoundMaxEnemies);
	DOREPLIFETIME(ARoundManager, RoundDuration);
}

void ARoundManager::Server_BeginNewRound_Implementation()
{
	StartRound();
}

void ARoundManager::OnRep_IsRoundActive()
{
	// This code runs on the client whenever bIsRoundActive is updated by the server
	if (bIsRoundActive)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Client: Round state received: ACTIVE."));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Magenta, TEXT("Client: Round state received: ENDED."));
	}
	
	// BROADCAST THE EVENT: This immediately notifies all listening Blueprints (HUD, PlayerController, etc.)
	OnRoundStateChanged.Broadcast(bIsRoundActive);
}

void ARoundManager::OnRep_RoundTimer()
{
	// This function runs on the client when RoundTimer is updated by the server 
	// (mainly for initial sync or the final 0.0 value).
	GEngine->AddOnScreenDebugMessage(1234, 5.f, FColor::Blue, 
		FString::Printf(TEXT("Client: RoundTimer initial/final sync: %.1f"), RoundTimer));
}

void ARoundManager::StartRound()
{
	if (HasAuthority()) // Server check
	{
		// Use GetAllActorsOfClass to find every instance of AEnemySpawner
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundActors);

		// Cast and store all found actors into our TArray<AEnemySpawner*>
		for (AActor* Actor : FoundActors)
		{
			if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
			{
				AllEnemySpawners.Add(Spawner);
			}
		}

		if (AllEnemySpawners.Num() > 0)
		{
			UE_LOG(LogTemp, Log, TEXT("Round Manager found %d Enemy Spawner(s)."), AllEnemySpawners.Num());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Round Manager could not find any AEnemySpawner actors in the level. Spawning will not work."));
		}
		
		// 1. Initial State Setup
		RoundTimer = RoundDuration;
		bIsRoundActive = true;
		bHasRoundEnded = false;
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Round Started! Timer Reset."));

		if (AllEnemySpawners.Num() > 0)
		{
			for (AEnemySpawner* Spawner : AllEnemySpawners)
			{
				if (Spawner)
				{
					Spawner->ConfigureSpawner(CurrentRoundSpawnRate, CurrentRoundMaxEnemies);
					Spawner->StartSpawningTimer();
				}
			}
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("All Enemy Spawners activated."));
		}
		
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

		if (AllEnemySpawners.Num() > 0)
		{
			for (AEnemySpawner* Spawner : AllEnemySpawners)
			{
				if (Spawner)
				{
					Spawner->EndSpawningAndClearEnemies();
				}
			}
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("All Enemy Spawning stopped and enemies cleared."));
		}
		
		// You would typically call a GameMode function here to handle match scoring, etc.
		
		// Disable Tick to save performance until the next round starts

		CurrentRoundNumber++;
		CurrentRoundSpawnRate = FMath::Max(0.1f, CurrentRoundSpawnRate - 0.1f);
		CurrentRoundMaxEnemies += 1;
		RoundDuration += 60.0f;
		
		SetActorTickEnabled(false);
	}
}

// Public entry point to start the round (callable from Blueprints or GameMode)
void ARoundManager::BeginNewRound()
{
	if (bIsRoundActive)
	{
		return;
	}
	
	if (HasAuthority()) // Only allow the server to initiate the start
	{
		StartRound();
	}
	else // If a client calls it, request the server to start the round via RPC
	{
		Server_BeginNewRound();
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

