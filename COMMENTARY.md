# Comprehensive Technical Report: Unreal Engine C++ Multiplayer Roguelike Implementation

This document provides a detailed, in-depth technical analysis of the core systems and server-authoritative architecture underpinning the C++ multiplayer roguelike game developed in Unreal Engine. The architecture is strictly **Server-Authoritative**, a non-negotiable requirement for ensuring game integrity, synchronized gameplay, and robust data persistence in a multiplayer environment. The focus is on the networked implementation of progression, persistence, difficulty scaling, and foundational game mechanics, with all logic strictly enforced on the dedicated server instance.

## Architectural Foundation: Server Authority and Networking

The fundamental principle governing the entire game is the **Server-Authoritative Networking Model**. This architecture is essential in a roguelike where progression, difficulty scaling, and loot allocation are core to the experience. By mandating that all game-critical state changes—including damage application, resource consumption, and player progression—must be validated and executed by the server instance, the architecture effectively prevents client-side manipulation (cheating). This is achieved by relying on Unreal Engine’s native C++ networking primitives.

### Core C++ Networking Primitives: The Triad of Synchronization

The architecture relies heavily on three core Unreal Engine networking primitives, each serving a distinct purpose in maintaining synchronization across all connected clients and the server:

1.  **Replicated Properties:** These are C++ member variables within an **Actor** or **Actor Component** that are registered to maintain an identical value across the server and all connected clients. This synchronization is established by overriding the **`GetLifetimeReplicatedProps`** function in the C++ class and utilizing the **`DOREPLIFETIME`** macro. Examples of such properties include the **`ARoundManager`**'s **`CurrentRoundNumber`**, the **`UHealthSystem`**'s **`MaxHealth`**, and the **`UPlayerPerks`** component's three distinct perk arrays. The replication system((Replicate Actor Properties in Unreal Engine | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.) handles the network traffic to ensure eventual consistency across all machines.

2.  **RepNotify Functions:** These functions are an extension of Replicated Properties. They are designated using the **`ReplicatedUsing=OnRep_Variable`** syntax (e.g., **`UPROPERTY(ReplicatedUsing=OnRep_Health)`**). When the server modifies a RepNotify(Replicate Actor Properties in Unreal Engine | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.) property, the new value is automatically replicated to all clients. Crucially, as soon as a client receives the new value and updates its local copy, the designated RepNotify function (e.g., **`OnRep_Health`**) is executed on that client. This mechanism is vital for triggering immediate client-side logic—such as updating a player's health bar UI, displaying a damage number, or playing a particle effect—the moment the server-validated variable's new value is received.

3.  **Remote Procedure Calls (RPCs):** RPCs(Remote Procedure Calls in Unreal Engine | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.) are used exclusively for allowing **clients** to send a validated **request** to the **server** for the execution of authoritative code. This is the necessary gateway for any client-initiated action that must alter the game state. They are defined using a specific function signature and the **`UFUNCTION(Server, Reliable)`** macro, such as **`ServerDrawRandomPerk()`** or **`Server_BeginNewRound()`**. The `Reliable` keyword is a crucial choice for progression events, as it instructs the network layer to re-transmit the function call data until delivery is confirmed, thus preventing critical game state actions from being lost due to transient network congestion.

### Synchronization Flow: The RepNotify Pattern in UHealthSystem

The **`UHealthSystem`** component provides the canonical implementation for managing server-authoritative state using the RepNotify pattern. This implementation secures one of the most fundamental and frequently updated pieces of game state: the player's health.

The health modification functions, such as **`DecreaseHealth(float DeltaAmount)`** and **`IncreaseHealth(float DeltaAmount)`**, are strictly guarded at their entry point by an explicit authority check: `if (!GetOwner()->HasAuthority()) { return; }`(Has Authority | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.). This check ensures that only the server instance can proceed with modifying the core health variable, **`CurrentHealth`**. The server then performs the actual calculation, including clamping the new value using **`FMath::Clamp(CurrentHealth + HealthDelta, 0.0f, MaxHealth)`**, to prevent invalid states like negative health or over-healing beyond the **`MaxHealth`** value.

Following the server-side modification of **`CurrentHealth`**, the server performs a critical step: it **manually calls** the RepNotify function, **`OnRep_Health(float OldHealth)`**. This manual call is essential for two reasons: first, it executes the resulting delegate broadcast on the server immediately, ensuring the server's own local UI and logic are updated without network latency; and second, the act of changing the replicated variable **`CurrentHealth`** automatically flags the new value for transmission to all connected clients.

