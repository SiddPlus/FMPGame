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

	// Only start the timer on the authoritative server
	if (HasAuthority())
	{
		// Set a timer to repeatedly call the SpawnEnemy function
		GetWorldTimerManager().SetTimer(
			SpawnTimerHandle,
			this,
			&AEnemySpawner::SpawnEnemy,
			SpawnRate,
			true // Loop
		);
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
	if (!EnemyToSpawnClass || CurrentEnemyCount >= MaxConcurrentEnemies)
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
		CurrentEnemyCount++;
		// Optional: Attach delegate to enemy's death event to decrement CurrentEnemyCount
		// (Requires C++ or Blueprint logic in BP_Enemy to call a function on the spawner upon death)
		
		UE_LOG(LogTemp, Log, TEXT("Spawned new enemy at %s. Current count: %d"), *RandomPoint.ToString(), CurrentEnemyCount);
	}
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

