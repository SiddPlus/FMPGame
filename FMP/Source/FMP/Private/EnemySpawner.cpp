#include "EnemySpawner.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Ensure the spawner only exists and runs logic on the server in a multiplayer game
	bReplicates = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	//StartSpawningTimer();
	
}

void AEnemySpawner::StartSpawningTimer()
{
	// IMPORTANT: Check if this Actor instance has network authority (is the server).
	if (HasAuthority())
	{
		// Clear any existing timer before setting a new one
		GetWorldTimerManager().ClearTimer(SpawnTimerHandle);

		// Set a new repeating timer on the Server
		GetWorldTimerManager().SetTimer(
			SpawnTimerHandle,
			this,
			&AEnemySpawner::SpawnEnemy,
			SpawnRate,
			true // Loop: Timer will automatically repeat
		);
	}
}

void AEnemySpawner::EndSpawningAndClearEnemies()
{
	// IMPORTANT: Ensure only the Server executes game logic that affects replication or timers.
	if (HasAuthority())
	{
		// 1. Clear the timer
		GetWorldTimerManager().ClearTimer(SpawnTimerHandle);

		// 2. Despawn/Destroy Enemies (Actual logic)
		for (AActor* Enemy : SpawnedEnemies)
		{
			// Calling Destroy() on the server will automatically replicate the destruction 
			// to all connected clients, clearing the enemy from their worlds as well.
			if (IsValid(Enemy))
			{
				Enemy->Destroy();
			}
		}

		// 3. Clear the tracking array (The pointers are now invalid, so we clear the array)
		SpawnedEnemies.Empty();
	}
}

void AEnemySpawner::ConfigureSpawner(float NewSpawnRate, int32 NewMaxConcurrentEnemies)
{
	// Only the server should apply configuration changes
	if (HasAuthority())
	{
		SpawnRate = NewSpawnRate;
		MaxConcurrentEnemies = NewMaxConcurrentEnemies;
		// NOTE: The StartSpawningTimer() function must be called after this
		// to apply the new SpawnRate to the FTimerHandle.
	}
}

void AEnemySpawner::SpawnEnemy()
{
	if (!HasAuthority() || !EnemyToSpawnClass || SpawnedEnemies.Num() >= MaxConcurrentEnemies) return;

	FVector Origin = GetActorLocation();

	// 1. Trace DOWN from above the spawner to find the PHYSICAL ground
	FHitResult Hit;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this);

	// Start trace 500 units above, end 1000 units below
	FVector Start = Origin + FVector(0, 0, 500);
	FVector End = Origin - FVector(0, 0, 1000);

	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams))
	{
		// 2. We found the physical ground. Now find a spot on the NavMesh nearby.
		UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
		FNavLocation NavLocation;

		if (NavSys && NavSys->GetRandomReachablePointInRadius(Hit.ImpactPoint, SpawnRadius, NavLocation))
		{
			// 3. SPAWN OFFSET: 
			// We spawn them 70 units ABOVE the NavLocation.
			// This ensures they "drop" onto the floor rather than spawning inside it.
			FVector FinalSpawnPos = NavLocation.Location + FVector(0, 0, 70.0f);

			FActorSpawnParameters SpawnParams;
			// IMPORTANT: If they would hit a tree, this prevents the spawn
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			ACharacter* NewEnemy = GetWorld()->SpawnActor<ACharacter>(
				EnemyToSpawnClass,
				FinalSpawnPos,
				FRotator::ZeroRotator,
				SpawnParams
			);

			if (NewEnemy)
			{
				SpawnedEnemies.Add(NewEnemy);

				// FORCE the character to "Land" on the procedural floor
				NewEnemy->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
			}
		}
	}
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

