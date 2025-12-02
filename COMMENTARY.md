Comprehensive Technical Report: Unreal Engine 5.6 C++ Multiplayer Roguelike

This document provides a detailed technical analysis of the core systems and server-authoritative architecture underpinning the C++ multiplayer roguelike game developed in Unreal Engine 5.6. The focus is on the networked implementation of progression, persistence, difficulty scaling, and foundational game mechanics.

## Server-Authoritative Networking Foundation

The game utilizes a Server-Authoritative networking model built upon the Online Steam Subsystem and Online Subsystem for dedicated server hosting. This model mandates that all game-critical state changes, such as damage application, resource consumption, and player progression, must be validated and executed by the server instance to prevent client-side manipulation (cheating).

C++ Networking Primitives

The architecture relies heavily on three core Unreal Engine networking primitives:

Replicated Properties (DOREPLIFETIME): Used for variables (e.g., CurrentRoundNumber, CurrentHealth) that must maintain the same value on the server and all connected clients.

RepNotify Functions (ReplicatedUsing=OnRep_Variable): Used when a variable's value must be synchronized, and a client-side function (e.g., UI update, particle effect) must be executed immediately when the new value is received. (See UHealthSystem::OnRep_Health).

Remote Procedure Calls (RPCs): Functions that allow clients to request the execution of code on the server (Server_... calls) or for the server to call code on clients (Client_... or Multicast_... calls). These are essential for client-to-server input and server-to-client notifications.

## Core Progression and Difficulty Management

The primary loop of the roguelike experience—round completion, difficulty scaling, and reward distribution—is managed entirely by server-side logic within the ARoundManager and associated components.

### Round Management and Difficulty Scaling (ARoundManager)

The ARoundManager is a replicated AActor responsible for governing the flow of the game session. Its authority is paramount to the game's difficulty curve.

Round State and Replication:

The core state, including bIsRoundActive and RoundTimer, is marked for replication using RepNotify (ReplicatedUsing=OnRep_IsRoundActive, ReplicatedUsing=OnRep_RoundTimer) to ensure all clients have an accurate display of the current status and time remaining.

CurrentRoundNumber is a simple replicated property (DOREPLIFETIME) that synchronizes the current difficulty level.

Server-Side Scaling Logic (Inside EndRound()):

Upon detection that the round is complete (either by time expiring or a successful objective clear), the server executes the EndRound() logic.

The difficulty parameters are aggressively scaled:

CurrentRoundSpawnRate (the time between enemy spawns) is decreased, resulting in faster enemy generation.

CurrentRoundMaxEnemies (the cap on simultaneously spawned enemies) is increased.

Persistence Trigger: Importantly, EndRound() is the moment where the server-side logic could interact with the TelemetryLogger to record the new highest round reached, ensuring persistent profile updates upon session end.

Tick and Authority:

The Tick function is only enabled and executed for the authoritative instance (if (HasAuthority() && bIsRoundActive)). This is where the RoundTimer countdown occurs and the check for round completion is performed.

#### Perk System State Management (UPlayerPerks)

The UPlayerPerks component holds the player's entire progression tree and current loadout.

Data Structure: The perk data is defined using a replicated USTRUCT named FPerks, which contains metadata like Name, Description, and the RoundLevelUnlockAmount. This ensures that even the definition of what a perk is is consistent across the network.

Replicated Arrays: The three core perk state arrays—LockedPerks, UnlockedPerks, and EquippedPerks—are all registered for full replication (DOREPLIFETIME). The server holds the master copy, and any changes are broadcast to clients.

Perk Equipping and RepNotify:

The actual process of equipping a perk is handled by the server-side function PerkEquipLogic(const FString& PerkName).

Crucially, when a perk is successfully equipped, the server updates the LastEquippedPerk variable, which is a RepNotify property.

The OnRep_LastEquippedPerk() function is executed on every client upon receiving the new value, allowing for client-side functionality (e.g., playing a sound, updating a HUD icon, or applying a temporary visual effect) without the client having authority over the gameplay state.

### Loot/Reward Distribution (ULootPool)

The ULootPool component implements the "deck-building" mechanic central to the roguelike genre. It acts as the server-controlled dispenser of new abilities.

