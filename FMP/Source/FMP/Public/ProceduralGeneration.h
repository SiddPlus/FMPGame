#pragma once

#include "CoreMinimal.h"
#include "PropertyAccess.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "NavigationSystem.h"
#include "ProceduralGeneration.generated.h"

class UProceduralMeshComponent;
class UMaterialInterface;
class UStaticMesh;

/**
 * @brief Enum defining the four borders of the procedural map.
 */
UENUM()
enum class EBorder : uint8
{
	North,
	South,
	East,
	West
};

/**
 * @brief Enum defining relative spawn locations on a specific border.
 */
UENUM()
enum class EBorderSpawnLocation : uint8
{
	Middle,
	Left,
	Right,
};

/**
 * @brief Information about an object that has been spawned on the map, used for overlap checking.
 */
USTRUCT()
struct FSpawnedObjectInfo
{
	GENERATED_BODY()

	/** @brief Location of the spawned object */
	FVector Location;
	/** @brief Radius used for checking overlap with other objects */
	float Radius;

	FSpawnedObjectInfo() : Location(FVector::ZeroVector), Radius(0.0f) {}
	FSpawnedObjectInfo(FVector InLocation, float InRadius) : Location(InLocation), Radius(InRadius) {}
};

/**
 * @brief Settings for procedurally populating the map with a specific actor class.
 */
USTRUCT(BlueprintType)
struct FActorPopulationSetting
{
	GENERATED_BODY()

	/** @brief The class of the actor to spawn */
	UPROPERTY(EditAnywhere, Category = "Actor Setting")
	TSubclassOf<AActor> ActorClass;

	/** @brief Probability of spawning the actor at any given valid point */
	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0.0f, ClampMax = 1.0f))
	float Density = 0.00001f;

	/** @brief The collision radius required around the spawn point */
	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0.0f))
	float Radius = 200.0f;

	/** @brief The maximum number of actors to spawn from this setting */
	UPROPERTY(EditAnywhere, Category = "Actor Setting", Meta = (ClampMin = 0))
	int MaxSpawnCount = 0;
};

/**
 * @brief Settings for procedurally populating the map with a static mesh (using HISM).
 */
USTRUCT(BlueprintType)
struct FMeshPopulationSetting
{
	GENERATED_BODY()

	/** @brief The static mesh to spawn */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	UStaticMesh* Mesh;

	/** @brief Probability of spawning the mesh at any given valid point */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0.0f, ClampMax = 1.0f))
	float Density = 0.00001f;

	/** @brief Material to apply to the mesh (optional) */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	UMaterialInterface* Material; 
	
	/** @brief The collision radius required around the spawn point */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0.0f))
	float Radius = 200.0f;

	/** @brief The maximum number of meshes to spawn from this setting */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting", Meta = (ClampMin = 0))
	int MaxSpawnCount = 0;

	/** @brief Minimum random rotation applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FRotator RotationMin = FRotator::ZeroRotator;
    
	/** @brief Maximum random rotation applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FRotator RotationMax = FRotator(0.0f, 360.0f, 0.0f);

	/** @brief Minimum random scale applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FVector ScaleMin = FVector(1.0f, 1.0f, 1.0f);
    
	/** @brief Maximum random scale applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Mesh Setting")
	FVector ScaleMax = FVector(1.0f, 1.0f, 1.0f);
};

/**
 * @brief Settings for spawning meshes specifically along the map borders.
 */
USTRUCT(BlueprintType)
struct FBorderMeshSpawnSetting
{
	GENERATED_BODY()

	/** @brief The static mesh to spawn on the borders */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	UStaticMesh* Mesh;

	/** @brief Material to apply to the mesh */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	UMaterialInterface* Material; // Added this property as it is needed by SetupHISMComponents

	/** @brief The collision radius required around the spawn point */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 0.0f))
	float Radius = 150.0f;

	/** @brief Minimum random scale applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FVector ScaleMin = FVector(0.8f, 0.8f, 0.8f);

	/** @brief Maximum random scale applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FVector ScaleMax = FVector(1.2f, 1.2f, 1.2f);

	/** @brief Minimum random rotation applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FRotator RotationMin = FRotator(0.0f, 0.0f, 0.0f);

	/** @brief Maximum random rotation applied to spawned mesh */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting")
	FRotator RotationMax = FRotator(0.0f, 360.0f, 0.0f);
    
	/** @brief Number of meshes to spawn per side of the border */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 1))
	int MaxCountPerSide = 1;

	/** @brief Offset to move the spawn location inward from the exact border edge */
	UPROPERTY(EditAnywhere, Category = "Border Mesh Spawn Setting", Meta = (ClampMin = 0.0f))
	float ForwardOffsetFromBorder = 0.0f;
};

/**
 * @brief Settings for spawning actors specifically along the map borders.
 */
USTRUCT(BlueprintType)
struct FBorderActorSpawnSetting
{
	GENERATED_BODY()

	/** @brief The class of the actor to spawn on the borders */
	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting")
	TSubclassOf<AActor> ActorClass;

