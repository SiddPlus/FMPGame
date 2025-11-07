// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralGeneration.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/StaticMesh.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "HAL/PlatformTime.h"
#include "Engine/Engine.h"
// **Multiplayer Change:** Required for DOREPLIFETIME macro
#include "Net/UnrealNetwork.h"

// Sets default values
AProceduralGeneration::AProceduralGeneration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// **Multiplayer Change:** Enable replication
	bReplicates = true;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProceduralMesh");
	ProceduralMesh->SetupAttachment(GetRootComponent());
}

// **Multiplayer Change:** Register the Seed variable for replication
void AProceduralGeneration::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProceduralGeneration, Seed);
}

// **Multiplayer Change:** RepNotify Implementation
void AProceduralGeneration::OnRep_Seed()
{
	// Run map generation only after the deterministic seed has been set/received.
	if (Seed != 0)
	{
		GenerateMap();
	}
}

// **Refactor:** The entire map generation logic is now in this function.
void AProceduralGeneration::GenerateMap()
{
	// Initialize the deterministic random stream using the synchronized seed
	FMath::RandInit(Seed);

	Vertices.Reset();
	Triangles.Reset();
	UV0.Reset();
	Normals.Reset();
	Tangents.Reset();
	SpawnedObjectGrid.Reset();

	SpawnedMeshCounts.Reset();
	SpawnedActorCounts.Reset();

	for (auto& Elem : MeshToHISMMap)
	{
		if (Elem.Value)
		{
			Elem.Value->ClearInstances();
			Elem.Value->DestroyComponent();
		}
	}
	MeshToHISMMap.Empty();

	// Noise offset must be generated here using the initialized, deterministic random stream
	NoiseOffset = FVector2D(FMath::RandRange(-10000.0f, 10000.0f), FMath::RandRange(-10000.0f, 10000.0f));

	CreateVertices();
	CreateTriangles();

	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UV0, Normals, Tangents);

	ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, TArray<FColor>(), Tangents, true);
	ProceduralMesh->SetMaterial(0, TerrainMaterial);

	SetupHISMComponents();
	PopulateObjects();

	BorderExclusion = FMath::CeilToInt(OutOfBoundsDepth / Scale);
}

// Called when the game starts or when spawned
void AProceduralGeneration::BeginPlay()
{
	Super::BeginPlay();

	// **Multiplayer Change:** Only the server (HasAuthority()) generates and sets the replicated Seed.
	if (HasAuthority())
	{
		// If Seed is the default value (0), generate a new one based on time.
		if (Seed == 0)
		{
			int32 RandomTimeSeed = FMath::TruncToInt(FPlatformTime::Seconds() * 1000.0f);
			// Set the replicated variable. This automatically triggers OnRep_Seed on all clients.
			Seed = RandomTimeSeed;
		}

		// Manually call the RepNotify function to run the generation logic on the Server immediately.
		OnRep_Seed();
	}
	// Clients wait for the Seed to be replicated from the server, which automatically triggers OnRep_Seed().
	
}

// Called every frame
void AProceduralGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (PlayerPawn)
	{
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		bool bCurrentlyInOutOfBounds = IsPlayerInOutOfBounds(PlayerLocation);

		if (bCurrentlyInOutOfBounds && !bIsPlayerOutOfBounds)
		{
			bIsPlayerOutOfBounds = true;
			OutOfBoundsTimer = OutOfBoundsCountdownDuration;
			bPlayerIsDead = false;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Out of Bounds!")); // Player just entered out of bounds region
		}
		else if (bCurrentlyInOutOfBounds && bIsPlayerOutOfBounds)
		{
			if (!bPlayerIsDead)
			{
				OutOfBoundsTimer -= DeltaTime;
				if (OutOfBoundsTimer > 0)
				{
					GEngine->AddOnScreenDebugMessage(12345, DeltaTime + 0.1f, FColor::Yellow, FString::Printf(TEXT("Countdown: %.1f"), OutOfBoundsTimer)); // Countdown until player is dead
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player is dead!")); // Player is dead
					bPlayerIsDead = true;
				}
			}
		}
		else if (!bCurrentlyInOutOfBounds && bIsPlayerOutOfBounds)
		{
			bIsPlayerOutOfBounds = false;
			OutOfBoundsTimer = 0.0f;
			bPlayerIsDead = false;
		}
	}
}