Server-Side Draw Logic:

The public entry point DrawRandomPerk() is typically called from a client's UI or by the ARoundManager when a reward is due.

This function immediately calls a Server RPC: ServerDrawRandomPerk(). RPCs ensure the client's request is executed with server authority.

The server executes the critical DrawPerk_ServerLogic(). This function performs the actual randomized selection from the CurrentPerkPool.

The Reset Mechanism:

The CurrentPerkPool is the active "hand" of perks available for drawing in the current round.

When the pool runs out (CurrentPerkPool.Num() == 0), the server calls ResetPool().

ResetPool() clears the current pool and refills it by copying all perks from the player's permanent UnlockedPerks list (stored in UPlayerPerks). This ensures a continuous cycle of drawing from the player's learned abilities, while preventing duplicates from appearing too quickly.

## Game State Persistence and Telemetry

Two distinct, file-based systems are used for saving data: permanent player profile statistics and temporary, detailed performance logs. Both utilize Unreal's platform-agnostic file I/O utilities for JSON serialization.

### Player Profile Persistence (TelemetryLogger)

The TelemetryLogger is a static C++ utility class, meaning it doesn't need to be attached to an Actor or Component and can be called from anywhere, particularly from server-side game mode logic upon session closure or round failure.

Fixed Filepath: It uses a static, fixed file name (PlayerProfileStats.json) saved in a known location (FPaths::ProjectSavedDir() / TEXT("Telemetry")). This ensures that the same file is always loaded and updated across different sessions.

Saving Logic (RecordSessionData):

Load: Attempts to load the existing JSON content using FFileHelper::LoadFileToString.

Deserialize: The content is deserialized into a shared FJsonObject (LogObject). If the file doesn't exist, a new empty object is created.

Update Max Round: It compares the CurrentRoundNumber from the session with the MaxRoundReached value read from the file. Only if the session's round number is higher is the MaxRoundReached field updated in LogObject.

Update Unlocked Perks: The current UnlockedPerks list (a TArray<FPerks>) is serialized into a JSON array, overwriting the old list in LogObject.

Serialize: The updated LogObject is serialized back into a JSON string using FJsonSerializer and a TPrettyJsonPrintPolicy writer for readability.

Save: The final string is saved using FFileHelper::SaveStringToFile, overwriting the previous file.

### Technical Performance Logging (UPerformanceLogger)

The UPerformanceLogger is an UActorComponent designed to collect real-time technical metrics primarily on the client where the frame rate and memory usage data are locally available.

Asynchronous Data Collection:

The logging process is decoupled from the main game thread using a FTimerHandle that calls CollectAndLogMetrics() at the specified LogFrequency (default 0.5s).

The timestamp (FPerformanceMetrics::Timestamp) is calculated relative to the session's StartTime recorded in BeginPlay().

Metrics Collected: The CollectAndLogMetrics() function uses platform API access to retrieve system-level data:

FrameTime and FPS: Often retrieved via GEngine->GetAverageFrameTime() or GFrameTime.

CPUCycles: Retrieved from the platform's process state using functions like FPlatformTime::Cycles().

MemoryUsedMB: Uses FPlatformMemory::GetStats().GetUsedPhysical().

Session-Unique File Output (WriteLogToFile):

This critical function is executed in EndPlay().

It generates a unique filename incorporating the date and time (Performance_YYYYMMDD_HHMMSS.json) to prevent data loss across sessions.

The entire LoggedData array (TArray<FPerformanceMetrics>) is serialized into a single JSON array object under the key "PerformanceData".

It ensures the PerformanceLogs directory path exists using FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree() before writing the file, guaranteeing the file save operation won't fail due to a missing directory.

## Core Gameplay Mechanics (Networked)

### Combat and Health Management (UHealthSystem)

The UHealthSystem component provides the robust, networked health and damage model for all characters (players and enemies).

Server Authority on Health: The CurrentHealth variable is a RepNotify property. All functions that modify health (DecreaseHealth, IncreaseHealth) explicitly contain an authority check (if (!GetOwner()->HasAuthority()) return;). Only the server can change the health value.

RepNotify Action (OnRep_Health):

