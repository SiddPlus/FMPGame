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

        PublicIncludePaths.AddRange(new string[] {
            "FMP",
            "FMP/Variant_Platforming",
            "FMP/Variant_Platforming/Animation",
            "FMP/Variant_Combat",
            "FMP/Variant_Combat/AI",
            "FMP/Variant_Combat/Animation",
            "FMP/Variant_Combat/Gameplay",
            "FMP/Variant_Combat/Interfaces",
            "FMP/Variant_Combat/UI",
            "FMP/Variant_SideScrolling",
            "FMP/Variant_SideScrolling/AI",
            "FMP/Variant_SideScrolling/Gameplay",
            "FMP/Variant_SideScrolling/Interfaces",
            "FMP/Variant_SideScrolling/UI"
        });
    }
}