void AProceduralGeneration::ApplyMaterialToTerrain(UMaterialInterface* NewMaterial)
{    
    if (ProceduralMesh && NewMaterial)
    {
        ProceduralMesh->SetMaterial(0, NewMaterial);
        TerrainMaterial = NewMaterial;
    }
}

void AProceduralGeneration::CreateVertices()
{
    for (int i = 0; i <= XSize; ++i)
    {
        for (int j = 0; j <= YSize; ++j)
        {
            float Z = FMath::PerlinNoise2D(FVector2D((i * NoiseScale + NoiseOffset.X), (j * NoiseScale + NoiseOffset.Y))) * ZMultiplier;
            Vertices.Add(FVector(i * Scale, j * Scale, Z));
            UV0.Add(FVector2D(i * UVScale, j * UVScale));
        }
    }
}

void AProceduralGeneration::CreateTriangles()
{
    int Vertex = 0;
    for (int i = 0; i < XSize; ++i)
    {
        for (int j = 0; j < YSize; ++j)
        {
            Triangles.Add(Vertex);
            Triangles.Add(Vertex + 1);
            Triangles.Add(Vertex + YSize + 1);
            Triangles.Add(Vertex + 1);
            Triangles.Add(Vertex + YSize + 2);
            Triangles.Add(Vertex + YSize + 1);

            Vertex++;
        }
        Vertex++;
    }
}

void AProceduralGeneration::SetupHISMComponents()
{
    auto SetupHISM = [&](UStaticMesh* Mesh, UMaterialInterface* Material, FString Suffix)
    {
        if (Mesh && !MeshToHISMMap.Contains(Mesh))
        {
            UHierarchicalInstancedStaticMeshComponent* NewHISM = NewObject<UHierarchicalInstancedStaticMeshComponent>(this, FName(*("HISM_" + Suffix)));
            if (NewHISM)
            {
                NewHISM->RegisterComponent();
                NewHISM->SetupAttachment(GetRootComponent());
                NewHISM->SetStaticMesh(Mesh);
                if (Material)
                {
                    NewHISM->SetMaterial(0, Material);
                }
                MeshToHISMMap.Add(Mesh, NewHISM);
            }
        }
    };

    for (const FMeshPopulationSetting& Setting : MeshPopulationSettings)
    {
        SetupHISM(Setting.Mesh, Setting.Material, "GeneralMesh_" + Setting.Mesh->GetName());
    }

    for (const FBorderMeshSpawnSetting& Setting : BorderMeshSpawnSettings)
    {
        SetupHISM(Setting.Mesh, Setting.Material, "BorderMesh_" + Setting.Mesh->GetName());
    }
}

FVector AProceduralGeneration::GetNormalAtVertex(int VertexIndex) const
{
    if (Normals.IsValidIndex(VertexIndex))
    {
        return Normals[VertexIndex];
    }
    return FVector::UpVector;
}

FIntPoint AProceduralGeneration::GetGridCoordinates(const FVector& Location) const
{
    return FIntPoint(
        FMath::FloorToInt(Location.X / GridCellSize),
        FMath::FloorToInt(Location.Y / GridCellSize)
    );
}

