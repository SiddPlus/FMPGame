// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PropertyAccess.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "ProceduralGeneration.generated.h"

class UProceduralMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UENUM()
enum class EBorder : uint8
{
	North,
	South,
	East,
	West
};

UENUM()
enum class EBorderSpawnLocation : uint8
{
	Middle,
	Left,
	Right,
};

USTRUCT()
struct FSpawnedObjectInfo
{
	GENERATED_BODY()

	FVector Location;
	float Radius;

	FSpawnedObjectInfo() : Location(FVector::ZeroVector), Radius(0.0f) {}
	FSpawnedObjectInfo(FVector InLocation, float InRadius) : Location(InLocation), Radius(InRadius) {}
};

USTRUCT(BlueprintType)
struct FActorPopulationSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Actor Setting")
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0.0f, ClampMax = 1.0f))
	float Density = 0.00001f;

	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0.0f))
	float Radius = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0))
	int MaxSpawnCount = 0;
};

USTRUCT(BlueprintType)
struct FMeshPopulationSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0.0f, ClampMax = 1.0f))
	float Density = 0.00001f;

	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	UMaterialInterface* Material; 
	
	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0.0f))
	float Radius = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0))
	int MaxSpawnCount = 0;

	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FRotator RotationMin = FRotator::ZeroRotator;
    
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FRotator RotationMax = FRotator(0.0f, 360.0f, 0.0f);

	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FVector ScaleMin = FVector(1.0f, 1.0f, 1.0f);
    
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FVector ScaleMax = FVector(1.0f, 1.0f, 1.0f);
};

USTRUCT(BlueprintType)
struct FBorderMeshSpawnSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	UMaterialInterface* Material; // Added this property as it is needed by SetupHISMComponents

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 0.0f))
	float Radius = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FVector ScaleMin = FVector(0.8f, 0.8f, 0.8f);

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FVector ScaleMax = FVector(1.2f, 1.2f, 1.2f);

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FRotator RotationMin = FRotator(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FRotator RotationMax = FRotator(0.0f, 360.0f, 0.0f);
    
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 1))
	int MaxCountPerSide = 1;

	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 0.0f))
	float ForwardOffsetFromBorder = 0.0f;
};

USTRUCT(BlueprintType)
struct FBorderActorSpawnSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting")
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 0.0f))
	float Radius = 150.0f;

	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 1))
	int MaxCountPerSide = 1;

	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 0.0f))
	float ForwardOffsetFromBorder = 0.0f;
};

UCLASS()
class FMP_API AProceduralGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralGeneration();

// **Multiplayer Change:** Required to register replicated properties
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
    int XSize = 100;

    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
    int YSize = 100;

    UPROPERTY(EditAnywhere)
    float ZMultiplier = 250.0f;

    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float NoiseScale = 0.1f;

    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float Scale = 100.0f;

    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float UVScale = 1.0f;

    // **Multiplayer Change:** ReplicatedUsing added to synchronize the seed
    UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_Seed)
    int Seed = 0;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FMeshPopulationSetting> MeshPopulationSettings;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FActorPopulationSetting> ActorPopulationSettings;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FBorderMeshSpawnSetting> BorderMeshSpawnSettings;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FBorderActorSpawnSetting> BorderActorSpawnSettings;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    float MaxSlopeAngle = 40.0f;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Performance")
    float GridCellSize = 750.0f;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    int BorderExclusion = 5;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings", Meta = (ClampMin = 0.0f, ClampMax = 0.5f))
    float BorderSpawnOffsetFraction = 0.25f;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Out of Bounds")
    float OutOfBoundsDepth = 2000.0f;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Out of Bounds")
    float OutOfBoundsCountdownDuration = 5.0f;

    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Player")
    float PlayerSpawnForwardOffset = 500.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInterface* TerrainMaterial;

	// **Multiplayer Change:** RepNotify function
	UFUNCTION()
	void OnRep_Seed();

	// **Refactor:** Function to hold the core generation logic
	void GenerateMap();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Procedural Generation")
	void ApplyMaterialToTerrain(UMaterialInterface* NewMaterial);

	UFUNCTION(BlueprintCallable, Category = "Procedural Generation|Player")
	FVector GetPlayerSpawnPoint();

private:
	UProceduralMeshComponent* ProceduralMesh;

	TMap<UStaticMesh*, UHierarchicalInstancedStaticMeshComponent*> MeshToHISMMap;

	TArray<FVector> Vertices;
	TArray<int> Triangles;
	TArray<FVector2D> UV0;
	TArray<FVector> Normals;
	TArray<struct FProcMeshTangent> Tangents;

	TMap<FIntPoint, TArray<FSpawnedObjectInfo>> SpawnedObjectGrid;

	FVector2D NoiseOffset;

	TMap<UStaticMesh*, int> SpawnedMeshCounts;
	TMap<TSubclassOf<AActor>, int> SpawnedActorCounts;

	bool bIsPlayerOutOfBounds = false;
	float OutOfBoundsTimer = 0.0f;
	bool bPlayerIsDead = false;

	void CreateVertices();
	void CreateTriangles();
	void PopulateObjects();
	void SetupHISMComponents();

	FVector GetNormalAtVertex(int VertexIndex) const;

	FIntPoint GetGridCoordinates(const FVector& Location) const;

	bool IsLocationClear(const FVector& Location, float CheckRadius);

	void AddObjectToGrid(const FVector& Location, float Radius);

	FVector GetRandomValidSpawnLocation(float Radius, FVector& OutSurfaceNormal);
    
	FVector GetBorderMidpointLocation(EBorder BorderType, FVector& OutSurfaceNormal);

	FVector2D GetBorderGridCoordinates(EBorder BorderType, EBorderSpawnLocation LocationType) const;

	FVector GetRandomPlanarOffset(const FVector& BaseLocation, const FVector& SurfaceNormal, float OffsetMagnitude);

	FVector GetTerrainPointAtWorldLocationXY(FVector WorldLocationXY, FVector& OutSurfaceNormal);

	bool IsPlayerInOutOfBounds(const FVector& PlayerLocation) const;

};
