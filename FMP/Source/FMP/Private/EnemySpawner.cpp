#include "EnemySpawner.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "NavigationSystem.h"

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
	// 1. Authorization Check: Only execute on the server
	if (!HasAuthority())
	{
		return;
	}
	
	// 2. Max Count Check
	if (!EnemyToSpawnClass || SpawnedEnemies.Num() >= MaxConcurrentEnemies)
	{
		return;
	}
	
	// 3. Determine Spawn Location
	FVector Origin = GetActorLocation();
	FVector RandomPoint = Origin + FMath::VRand() * FMath::FRand() * SpawnRadius;
	
	// Check NavMesh for a valid location (important for AI)
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	FNavLocation NavLocation;
	
	if (NavSys && NavSys->GetRandomReachablePointInRadius(Origin, SpawnRadius, NavLocation))
	{
		// Use the valid point found on the NavMesh
		RandomPoint = NavLocation.Location;
	}
	else
	{
		// Fallback: If NavMesh is unavailable, spawn at the random point and hope for the best
		UE_LOG(LogTemp, Warning, TEXT("Enemy Spawner failed to find reachable point on NavMesh. Spawning at random location."));
	}

	// 4. Spawn the Enemy
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	ACharacter* NewEnemy = GetWorld()->SpawnActor<ACharacter>(
		EnemyToSpawnClass,
		RandomPoint,
		FRotator::ZeroRotator,
		SpawnParams
	);

	if (NewEnemy)
	{
		SpawnedEnemies.Add(NewEnemy);
		// Optional: Attach delegate to enemy's death event to decrement CurrentEnemyCount
		// (Requires C++ or Blueprint logic in BP_Enemy to call a function on the spawner upon death)
	}
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