When the server changes CurrentHealth, this function is executed on both the server (where it is manually called after the change) and all clients.

Its primary role is to calculate the HealthDelta and broadcast a multicast delegate (OnHealthChanged.Broadcast(...)). This allows all actors in the game (e.g., HUD widgets, hit-effect components) to react to the change without needing to poll the health value.

Damage Flow: A client's action (e.g., shooting) translates into a Server RPC to the enemy's Actor. The server, upon receiving the RPC, runs the ApplyDamage() or DecreaseHealth() function, which updates the RepNotify variable and broadcasts the event to all.

### Enemy Spawning and AI (AEnemySpawner)

Enemy spawning is strictly a server-side responsibility, crucial for maintaining network performance and game balance.

Server-Only Execution: The entire AEnemySpawner is configured to run only on the server. The StartSpawningTimer() and SpawnEnemy() functions check if (HasAuthority()) before executing.

Spawn Logic and Timer:

StartSpawningTimer() sets a repeating FTimerHandle that calls SpawnEnemy() at the rate specified by ARoundManager::CurrentRoundSpawnRate.

SpawnEnemy() checks if the current SpawnedEnemies count is less than ARoundManager::CurrentRoundMaxEnemies before proceeding.

Navigation System Integration (UNavigationSystemV1):

The spawner doesn't just pick a random location; it utilizes the UNavigationSystemV1 to call GetRandomReachablePointInRadius(). This ensures that the spawned enemy is placed on the NavMesh in a location the AI can actually pathfind from, preventing stuck enemies.

Actual actor spawning is done with GetWorld()->SpawnActor<ACharacter>(...) using ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn.

### Procedural Map Generation (AProceduralGeneration)

The map generation system uses a deterministic approach to ensure that a single seed generates the exact same map on the server and all clients.

Replicated Seed: The Seed variable is the only piece of information needed for the generation algorithm. It is marked for standard replication (DOREPLIFETIME(AProceduralGeneration, Seed)).

Deterministic Generation: When the generation function (GenerateMap()) is called, it uses the replicated Seed to initialize the pseudo-random number generator (FMath::RandInit(Seed)).

Server-Only Actor Spawning: While mesh generation (performed by UProceduralMeshComponent and UHierarchicalInstancedStaticMeshComponent) can run on all clients, the spawning of interactive AActors (like resource nodes or interactable objects) is gated by an authority check (if (HasAuthority())). This prevents clients from independently spawning objects and causing network conflicts.

## Comprehensive Inter-System Communication Flow

The various core systems are seamlessly integrated using Unreal Engine's native networking and delegate architecture, maintaining a clean, decoupled structure where the server is always the initiator of state change.

When a player successfully completes a round, the server-authoritative ARoundManager drives the entire pipeline. Upon successful round termination, the ARoundManager calls the cleanup function on the AEnemySpawner, instructing it to clear all active AI and stop its internal spawning timer. Simultaneously, the ARoundManager communicates the final round number and the player's total UnlockedPerks to the static TelemetryLogger, triggering the atomic read-modify-write operation to update the permanent player profile file.

The player's input regarding progression, such as clicking a button to draw a perk, initiates a client-to-server interaction. The ULootPool receives this input and uses a Server RPC to execute the random draw logic on the server. The server then communicates the result to the UPlayerPerks component by calling its PerkEquipLogic function. This final server-side execution updates the replicated state and sets the LastEquippedPerk RepNotify property, which in turn broadcasts the success event back to all clients for synchronized visual feedback.

The combat system is equally dependent on server flow. A client registers a hit on an enemy, which is communicated to the server via an appropriate RPC (e.g., Server_ProcessHit). The server then calls the enemy's UHealthSystem::DecreaseHealth function. This server-only function modifies the health RepNotify property, triggering OnRep_Health on all machines. This RepNotify is the primary method of propagating the health state change, allowing the enemy's own AI components and the players' HUDs to react instantly and synchronously to the damage event. The client-side UPerformanceLogger operates entirely independently of this gameplay loop, passively collecting metrics throughout the session and performing its file write operation only upon game termination (EndPlay), ensuring that its file I/O operations do not interfere with live gameplay or network latency.