# Technical Documentation: Evolved Survivors

## Project Description

This project implements a scalable, networked survival game architecture using C++ in Unreal Engine, centered around a server-authoritative round-based loop. The system utilizes a deterministic procedural generation framework where a replicated seed ensures synchronized terrain and navigation data across all clients, while a dynamic difficulty scaling algorithm in the GameMode modulates enemy spawner parameters, such as health and spawn rates, based on player count and progression. Player state is managed through a modular component-based system—incorporating health, persistent telemetry logging, and a randomized perk-deck utility—leveraging RepNotifies and multicasts to maintain high-fidelity synchronization in a multiplayer environment.

## System Architecture Overview

### Core Systems & Relationships

The project's logic is distributed across a hierarchical structure that separates authoritative rule-making from local visual representation:

- The Authority (ATheGameMode): Acts as the primary "brain" for the server. It calculates difficulty scaling, manages the round lifecycle, and triggers enemy spawner configurations.

- The Shared Truth (ATheGameState): Serves as the global data hub replicated to all clients. It synchronizes variables like the round timer, player readiness, and the active run state.

- The Environment (AProceduralGeneration): Handles deterministic map creation. By replicating a single Seed, it ensures every client generates an identical physical world locally.

- The Spawner System (AEnemySpawner): Managed by the GameMode to handle AI instantiation. It utilizes the Navigation System and physical traces to find valid spawn points on procedural terrain.

- The Individual (AFMPCharacter): The player's vessel, housing modular components for health, perks, and loot pool logic.

### Design Patterns

The architecture relies on several industry-standard patterns to ensure scalability and network efficiency:

- Component-Based Architecture: Logic is modularized into ActorComponents (e.g., UHealthSystem, UPlayerPerks, ULootPool). This allows the same component (like health logic) to be attached to both players and enemies.

Observer Pattern (Delegates): The project makes extensive use of DECLARE_DYNAMIC_MULTICAST_DELEGATE to decouple logic from the UI. For example, when CurrentHealth changes, a delegate notifies the HUD to update without the Health System needing a reference to the UI.

Stateless Utility (Static Methods): The TelemetryLogger uses static methods to provide a global access point for recording session data without requiring a persistent actor instance in the world.

Authoritative Server/RPCs: To prevent cheating, all critical actions (drawing perks, applying damage) use the Command Pattern via Server RPCs (UFUNCTION(Server, Reliable)), ensuring the client only requests an action and the server executes it.

## Developer Environment & Setup

### Prerequisites

- Unreal Engine: Version 5.6.1

- IDE: JetBrains Rider 2024.3.5 and  Visual Studio 2022

-  Version Control: GitHub and Git LFS (Large File Storage)

### Installation & Compilation

- Clone the Repository and enable Git LFS

- Regenerate Project Files: Delete Binaries, Intermediate, Saved and DerivedDataCache folders then click on generate Visual Studio project files

- Double clickk on UProject file to build it

- Once the build is successful, it will launch

## Development Workflow & CI/CD

### Documentation Pipeline

The project documentation is managed through a Continuous Documentation (CD) pipeline:

Trigger: Every time a commit is pushed to the main branch, a GitHub Action is automatically triggered.

Process: The action executes Doxygen, which parses the C++ headers and source files—including the detailed @brief and @param tags found in classes like AEnemySpawner and AProceduralGeneration—to generate a fresh set of HTML documentation.

Deployment: The generated documentation is automatically hosted, providing a real-time technical reference for the latest state of the architecture.

### Branching Strategy

To ensure the "Main" documentation reflects a stable and documented game state, the following branching strategy is enforced:

Feature Branches: All new mechanics, such as new UPerkEffectBase subclasses or spawner logic, must be developed on separate feature branches.

Documentation Requirement: Developers are required to update Doxygen comments within the code as part of the feature development.

Pull Requests: Merging into main requires a Pull Request. This acts as a quality gate where the code and its corresponding documentation are reviewed simultaneously.

Merging: Upon a successful merge, the Documentation Pipeline refreshes the public-facing technical docs, ensuring no "documentation debt" is accumulated as the project grows.

## Navigating the Documentation

### API Reference & Discovery

The documentation is organized to support both top-down architectural reviews and bottom-up logic investigation:

- Classes Tab: This is the primary entry point for understanding the object hierarchy. It provides an alphabetized list of all major systems, including the AFMPCharacter base class and its associated UActorComponent modules.

- Class Hierarchy: Located within the Classes menu, this view visualizes the relationship between Unreal Engine base classes and our custom implementations, such as the inheritance path from AGameMode to ATheGameMode.

- Files Tab: Use this section to explore the directory structure. It is particularly useful for locating specific header files (.h) to review struct definitions like FPerks or FPerformanceMetrics.

### Coding Standards & Contribution

To maintain the integrity of the "Logic Map" and ensure the automated documentation pipeline remains functional, all contributors must adhere to the following standards:

- write in code with normal standard Unreal conventions

- Write code in Allman style

- Self-Documenting Comments by a Javadoc-style comment block

- Network Safety: Always wrap authoritative logic within HasAuthority() checks or appropriate Server RPC markers (_Implementation) to maintain the project's multiplayer integrity.