The **`OnRep_Health(float OldHealth)`** function is the client's reaction mechanism. It executes on all clients (and the server itself, via the manual call). Inside this function, the health change delta is calculated (`CurrentHealth - OldHealth`) and used to broadcast the **`FOnHealthChangedSignature`** delegate. This delegate allows client-side visual components—like the HUD health bar and screen effects—to react instantly and synchronously to the server-validated change in health state. 

## Network Security and RPC Validation

Network security is not merely a feature but a fundamental layer of the multiplayer architecture, primarily maintained through the correct use of RPCs and the principle of **Server-Side Authority** for all state-changing logic.

### RPC Reliability and Purpose

The system employs **Reliable RPCs** (`UFUNCTION(Server, Reliable)`) for all critical progression actions, including those managed by the **`ULootPool`** and **`UPlayerPerks`** components. The choice of **Reliable** over **Unreliable** for actions like drawing and equipping perks is deliberate; it ensures the network stack guarantees the execution of the function call on the server, even if network packets are temporarily lost. Conversely, **Unreliable RPCs** are reserved for non-critical, ephemeral actions where slight loss is acceptable (e.g., footstep sounds or rapid-fire projectile effects).

### Advanced RPC Validation and Anti-Cheat Mechanism

While Unreal Engine provides underlying security for RPCs, the primary anti-cheat mechanism is rooted in the architecture of the authoritative game logic. The RPCs themselves are treated only as a **network request gateway**. The security rests on the fact that the functions containing the critical game logic are strictly executed *only* on the server and are highly defensive.

Consider the perk drawing process. When a player clicks a button, a client executes the **`ServerDrawRandomPerk()`** RPC. The corresponding server implementation, **`ServerDrawRandomPerk_Implementation()`**, acts only as a networking gateway, immediately deferring to the internal, authoritative C++ function: **`DrawPerk_ServerLogic(FPerks& OutPerk)`**. This core logic function is where the game state is manipulated: the random index generation occurs, the item is removed from the authoritative **`CurrentPerkPool`** array, and the deck is managed. A rogue client cannot spoof the result because the necessary array indexing, random number generation, and state modification **all occur on the server's authoritative copy of the data**.

Furthermore, the final state change for the character—the equipping of the perk—is enforced in **`UPlayerPerks::PerkEquipLogic(const FString& PerkName)`**. This function features an explicit, defensive authority check at its very beginning: `if (!GetOwner() || !GetOwner()->HasAuthority()) return false;`. This check confirms that even if a sophisticated client could somehow bypass the RPC mechanism or trigger the function directly in a hostile manner, the function will immediately terminate without modifying the player's progression state unless it is running on the dedicated server instance. This layered approach to security—using Reliable RPCs as requests and enforcing logic via server-only, defensively-programmed functions—ensures the integrity of the roguelike progression.

## Player Character Architecture and System Composition

The **`AFMPCharacter`** serves as the central **Actor** for the player, adhering to a strict component-based design. This architecture isolates game responsibilities into discrete **Actor Components**, which promotes modularity, reusability, and, most importantly in a networked context, compartmentalized replication. All core game components are set to replicate by default, ensuring their state is synchronized across the network.

### Component Composition and Core Systems

The character is composed of three primary C++ components, each dedicated to managing a specific, server-authoritative system:

1.  **UHealthSystem\***: This component is responsible for managing the character's core survival state, namely **`MaxHealth`** and the replicated **`CurrentHealth`** property. As detailed previously, all state-modifying functions, **`DecreaseHealth`** and **`IncreaseHealth`**, are explicitly guarded by an authority check. The logic is simple yet critical: it uses **`FMath::Clamp`** to ensure the **`CurrentHealth`** value remains within the valid bounds of 0.0f and **`MaxHealth`**. The component exposes a powerful delegate, **`FOnHealthChangedSignature`**, which is broadcast via the **`OnRep_Health`** RepNotify function to allow any client-side system (like the HUD widget) to subscribe and react to health changes without relying on unreliable network ticks.

