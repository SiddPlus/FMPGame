# FMP
The final major project is a C++ multiplayer roguelike game developed in Unreal Engine 5.6. The entire architecture is built upon a robust server-authoritative networking model and modular C++ components to ensure reliable, cheat-resistant gameplay.

## The Core Game Loop
The roguelike experience is defined by the following server-controlled loop, where player progression is tied directly to survival and combat difficulty:

1. Level Initialization: The `AProceduralGeneration` Actor generates the map geometry and spawns world elements using a replicated `Seed` for consistency across clients.

2. Round Start: The `ARoundManager` begins a round, initiating the `AEnemySpawner` timer.

3. Combat/Survival: Enemies spawn and move toward players. Player damage is handled by the server-side `UHealthSystem`.

4. Difficulty Scaling: After the round duration ends, the `ARoundManager` automatically increases the difficulty parameters (e.g., higher enemy count and faster spawn rate).

5. Player Reward: Upon successful round completion, the `UPlayerPerks` system triggers a reward state (via RepNotify), allowing the player to draw and equip a new ability from the `ULootPool`. This progression resets the loop to Step 2.

## Player Foundation and Systems Hub
The `AFMPCharacter` serves as the central player entity, acting as the host for all core mechanics components.

- Core Components Integration: The character object is the container for the following C++ components, centralizing their functionality:

    - `UHealthSystem* PlayerHealth`: Implements the replicated combat and survival logic.

    - `UPlayerPerks* PlayerPerks`: Manages the progression and ability systems, utilizing replicated arrays for perk states.

    - `ULootPool* LootPool`: Integrates the random perk drawing/loot mechanism.

## Core Engine Implementation and Networking
All critical gameplay state and logic are server-authoritative, utilizing Unreal's native replication features for synchronization.

- Multiplayer and Steam Integration: The project's architecture is server-authoritative and was set up from the start using the Online Subsystem and Online Steam Subsystem plugins. Custom Lobbies Widgets were created, enabling players to easily host sessions (acting as the listen server) and join sessions, which is critical for the game's client-server structure.

- Round Management & Scaling: The `ARoundManager` ensures state synchronization via Replicated and RepNotify properties, while the logic for increasing `CurrentRoundSpawnRate` and `CurrentRoundMaxEnemies` is executed on the server.

- Enemy Spawning and AI:

    - Spawning (`AEnemySpawner`): Spawning is a strictly server-side process, using a timer and integrating with the Navigation System (`UNavigationSystemV1`) to find random reachable spawn points on the NavMesh.

    - Enemy AI: The spawned enemies implement basic combat AI, designed to run directly towards the player (using pathfinding) and initiate an attack upon reaching the engagement range.

## Progression, Data Persistence, and Technical Telemetry
This section covers all systems related to player progression and data logging, both for game state and technical performance.

- Perk System: All perk state changes (unlocking/equipping) are confirmed via Server RPCs. The `ULootPool` implements a server-side "deck" mechanic where the pool is refilled from the player's `UnlockedPerks` (the `ResetPool()` function).

- Health System: The `UHealthSystem` restricts damage and healing to the server (via `if (HasAuthority())`), and uses RepNotify for client-side health bar synchronization.

- Player Profile Persistence (`TelemetryLogger`): The static `TelemetryLogger` class manages the persistence of player profile statistics, such as the `MaxRoundReached` and the list of all unique perks unlocked. This is achieved by loading, updating, and overwriting a JSON file using Unreal Engine's `FJsonSerializer` and file I/O utilities.

- Performance Telemetry (`UPerformanceLogger`): A dedicated `UActorComponent` responsible for collecting and logging technical performance data which is attached to `BP_GameState`.

    - This system uses a `FTimerHandle` to asynchronously capture metrics at a configurable `LogFrequency` (default 0.5s) starting in `BeginPlay`.

    - It logs critical metrics per frame, including `FrameTime` (ms), `FPS`, cumulative `CPUCycles`, and resident `MemoryUsedMB`.

    - Upon session exit (`EndPlay`), the component serializes the collected data array into a uniquely named JSON file and saves it to the project's dedicated "PerformanceLogs" directory, ensuring directory structure existence before writing.

- World Generation: The `AProceduralGeneration` Actor uses a replicated Seed for consistent map generation and limits dynamic Actor spawning to the server.

- User Feedback Mechanism: For qualitative data gathering, a Google Form was created. A QR code generated from the form link was placed directly on the main screen for maximum accessibility.