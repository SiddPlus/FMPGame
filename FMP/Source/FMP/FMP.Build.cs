using UnrealBuildTool;

public class FMP : ModuleRules
{
    public FMP(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Json",
            "EnhancedInput",
            "AIModule",
            "StateTreeModule",
            "GameplayStateTreeModule",
            "UMG",
            "Slate",
            "NavigationSystem" // Added from your second list
        });

        PrivateDependencyModuleNames.AddRange(new string[] { 
            "ProceduralMeshComponent",
            "OnlineSubsystem" // Added to support online features
        });

        // This is where you add the line you asked about:
        DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
    }
}