2.  **UPlayerPerks\***: This component acts as the authoritative player progression ledger. It maintains the three key arrays that define a player's power and available progression options: **`LockedPerks`**, **`UnlockedPerks`**, and **`EquippedPerks`**. These arrays, which contain instances of the **`FPerks`** structure, are all registered for replication using **`DOREPLIFETIME`**. The structure **`FPerks`** is a **`USTRUCT`** containing details such as **`Name`**, **`Description`**, and **`RoundLevelUnlockAmount`**. This last field ties the player's available perk pool directly to the overall session progression managed by the **`ARoundManager`**.
    * The primary synchronization point for a player’s equipped perk is the **`LastEquippedPerk`** property, which uses a RepNotify function, **`OnRep_LastEquippedPerk()`**. When the server successfully equips a perk using **`PerkEquipLogic()`**, it sets this variable and manually calls the RepNotify. This triggers the client-side **`OnPerkEquipped`** Blueprint event, which is implemented in the UI layer to provide immediate feedback, such as a confirmation message or an updated character ability list.

3.  **ULootPool\***: This component embodies the "deck" management system vital to the roguelike genre. It acts as the intermediary between the player's progression state (**`UPlayerPerks`**) and the game mechanics of random selection. The component holds a transient, server-only array, **`CurrentPerkPool`** (implied by the logic in **`DrawPerk_ServerLogic`**), which represents the current items available for the player to draw.
    * The **`ResetPool()`** function is a server-only operation that initializes or shuffles the deck. It first empties the **`CurrentPerkPool`** and then copies all current **`UnlockedPerks`** from the **`UPlayerPerks`** component. This ensures that the available draw pool is always consistent with the authoritative progression state.
    * The core functionality, **`DrawPerk_ServerLogic()`**, is a server-only function that executes the random draw. It checks if the pool is empty and calls **`ResetPool()`** if necessary, ensuring a continuous supply of perks. It then selects a random index using Unreal’s random number generator and removes the selected perk from the pool, maintaining the deck’s integrity and ensuring the drawn perk cannot be immediately drawn again. The component also implements the client-to-server RPC gateway, **`ServerDrawRandomPerk()`**, which simply calls the **`DrawPerk_ServerLogic()`** after a client request is received.

### Coordinated Progression Flow

The components interact in a strictly defined, networked progression sequence:

1.  **Round Completion**: The server's **`ARoundManager`** detects a round completion and calls **`UPlayerPerks::CheckAndUnlockPerks()`** for each player.
2.  **Unlock Trigger**: The **`UPlayerPerks`** component updates its authoritative replicated arrays (`LockedPerks` to `UnlockedPerks`) and sets the **`bIsPerkSelectionActive` RepNotify** to **true**. This synchronized variable fires the **`OnRep_IsPerkSelectionActive()`** function on the client, which in turn triggers a **`FOnPerkSelectionNeeded`** delegate. This delegate is bound to the client’s UI to present the perk selection screen.
3.  **Client Request**: The player selects a perk from the UI, which executes a function that initiates the **Reliable Server RPC** on the **`ULootPool`** component (**`ServerDrawRandomPerk`**).
4.  **Server Authority Execution**: The **`ULootPool`** executes its server logic, which then calls the authoritative **`UPlayerPerks::PerkEquipLogic()`**. This function safely moves the selected perk from **`UnlockedPerks`** to **`EquippedPerks`** and immediately sets and calls the RepNotify on the **`LastEquippedPerk`** property.
5.  **Client Feedback**: The RepNotify for **`LastEquippedPerk`** executes on the client, broadcasting the **`OnPerkEquipped`** event to confirm the transaction and update the player's visible abilities.

## The Core Roguelike Game Loop and Scaling

The central nervous system of the roguelike experience is the **`ARoundManager`**, which dictates the game state, controls difficulty scaling, and orchestrates enemy population through its partnership with the **`AEnemySpawner`**.

### Round Management (ARoundManager)

The **`ARoundManager`** is an authoritative Actor that runs exclusively on the server but replicates critical state to all clients. It is configured with **`bReplicates = true`** and a low **`NetUpdateFrequency` of `1.0f`**—meaning its state variables are synchronized only once per second—a suitable rate for slowly changing variables like timers and round numbers, minimizing network overhead.

