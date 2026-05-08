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
            "Niagara",
            "NavigationSystem"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { 
            "ProceduralMeshComponent",
            "OnlineSubsystem"
        });

        DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
    }
}