bool AProceduralGeneration::IsLocationClear(const FVector& Location, float CheckRadius)
{
    FIntPoint CurrentGridCoord = GetGridCoordinates(Location);

    for (int XOffset = -1; XOffset <= 1; ++XOffset)
    {
        for (int YOffset = -1; YOffset <= 1; ++YOffset)
        {
            FIntPoint NeighborGridCoord(CurrentGridCoord.X + XOffset, CurrentGridCoord.Y + YOffset);

            if (SpawnedObjectGrid.Contains(NeighborGridCoord))
            {
                for (const FSpawnedObjectInfo& ExistingObject : SpawnedObjectGrid[NeighborGridCoord])
                {
                    float CombinedMinDistance = CheckRadius + ExistingObject.Radius;
                    float CombinedMinDistanceSquared = FMath::Square(CombinedMinDistance);

                    if (FVector::DistSquared(Location, ExistingObject.Location) < CombinedMinDistanceSquared)
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void AProceduralGeneration::AddObjectToGrid(const FVector& Location, float Radius)
{
    FIntPoint GridCoord = GetGridCoordinates(Location);
    SpawnedObjectGrid.FindOrAdd(GridCoord).Add(FSpawnedObjectInfo(Location, Radius));
}

FVector AProceduralGeneration::GetRandomValidSpawnLocation(float Radius, FVector& OutSurfaceNormal)
{
    int MaxAttempts = 1000;
    for (int Attempt = 0; Attempt < MaxAttempts; ++Attempt)
    {
        int RandX = FMath::RandRange(BorderExclusion, XSize - BorderExclusion);
        int RandY = FMath::RandRange(BorderExclusion, YSize - BorderExclusion);

        int VertexIndex = RandX * (YSize + 1) + RandY;
        if (Vertices.IsValidIndex(VertexIndex))
        {
            FVector PotentialSpawnLocation = Vertices[VertexIndex];
            FVector SurfaceNormal = GetNormalAtVertex(VertexIndex);

            float CurrentSlopeAngle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(FVector::UpVector, SurfaceNormal)));

            if (CurrentSlopeAngle > MaxSlopeAngle && MaxSlopeAngle >= 0)
            {
                continue;
            }
            
            if (IsLocationClear(PotentialSpawnLocation, Radius))
            {
                OutSurfaceNormal = SurfaceNormal;
                return PotentialSpawnLocation;
            }
        }
    }
    return FVector::ZeroVector;
}

FVector AProceduralGeneration::GetBorderMidpointLocation(EBorder BorderType, FVector& OutSurfaceNormal)
{
    int TargetX = -1;
    int TargetY = -1;

    switch (BorderType)
    {
    case EBorder::North: 
        TargetX = FMath::RoundToInt(XSize / 2.0f);
        TargetY = 0;
        break;
    case EBorder::South: 
        TargetX = FMath::RoundToInt(XSize / 2.0f);
        TargetY = YSize;
        break;
    case EBorder::West: 
        TargetX = 0;
        TargetY = FMath::RoundToInt(YSize / 2.0f);
        break;
    case EBorder::East: 
        TargetX = XSize;
        TargetY = FMath::RoundToInt(YSize / 2.0f);
        break;
    default:
        OutSurfaceNormal = FVector::UpVector;
        return FVector::ZeroVector;
    }

    int VertexIndex = TargetX * (YSize + 1) + TargetY;
    if (Vertices.IsValidIndex(VertexIndex))
    {
        FVector BaseLocation = Vertices[VertexIndex];
        FVector SurfaceNormal = GetNormalAtVertex(VertexIndex);

        float CurrentSlopeAngle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(FVector::UpVector, SurfaceNormal)));

        if (CurrentSlopeAngle > MaxSlopeAngle && MaxSlopeAngle >= 0)
        {
            OutSurfaceNormal = FVector::UpVector;
            return FVector::ZeroVector;
        }

        OutSurfaceNormal = SurfaceNormal;
        return BaseLocation;
    }
    OutSurfaceNormal = FVector::UpVector;
    return FVector::ZeroVector;
}

FVector2D AProceduralGeneration::GetBorderGridCoordinates(EBorder BorderType, EBorderSpawnLocation LocationType) const
{
    float TargetXGrid = 0;
    float TargetYGrid = 0;

    float XMidGrid = XSize / 2.0f;
    float YMidGrid = YSize / 2.0f;

    switch (BorderType)
    {
        case EBorder::North: 
            TargetYGrid = 0;
            if (LocationType == EBorderSpawnLocation::Middle) TargetXGrid = XMidGrid;
            else if (LocationType == EBorderSpawnLocation::Left) TargetXGrid = XSize * BorderSpawnOffsetFraction;
            else if (LocationType == EBorderSpawnLocation::Right) TargetXGrid = XSize * (1.0f - BorderSpawnOffsetFraction);
            break;
        case EBorder::South: 
            TargetYGrid = YSize;
            if (LocationType == EBorderSpawnLocation::Middle) TargetXGrid = XMidGrid;
            else if (LocationType == EBorderSpawnLocation::Left) TargetXGrid = XSize * (1.0f - BorderSpawnOffsetFraction);
            else if (LocationType == EBorderSpawnLocation::Right) TargetXGrid = XSize * BorderSpawnOffsetFraction;
            break;
        case EBorder::West: 
            TargetXGrid = 0;
            if (LocationType == EBorderSpawnLocation::Middle) TargetYGrid = YMidGrid;
            else if (LocationType == EBorderSpawnLocation::Left) TargetYGrid = YSize * (1.0f - BorderSpawnOffsetFraction);
            else if (LocationType == EBorderSpawnLocation::Right) TargetYGrid = YSize * BorderSpawnOffsetFraction;
            break;
        case EBorder::East: 
            TargetXGrid = XSize;
            if (LocationType == EBorderSpawnLocation::Middle) TargetYGrid = YMidGrid;
            else if (LocationType == EBorderSpawnLocation::Left) TargetYGrid = YSize * BorderSpawnOffsetFraction;
            else if (LocationType == EBorderSpawnLocation::Right) TargetYGrid = YSize * (1.0f - BorderSpawnOffsetFraction);
            break;
    }
    return FVector2D(TargetXGrid, TargetYGrid);
}

FVector AProceduralGeneration::GetRandomPlanarOffset(const FVector& BaseLocation, const FVector& SurfaceNormal, float OffsetMagnitude)
{
    if (SurfaceNormal.IsNearlyZero())
    {
        return BaseLocation;
    }

    FVector Tangent = FVector::CrossProduct(SurfaceNormal, FVector::UpVector).GetSafeNormal();
    
    if (Tangent.IsNearlyZero())
    {
        Tangent = FVector::CrossProduct(SurfaceNormal, FVector::RightVector).GetSafeNormal();
    }

    FVector BiTangent = FVector::CrossProduct(SurfaceNormal, Tangent).GetSafeNormal();

    FVector OffsetLocation = BaseLocation;
    OffsetLocation += Tangent * FMath::RandRange(-OffsetMagnitude, OffsetMagnitude);
    OffsetLocation += BiTangent * FMath::RandRange(-OffsetMagnitude, OffsetMagnitude);

    return OffsetLocation;
}


FVector AProceduralGeneration::GetPlayerSpawnPoint()
{
    FVector PlayerSpawnLocation = FVector::ZeroVector;
    FVector SurfaceNormal = FVector::UpVector;

    int RandomBorderInt = FMath::RandRange(0, 3);
    EBorder RandomBorder = static_cast<EBorder>(RandomBorderInt);

    FVector BaseMidpointLocation = GetBorderMidpointLocation(RandomBorder, SurfaceNormal);

    if (!BaseMidpointLocation.IsZero())
    {
        FVector ActualGroundLocation;
        FVector ActualSurfaceNormal;
        ActualGroundLocation = GetTerrainPointAtWorldLocationXY(BaseMidpointLocation, ActualSurfaceNormal);
        PlayerSpawnLocation = ActualGroundLocation + ActualSurfaceNormal * PlayerSpawnForwardOffset;
    }
    
    return PlayerSpawnLocation;
}

FVector AProceduralGeneration::GetTerrainPointAtWorldLocationXY(FVector WorldLocationXY, FVector& OutSurfaceNormal)
{
    FHitResult HitResult;
    FVector TraceStart = FVector(WorldLocationXY.X, WorldLocationXY.Y, ZMultiplier * 2.0f); 
    FVector TraceEnd = FVector(WorldLocationXY.X, WorldLocationXY.Y, -ZMultiplier * 2.0f);   

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this); 
    Params.bReturnPhysicalMaterial = false;
    Params.bTraceComplex = true;

    if (ProceduralMesh->LineTraceComponent(HitResult, TraceStart, TraceEnd, Params))
    {
        OutSurfaceNormal = HitResult.Normal;
        return HitResult.Location;
    }

    OutSurfaceNormal = FVector::UpVector;
    return FVector::ZeroVector; 
}