* **Server Tick and Countdown**: The primary game loop resides in the overridden **`Tick(float DeltaTime)`** function. This function is strictly guarded by the condition **`if (HasAuthority() && bIsRoundActive)`**. Only when running on the server and an active round is in progress does it execute the countdown logic, reducing the replicated **`RoundTimer`**. This replicated timer provides visual synchronization to all clients with minimal bandwidth cost.
* **RPC Initiation**: The public entry point for the round start, **`BeginNewRound()`**, correctly handles client requests. If the calling instance is the server, it directly executes the **`StartRound()`** logic. If a client calls it, it automatically routes the request to the **Reliable Server RPC**: **`Server_BeginNewRound()`**. This ensures that only the server can ultimately initiate a game-critical state change like starting a new round.
* **End-of-Round Logic and Scaling**: The server-only **`EndRound()`** function executes the final progression logic and difficulty scaling. This function first calls the static utility **`TelemetryLogger::RecordSessionData()`**, ensuring player progression is saved. It then implements the core difficulty curve by modifying three replicated properties:
    1.  **`CurrentRoundNumber`** is incremented.
    2.  **`CurrentRoundSpawnRate`** is reduced (to increase spawn frequency), using **`FMath::Max(0.1f, CurrentRoundSpawnRate - 0.1f)`** to enforce a minimum rate of 0.1 seconds.
    3.  **`CurrentRoundMaxEnemies`** is increased by one per round.
    This scaling mechanism, executed and replicated authoritatively by the **`ARoundManager`**, forms the core challenge of the roguelike experience. The function also calls **`UPlayerPerks::CheckAndUnlockPerks()`** for all players, advancing the available perk pool for the newly started round. 
### Enemy Spawning and AI Integration (AEnemySpawner)

The **`AEnemySpawner`** is an authoritative Actor (set to **`bReplicates = true`**) designed to manage the flow of enemies into the map.

* **Timer Authority**: The entire spawning loop is initiated only by the server via **`StartSpawningTimer()`**. This function explicitly uses the **`HasAuthority()`** check before setting the repeating **`SpawnTimerHandle`** using the **`GetWorldTimerManager().SetTimer`** function. This server-only timer ensures that enemy creation is synchronized and controlled solely by the authority. The spawn rate is driven by the **`SpawnRate`** property, which is implicitly controlled by the **`ARoundManager`**'s difficulty scaling via the round-specific variables.
* **Concurrency Control**: The **`SpawnEnemy()`** function includes a dual-layer check to prevent over-spawning. It first checks if a valid **`EnemyToSpawnClass`** is set, and second, it checks if the count of currently **`SpawnedEnemies`** (tracked in a transient **`TArray<AActor*>`**) is less than the **`MaxConcurrentEnemies`** limit.
* **NavMesh Integration and Authority**: Enemy placement prioritizes pathfinding validity, a necessity for reliable AI behavior. The system leverages the **`UNavigationSystemV1`** to attempt to find a valid spawn location using **`GetRandomReachablePointInRadius()`**. This guarantees that newly spawned AI characters land on a navigable surface, preventing them from becoming stuck or unreachable. Once a valid location is found, the enemy is spawned using **`GetWorld()->SpawnActor<ACharacter>`**. Because the **`AEnemySpawner`** is running on the server, this spawned Actor is automatically registered with the network, ensuring it is replicated to all clients.

## Data Persistence and Logging

The game utilizes two distinct persistence and logging mechanisms: the **`TelemetryLogger`** for permanent, critical player profile data (server-side) and the **`UPerformanceLogger`** for transient, technical performance metrics (client-side).

### TelemetryLogger: Server-Side Profile Persistence

The static **`TelemetryLogger`** class manages the player's core progression and statistics save/load operations. Because this involves permanent state like the maximum round reached and unlocked perks, the implementation is strictly server-side.

* **File I/O Path**: The logger uses a fixed, non-volatile file path within the project's Saved directory: **`FPaths::ProjectSavedDir() / TEXT("Telemetry") / TEXT("PlayerProfileStats.json")`**. This fixed path ensures the player’s profile is reliably located across sessions.
* **The Read-Modify-Write (R-M-W) Pattern**(FRWAccessDetector | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.): The **`RecordSessionData()`** function implements a robust R-M-W pattern, which is critical for data integrity when dealing with save files:
    1.  **Read**: The system first attempts to load the existing JSON content from the **`PlayerProfileStats.json`** file into a string using **`FFileHelper::LoadFileToString()`**.
    2.  **Merge/Modify**: If a file exists, it is deserialized into a shared **`FJsonObject`**. New session data (like the **`CurrentRoundNumber`** and the full **`UnlockedPerks`** array passed into the function) is then merged with the existing data. For example, the current round number is compared against the saved **`MaxRoundReached`** to determine the new high score, and the complete **`UnlockedPerks`** array is overwritten with the most recent list from the session. This overwriting mechanism ensures the progression state is always the most current.
    3.  **Write**: The full, updated **`FJsonObject`** is then serialized back into a string and written back to the file using **`FFileHelper::SaveStringToFile()`**, safely **overwriting** the previous profile. This R-M-W process eliminates the risk of data loss or corruption that might occur if the system attempted a partial update or a simple append operation. 