	/** @brief The collision radius required around the spawn point */
	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 0.0f))
	float Radius = 150.0f;

	/** @brief Number of actors to spawn per side of the border */
	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 1))
	int MaxCountPerSide = 1;

	/** @brief Offset to move the spawn location inward from the exact border edge */
	UPROPERTY(EditAnywhere, Category = "Border Actor Spawn Setting", Meta = (ClampMin = 0.0f))
	float ForwardOffsetFromBorder = 0.0f;
};

/**
 * @brief Actor responsible for procedurally generating a terrain map, populating it with meshes and actors, and managing map boundaries.
 */
UCLASS()
class FMP_API AProceduralGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	/** @brief Sets default values for this actor's properties */
	AProceduralGeneration();

    // **Multiplayer Change:** Required to register replicated properties
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
	/** @brief Number of vertices along the X-axis of the grid */
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
    int XSize = 100;

	/** @brief Number of vertices along the Y-axis of the grid */
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
    int YSize = 100;

	/** @brief Multiplier for the height (Z-axis) of the generated terrain */
    UPROPERTY(EditAnywhere)
    float ZMultiplier = 250.0f;

	/** @brief Scale of the Perlin noise used for terrain generation */
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float NoiseScale = 0.1f;

	/** @brief Distance between each vertex in the terrain grid */
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float Scale = 100.0f;

	/** @brief Scale multiplier for the UV coordinates of the terrain */
    UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001f))
    float UVScale = 1.0f;

    // **Multiplayer Change:** ReplicatedUsing added to synchronize the seed
	/** @brief The random seed used for all procedural generation (replicated to clients) */
    UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_Seed)
    int Seed = 0;

    /** @brief Array of settings for meshes to be randomly populated across the map */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FMeshPopulationSetting> MeshPopulationSettings;

	/** @brief Array of settings for actors to be randomly populated across the map */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FActorPopulationSetting> ActorPopulationSettings;

	/** @brief Array of settings for meshes to be spawned specifically at map borders */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FBorderMeshSpawnSetting> BorderMeshSpawnSettings;

	/** @brief Array of settings for actors to be spawned specifically at map borders */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    TArray<FBorderActorSpawnSetting> BorderActorSpawnSettings;

	/** @brief Maximum slope angle (in degrees) where objects are allowed to spawn */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    float MaxSlopeAngle = 40.0f;

	/** @brief Size of grid cells used for spatial partitioning during spawn checks */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Performance")
    float GridCellSize = 750.0f;

	/** @brief Number of grid units away from the edge to exclude general population spawns */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings")
    int BorderExclusion = 5;

	/** @brief Fraction of the map size to offset border spawns inward */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Population Settings", Meta = (ClampMin = 0.0f, ClampMax = 0.5f))
    float BorderSpawnOffsetFraction = 0.25f;

	/** @brief Depth at which players are considered out of bounds (falling off the map) */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Out of Bounds")
    float OutOfBoundsDepth = 2000.0f;

	/** @brief Duration in seconds before a player is eliminated for being out of bounds */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Out of Bounds")
    float OutOfBoundsCountdownDuration = 5.0f;

	/** @brief Distance forward from the center to spawn the player */
    UPROPERTY(EditAnywhere, Category = "Procedural Generation|Player")
    float PlayerSpawnForwardOffset = 500.0f;

protected:
	/** @brief Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** @brief Called when an instance of this class is placed or updated in the editor */
	virtual void OnConstruction(const FTransform& Transform) override;
	
	/** @brief Material applied to the procedurally generated terrain */
	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInterface* TerrainMaterial;

	// **Multiplayer Change:** RepNotify function
	/** @brief Called on clients when the Seed property is updated from the server */
	UFUNCTION()
	void OnRep_Seed();

	/** @brief Generates the base flat grid mesh before noise deformation */
	void GenerateBaseMesh();

	/** @brief Applies Perlin noise to the Z-axis of the grid vertices to create terrain */
	void DeformMeshWithNoise();

	/** @brief Populates the generated terrain with configured meshes and actors */
	void PopulateWorld();

public:	
	/** @brief Called every frame */
	virtual void Tick(float DeltaTime) override;
	
	/**
	 * @brief Dynamically applies a new material to the generated procedural mesh.
	 * @param NewMaterial The material to apply.
	 */
	UFUNCTION(BlueprintCallable, Category = "Procedural Generation")
	void ApplyMaterialToTerrain(UMaterialInterface* NewMaterial);

	/**
	 * @brief Calculates and retrieves the starting spawn location for players.
	 * @return The initial player spawn location vector.
	 */
	UFUNCTION(BlueprintCallable, Category = "Procedural Generation|Player")
	FVector GetPlayerSpawnPoint();