bool AProceduralGeneration::IsPlayerInOutOfBounds(const FVector& PlayerLocation) const
{
    float MinWorldX = 0.0f;
    float MaxWorldX = XSize * Scale;
    float MinWorldY = 0.0f;
    float MaxWorldY = YSize * Scale;

    float InnerSafeMinX = MinWorldX + OutOfBoundsDepth;
    float InnerSafeMaxX = MaxWorldX - OutOfBoundsDepth;
    float InnerSafeMinY = MinWorldY + OutOfBoundsDepth;
    float InnerSafeMaxY = MaxWorldY - OutOfBoundsDepth;

    bool bIsInSafeZone = (PlayerLocation.X >= InnerSafeMinX && PlayerLocation.X <= InnerSafeMaxX &&
                          PlayerLocation.Y >= InnerSafeMinY && PlayerLocation.Y <= InnerSafeMaxY);

    return !bIsInSafeZone;
}

void AProceduralGeneration::PopulateObjects()
{
    SpawnedObjectGrid.Reset();
    SpawnedMeshCounts.Reset();
    SpawnedActorCounts.Reset();

    for (const FMeshPopulationSetting& MeshSetting : MeshPopulationSettings)
    {
        if (MeshSetting.Mesh)
        {
            // Removed MaxSpawnCount == 1 SingleSpawnChance check here.
            
            if (MeshSetting.MaxSpawnCount > 0)
            {
                int CurrentAttempts = 0;
                const int MaxTotalAttemptsPerItem = 2000;

                while (SpawnedMeshCounts.FindRef(MeshSetting.Mesh) < MeshSetting.MaxSpawnCount && CurrentAttempts < MaxTotalAttemptsPerItem)
                {
                    FVector RawTerrainPoint;
                    FVector RawSurfaceNormal;
                    RawTerrainPoint = GetRandomValidSpawnLocation(MeshSetting.Radius, RawSurfaceNormal);

                    if (!RawTerrainPoint.IsZero())
                    {
                        FVector ActualGroundLocation;
                        FVector ActualSurfaceNormal;
                        ActualGroundLocation = GetTerrainPointAtWorldLocationXY(RawTerrainPoint, ActualSurfaceNormal);

                        if (!ActualGroundLocation.IsZero())
                        {
                            FVector FinalSpawnLocation = ActualGroundLocation + ActualSurfaceNormal * 0.1f;

                            if (IsLocationClear(FinalSpawnLocation, MeshSetting.Radius))
                            {
                                UHierarchicalInstancedStaticMeshComponent* HISM = MeshToHISMMap.FindRef(MeshSetting.Mesh);
                                if (HISM)
                                {
                                    FRotator InstanceBaseRotation = FRotationMatrix::MakeFromZ(ActualSurfaceNormal).Rotator();
                                    FRotator RandomRotation = FRotator(
                                        FMath::RandRange(MeshSetting.RotationMin.Roll, MeshSetting.RotationMax.Roll),
                                        FMath::RandRange(MeshSetting.RotationMin.Yaw, MeshSetting.RotationMax.Yaw),
                                        FMath::RandRange(MeshSetting.RotationMin.Pitch, MeshSetting.RotationMax.Pitch)
                                    );
                                    FRotator FinalRotation = InstanceBaseRotation + RandomRotation;

                                    FVector RandomScale = FVector(
                                        FMath::RandRange(MeshSetting.ScaleMin.X, MeshSetting.ScaleMax.X),
                                        FMath::RandRange(MeshSetting.ScaleMin.Y, MeshSetting.ScaleMax.Y),
                                        FMath::RandRange(MeshSetting.ScaleMin.Z, MeshSetting.ScaleMax.Z)
                                    );
                                    FTransform InstanceTransform(FinalRotation, FinalSpawnLocation, RandomScale);
                                    HISM->AddInstance(InstanceTransform);
                                    AddObjectToGrid(FinalSpawnLocation, MeshSetting.Radius);
                                    SpawnedMeshCounts.FindOrAdd(MeshSetting.Mesh)++;
                                    CurrentAttempts = 0;
                                } else {
                                    CurrentAttempts++;
                                }
                            } else {
                                CurrentAttempts++;
                            }
                        } else {
                            CurrentAttempts++;
                        }
                    }
                    else
                    {
                        CurrentAttempts++;
                    }
                }
            }
        }
    }

    for (const FActorPopulationSetting& ActorSetting : ActorPopulationSettings)
    {
        if (ActorSetting.ActorClass)
        {
            // Removed MaxSpawnCount == 1 SingleSpawnChance check here.

            if (ActorSetting.MaxSpawnCount > 0)
            {
                int CurrentAttempts = 0;
                const int MaxTotalAttemptsPerItem = 2000;

                while (SpawnedActorCounts.FindRef(ActorSetting.ActorClass) < ActorSetting.MaxSpawnCount && CurrentAttempts < MaxTotalAttemptsPerItem)
                {
                    FVector RawTerrainPoint;
                    FVector RawSurfaceNormal;
                    RawTerrainPoint = GetRandomValidSpawnLocation(ActorSetting.Radius, RawSurfaceNormal);

                    if (!RawTerrainPoint.IsZero())
                    {
                        FVector ActualGroundLocation;
                        FVector ActualSurfaceNormal;
                        ActualGroundLocation = GetTerrainPointAtWorldLocationXY(RawTerrainPoint, ActualSurfaceNormal);

                        if (!ActualGroundLocation.IsZero())
                        {
                            FVector FinalSpawnLocation = ActualGroundLocation + ActualSurfaceNormal * 0.1f;

                            if (IsLocationClear(FinalSpawnLocation, ActorSetting.Radius))
                            {
                                // **Multiplayer Note:** Actors must be spawned on the server
                                if (HasAuthority())
                                {
                                    FActorSpawnParameters SpawnParams;
                                    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
                                    GetWorld()->SpawnActor<AActor>(ActorSetting.ActorClass, FinalSpawnLocation, FRotationMatrix::MakeFromZ(ActualSurfaceNormal).Rotator(), SpawnParams);
                                    AddObjectToGrid(FinalSpawnLocation, ActorSetting.Radius);
                                    SpawnedActorCounts.FindOrAdd(ActorSetting.ActorClass)++;
                                    CurrentAttempts = 0;
                                }
                            }
                            else
                            {
                                CurrentAttempts++;
                            }
                        }
                        else
                        {
                            CurrentAttempts++;
                        }
                    }
                    else
                    {
                        CurrentAttempts++;
                    }
                }
            }
        }
    }

    for (const FBorderMeshSpawnSetting& BorderMeshSetting : BorderMeshSpawnSettings)
    {
        if (!BorderMeshSetting.Mesh) continue;

        // **Multiplayer Note:** Only run the random logic on the server to keep it deterministic
        // The HISM instances are local, but the *random number* calls must be deterministic on all clients.
        // FMath::RandInit(Seed) at the start of GenerateMap handles this.
        int NumBordersToSpawn = FMath::RandRange(1, 4); 
        TArray<EBorder> AllBorders = {EBorder::North, EBorder::South, EBorder::West, EBorder::East};
        for (int i = 0; i < AllBorders.Num() - 1; ++i)
        {
            int32 RandIndex = FMath::RandRange(i, AllBorders.Num() - 1);
            if (i != RandIndex)
            {
                AllBorders.Swap(i, RandIndex);
            }
        }

        for (int i = 0; i < NumBordersToSpawn; ++i)
        {
            EBorder BorderType = AllBorders[i];
            int SpawnedCountThisSide = 0;
            int CurrentSideAttempts = 0;
            const int MaxSideAttempts = BorderMeshSetting.MaxCountPerSide * 5; 

            while (SpawnedCountThisSide < BorderMeshSetting.MaxCountPerSide && CurrentSideAttempts < MaxSideAttempts)
            {
                EBorderSpawnLocation RandomSpawnLocationType = static_cast<EBorderSpawnLocation>(FMath::RandRange(0, 2));

                FVector2D BorderGridCoords = GetBorderGridCoordinates(BorderType, RandomSpawnLocationType);
                FVector InitialXYLocation = FVector(BorderGridCoords.X * Scale, BorderGridCoords.Y * Scale, 0.0f);

                FVector PlanarForwardDirection = FVector::ZeroVector;
                switch (BorderType)
                {
                    case EBorder::North: PlanarForwardDirection = FVector(0, 1, 0); break; 
                    case EBorder::South: PlanarForwardDirection = FVector(0, -1, 0); break; 
                    case EBorder::West: PlanarForwardDirection = FVector(1, 0, 0); break; 
                    case EBorder::East: PlanarForwardDirection = FVector(-1, 0, 0); break; 
                }

                FVector OffsetXYLocation = InitialXYLocation + PlanarForwardDirection * BorderMeshSetting.ForwardOffsetFromBorder;

                FVector NewSurfaceNormal;
                FVector TerrainPoint = GetTerrainPointAtWorldLocationXY(OffsetXYLocation, NewSurfaceNormal);

                if (!TerrainPoint.IsZero())
                {
                    FVector InitialSpawnLocation = TerrainPoint + NewSurfaceNormal * 0.1f;
                    FVector FinalSpawnLocation = GetRandomPlanarOffset(InitialSpawnLocation, NewSurfaceNormal, BorderMeshSetting.Radius * 0.5f);

                    if (IsLocationClear(FinalSpawnLocation, BorderMeshSetting.Radius))
                    {
                        UHierarchicalInstancedStaticMeshComponent* HISM = MeshToHISMMap.FindRef(BorderMeshSetting.Mesh);
                        if (HISM)
                        {
                            FRotator InstanceBaseRotation = FRotationMatrix::MakeFromZ(NewSurfaceNormal).Rotator(); 
                            FRotator RandomRotation = FRotator(
                                FMath::RandRange(BorderMeshSetting.RotationMin.Roll, BorderMeshSetting.RotationMax.Roll),
                                FMath::RandRange(BorderMeshSetting.RotationMin.Yaw, BorderMeshSetting.RotationMax.Yaw),
                                FMath::RandRange(BorderMeshSetting.RotationMin.Pitch, BorderMeshSetting.RotationMax.Pitch)
                            );
                            FRotator FinalRotation = InstanceBaseRotation + RandomRotation;

                            FVector RandomScale = FVector(
                                FMath::RandRange(BorderMeshSetting.ScaleMin.X, BorderMeshSetting.ScaleMax.X),
                                FMath::RandRange(BorderMeshSetting.ScaleMin.Y, BorderMeshSetting.ScaleMax.Y),
                                FMath::RandRange(BorderMeshSetting.ScaleMin.Z, BorderMeshSetting.ScaleMax.Z)
                            );
                            FTransform InstanceTransform(FinalRotation, FinalSpawnLocation, RandomScale);
                            HISM->AddInstance(InstanceTransform);
                            AddObjectToGrid(FinalSpawnLocation, BorderMeshSetting.Radius);
                            SpawnedCountThisSide++;
                            CurrentSideAttempts = 0;
                        } else {
                            CurrentSideAttempts++;
                        }
                    } else {
                        CurrentSideAttempts++;
                    }
                } else {
                    CurrentSideAttempts++;
                }
            }
        }
    }

    for (const FBorderActorSpawnSetting& BorderActorSetting : BorderActorSpawnSettings)
    {
        if (!BorderActorSetting.ActorClass) continue;

        int NumBordersToSpawn = FMath::RandRange(1, 4);
        TArray<EBorder> AllBorders = {EBorder::North, EBorder::South, EBorder::West, EBorder::East};
        for (int i = 0; i < AllBorders.Num() - 1; ++i)
        {
            int32 RandIndex = FMath::RandRange(i, AllBorders.Num() - 1);
            if (i != RandIndex)
            {
                AllBorders.Swap(i, RandIndex);
            }
        }

        for (int i = 0; i < NumBordersToSpawn; ++i)
        {
            EBorder BorderType = AllBorders[i];
            int SpawnedCountThisSide = 0;
            int CurrentSideAttempts = 0;
            const int MaxSideAttempts = BorderActorSetting.MaxCountPerSide * 5;

            while (SpawnedCountThisSide < BorderActorSetting.MaxCountPerSide && CurrentSideAttempts < MaxSideAttempts)
            {
                EBorderSpawnLocation RandomSpawnLocationType = static_cast<EBorderSpawnLocation>(FMath::RandRange(0, 2));

                FVector2D BorderGridCoords = GetBorderGridCoordinates(BorderType, RandomSpawnLocationType);
                FVector InitialXYLocation = FVector(BorderGridCoords.X * Scale, BorderGridCoords.Y * Scale, 0.0f);

                FVector PlanarForwardDirection = FVector::ZeroVector;
                switch (BorderType)
                {
                    case EBorder::North: PlanarForwardDirection = FVector(0, 1, 0); break; 
                    case EBorder::South: PlanarForwardDirection = FVector(0, -1, 0); break; 
                    case EBorder::West: PlanarForwardDirection = FVector(1, 0, 0); break; 
                    case EBorder::East: PlanarForwardDirection = FVector(-1, 0, 0); break; 
                }

                FVector OffsetXYLocation = InitialXYLocation + PlanarForwardDirection * BorderActorSetting.ForwardOffsetFromBorder;
                
                FVector NewSurfaceNormal;
                FVector TerrainPoint = GetTerrainPointAtWorldLocationXY(OffsetXYLocation, NewSurfaceNormal);

                if (!TerrainPoint.IsZero())
                {
                    FVector InitialSpawnLocation = TerrainPoint + NewSurfaceNormal * 0.1f;
                    FVector FinalSpawnLocation = GetRandomPlanarOffset(InitialSpawnLocation, NewSurfaceNormal, BorderActorSetting.Radius * 0.5f);

                    if (IsLocationClear(FinalSpawnLocation, BorderActorSetting.Radius))
                    {
                        // **Multiplayer Note:** Actors must be spawned on the server
                        if (HasAuthority())
                        {
                            FActorSpawnParameters SpawnParams;
                            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
                            GetWorld()->SpawnActor<AActor>(BorderActorSetting.ActorClass, FinalSpawnLocation, FRotationMatrix::MakeFromZ(NewSurfaceNormal).Rotator(), SpawnParams);
                            AddObjectToGrid(FinalSpawnLocation, BorderActorSetting.Radius);
                            SpawnedCountThisSide++;
                            CurrentSideAttempts = 0;
                        }
                    } else {
                        CurrentSideAttempts++;
                    }
                } else {
                    CurrentSideAttempts++;
                }
            }
        }
    }

    // Density-based spawning loop (for items without MaxSpawnCount limits)
    for (int i = 0; i <= XSize; ++i)
    {
        for (int j = 0; j <= YSize; ++j)
        {
            if (i < BorderExclusion || i > XSize - BorderExclusion ||
                j < BorderExclusion || j > YSize - BorderExclusion)
            {
                continue;
            }

            int VertexIndex = i * (YSize + 1) + j;
            if (Vertices.IsValidIndex(VertexIndex))
            {
                FVector RawTerrainPoint = Vertices[VertexIndex];
                FVector RawSurfaceNormal = GetNormalAtVertex(VertexIndex);

                float CurrentSlopeAngle = FMath::RadiansToDegrees(FMath::Acos(FVector::DotProduct(FVector::UpVector, RawSurfaceNormal)));

                if (CurrentSlopeAngle > MaxSlopeAngle && MaxSlopeAngle >= 0)
                {
                    continue;
                }
                
                FVector ActualGroundLocation;
                FVector ActualSurfaceNormal;
                ActualGroundLocation = GetTerrainPointAtWorldLocationXY(RawTerrainPoint, ActualSurfaceNormal);

                if (ActualGroundLocation.IsZero())
                {
                    continue;
                }

                FVector FinalSpawnLocation = ActualGroundLocation + ActualSurfaceNormal * 0.1f;
                FRotator InstanceBaseRotation = FRotationMatrix::MakeFromZ(ActualSurfaceNormal).Rotator();

                for (const FMeshPopulationSetting& MeshSetting : MeshPopulationSettings)
                {
                    // This is the density spawning logic, which usually targets MaxSpawnCount == 0
                    if (MeshSetting.MaxSpawnCount > 0)
                    {
                        continue;
                    }

                    float RandomValue = FMath::FRand();
                    if (MeshSetting.Mesh && RandomValue < MeshSetting.Density && IsLocationClear(FinalSpawnLocation, MeshSetting.Radius))
                    {
                        UHierarchicalInstancedStaticMeshComponent* HISM = MeshToHISMMap.FindRef(MeshSetting.Mesh);
                        if (HISM)
                        {
                            FRotator RandomRotation = FRotator(
                                FMath::RandRange(MeshSetting.RotationMin.Roll, MeshSetting.RotationMax.Roll),
                                FMath::RandRange(MeshSetting.RotationMin.Yaw, MeshSetting.RotationMax.Yaw),
                                FMath::RandRange(MeshSetting.RotationMin.Pitch, MeshSetting.RotationMax.Pitch)
                            );
                            FRotator FinalRotation = InstanceBaseRotation + RandomRotation;

                            FVector RandomScale = FVector(
                                FMath::RandRange(MeshSetting.ScaleMin.X, MeshSetting.ScaleMax.X),
                                FMath::RandRange(MeshSetting.ScaleMin.Y, MeshSetting.ScaleMax.Y),
                                FMath::RandRange(MeshSetting.ScaleMin.Z, MeshSetting.ScaleMax.Z)
                            );
                            FTransform InstanceTransform(FinalRotation, FinalSpawnLocation, RandomScale);
                            HISM->AddInstance(InstanceTransform);
                            AddObjectToGrid(FinalSpawnLocation, MeshSetting.Radius);
                            goto NextGridPoint;
                        }
                    }
                }

                for (const FActorPopulationSetting& ActorSetting : ActorPopulationSettings)
                {
                    // This is the density spawning logic, which usually targets MaxSpawnCount == 0
                    if (ActorSetting.MaxSpawnCount > 0)
                    {
                        continue;
                    }

                    float RandomValue = FMath::FRand();
                    if (ActorSetting.ActorClass && RandomValue < ActorSetting.Density && IsLocationClear(FinalSpawnLocation, ActorSetting.Radius))
                    {
                        // **Multiplayer Note:** Actors must be spawned on the server
                        if (HasAuthority())
                        {
                            FActorSpawnParameters SpawnParams;
                            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
                            GetWorld()->SpawnActor<AActor>(ActorSetting.ActorClass, FinalSpawnLocation, InstanceBaseRotation, SpawnParams);
                            AddObjectToGrid(FinalSpawnLocation, ActorSetting.Radius);
                            goto NextGridPoint;
                        }
                    }
                }
            }
            NextGridPoint:;
        }
    }
}