### UPerformanceLogger: Client-Side Metrics

The **`UPerformanceLogger`** component is designed to operate entirely independently on the client to capture technical performance metrics without interfering with authoritative gameplay.

* **Asynchronous Sampling**: To prevent the logging process from causing runtime hitches, the component explicitly disables its native tick (`PrimaryComponentTick.bCanEverTick = false`). Instead, it uses a looping **`SetTimer`** based on the configurable **`LogFrequency`**. This asynchronous method samples metrics like **`FPS`**, **`FrameTime`** (in milliseconds), **`CPUCycles`**, and **`MemoryUsedMB`**.
* **Delayed File Output**: All collected metrics are temporarily stored in a transient array during the session. The crucial architectural choice here is that the file write operation is **delayed** and performed only upon the component's **`EndPlay`** event. This ensures that resource-intensive file I/O operations—which can cause significant, short-duration frame rate drops—are completely isolated from live, low-latency gameplay, thus preserving the player experience. The final output file is uniquely named using a timestamp to ensure session-specific logs are maintained.

## Procedural Generation Implementation

The **`AProceduralGeneration`** system is critical for the roguelike genre, and its networked implementation requires a deterministic approach to ensure map synchronization.

* **Replicated Seed**: The map’s state—including its geometry, terrain features, and object population—is entirely determined by the **`Seed`** property. This property is registered for replication using **`DOREPLIFETIME(AProceduralGeneration, Seed)`**. The server's seed value is the single source of truth for the entire map, guaranteeing that all clients receive the exact same starting parameters for generation.
* **Synchronization Trigger**: When the server modifies the **`Seed`**, the RepNotify function **`OnRep_Seed()`** executes on all clients. This function is the synchronization event, triggering the client-side execution of **`GenerateMap()`**. Since the underlying algorithms (noise generation, meshing logic) are deterministic and operate on the shared seed, all clients render an identical map geometry.
* **Efficient Rendering**: For placing decorative and environment meshes in large quantities, the system utilizes **Hierarchical Instanced Static Mesh Components (HISM)**(Hierarchical Instanced Static Mesh | Unreal Engine 5.3 Documentation | Epic Developer Community, s.d.). HISM is crucial for optimizing rendering performance, as it significantly reduces draw calls by batching thousands of identical static meshes (like rocks or foliage) into a single component, allowing the GPU to process them efficiently.
* **Server Authority on Population**: While all clients generate the map geometry, the spawning of networked **Actors** (e.g., permanent loot, power-ups, environmental hazards) must remain an authoritative server task. The **`PopulateObjects()`** function, which places these actors and static meshes, contains a strict authority check around the **`GetWorld()->SpawnActor`** call. This check—**`if (HasAuthority())`**—ensures that only the server registers the spawned actors with the network, preventing client desynchronization and maintaining control over critical interactive elements.

## Summary and Conclusion

The Unreal Engine C++ multiplayer roguelike is built on a robust, layered, and strictly **Server-Authoritative** foundation. Every critical system—from health management using RepNotify properties to perk progression secured by Reliable RPC gateways and defensive server-side logic—is designed to be impervious to client-side cheating. The game loop is governed by the **`ARoundManager`**'s authoritative tick, which coordinates both difficulty scaling and enemy population via the **`AEnemySpawner`**'s NavMesh-integrated(Basic Navigation in Unreal Engine | Unreal Engine 5.7 Documentation | Epic Developer Community, s.d.), server-timed spawning. Data integrity for player profiles is maintained through the static **`TelemetryLogger`**'s R-M-W pattern, while client performance is passively monitored by the asynchronous **`UPerformanceLogger`**. The procedural generation system leverages a replicated **`Seed`** and HISM for synchronized, performant world creation. This comprehensive architecture ensures a stable, secure, and cooperative multiplayer roguelike experience. The strict adherence to Unreal's C++ networking primitives and defensive programming patterns provides a highly scalable and maintainable codebase capable of supporting the demanding progression and emergent gameplay inherent to the roguelike genre. The use of components on the **`AFMPCharacter`** to cleanly separate concerns—from health state to progression state—is the cornerstone of the system's modularity, allowing for efficient development and iteration of new game features.

## Game

![FMP1](FMP1.gif)

![FMP2](FMP2.gif)

![FMP3](FMP3.gif)