private:
	/** @brief Component responsible for rendering the procedurally generated terrain */
	UProceduralMeshComponent* ProceduralMesh;

	/** @brief Dedicated random stream to ensure Server/Client synchronicity */
	FRandomStream MapRandomStream;

	/** @brief Map of static meshes to their corresponding HISM components for optimized rendering */
	TMap<UStaticMesh*, UHierarchicalInstancedStaticMeshComponent*> MeshToHISMMap;

	/** @brief Vertices of the procedural mesh */
	TArray<FVector> Vertices;
	/** @brief Triangles connecting the vertices of the procedural mesh */
	TArray<int> Triangles;
	/** @brief UV coordinates for the procedural mesh */
	TArray<FVector2D> UV0;
	/** @brief Normals of the procedural mesh */
	TArray<FVector> Normals;
	/** @brief Tangents of the procedural mesh */
	TArray<struct FProcMeshTangent> Tangents;

	/** @brief Spatial grid used to quickly check for overlapping objects during population */
	TMap<FIntPoint, TArray<FSpawnedObjectInfo>> SpawnedObjectGrid;

	/** @brief Offset applied to the noise function to ensure random terrain generation */
	FVector2D NoiseOffset;

	/** @brief Tracks the number of spawned instances for each mesh type */
	TMap<UStaticMesh*, int> SpawnedMeshCounts;
	/** @brief Tracks the number of spawned instances for each actor class */
	TMap<TSubclassOf<AActor>, int> SpawnedActorCounts;

	/** @brief Base location determined for the central spawn point of players */
	FVector MasterSpawnLocation = FVector::ZeroVector;

	/** @brief Calculates the master spawn point ensuring it is on valid terrain */
	void DetermineMasterSpawnPoint();

	/** @brief Generates the vertex array for the procedural mesh */
	void CreateVertices();
	/** @brief Generates the triangle array connecting vertices */
	void CreateTriangles();
	/** @brief Executes the spawning logic for all configured mesh and actor populations */
	void PopulateObjects();
	/** @brief Initializes HISM components for each unique static mesh in the settings */
	void SetupHISMComponents();

	/**
	 * @brief Calculates the normal vector at a specific vertex index based on surrounding triangles.
	 * @param VertexIndex The index of the vertex.
	 * @return The calculated normal vector.
	 */
	FVector GetNormalAtVertex(int VertexIndex) const;

	/**
	 * @brief Converts a world location to 2D spatial grid coordinates for overlap checking.
	 * @param Location The world location.
	 * @return The grid coordinate pair.
	 */
	FIntPoint GetGridCoordinates(const FVector& Location) const;

	/**
	 * @brief Checks if a given location and radius are clear of existing spawned objects.
	 * @param Location The world location to check.
	 * @param CheckRadius The collision radius to enforce.
	 * @return True if the location is clear, false if it overlaps with an existing object.
	 */
	bool IsLocationClear(const FVector& Location, float CheckRadius);

	/**
	 * @brief Registers a spawned object into the spatial grid to prevent future overlaps.
	 * @param Location The location of the spawned object.
	 * @param Radius The radius of the spawned object.
	 */
	void AddObjectToGrid(const FVector& Location, float Radius);

	/**
	 * @brief Finds a random valid location on the terrain suitable for spawning based on slope and overlap.
	 * @param Radius The required radius for the object.
	 * @param OutSurfaceNormal The normal vector at the found location.
	 * @return The valid world location found.
	 */
	FVector GetRandomValidSpawnLocation(float Radius, FVector& OutSurfaceNormal);
    
	/**
	 * @brief Calculates the midpoint location along a specified map border.
	 * @param BorderType The border to calculate for (North, South, East, West).
	 * @param OutSurfaceNormal The normal vector at the border location.
	 * @return The world location of the border midpoint.
	 */
	FVector GetBorderMidpointLocation(EBorder BorderType, FVector& OutSurfaceNormal);

	/**
	 * @brief Gets grid coordinates specific to a border and a relative location on that border.
	 * @param BorderType The targeted border.
	 * @param LocationType The relative location (Left, Right, Middle).
	 * @return The 2D coordinates on the grid.
	 */
	FVector2D GetBorderGridCoordinates(EBorder BorderType, EBorderSpawnLocation LocationType) const;

	/**
	 * @brief Calculates a random offset along the plane defined by a surface normal.
	 * @param BaseLocation The starting location.
	 * @param SurfaceNormal The normal vector defining the plane.
	 * @param OffsetMagnitude The maximum distance of the offset.
	 * @return The new offset location.
	 */
	FVector GetRandomPlanarOffset(const FVector& BaseLocation, const FVector& SurfaceNormal, float OffsetMagnitude);

	/**
	 * @brief Gets the exact 3D point on the terrain surface given 2D coordinates.
	 * @param WorldLocationXY The X and Y world coordinates.
	 * @param OutSurfaceNormal The normal vector at the terrain surface.
	 * @return The complete 3D world location on the terrain.
	 */
	FVector GetTerrainPointAtWorldLocationXY(FVector WorldLocationXY, FVector& OutSurfaceNormal);

	/**
	 * @brief Checks if a player location is considered out of bounds (off the map or below depth).
	 * @param PlayerLocation The location of the player.
	 * @return True if the player is out of bounds, false otherwise.
	 */
	bool IsPlayerInOutOfBounds(const FVector& PlayerLocation) const;

};
