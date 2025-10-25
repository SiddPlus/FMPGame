// Copyright Epic Games, Inc. All Rights Reserved.

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
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

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

        PrivateDependencyModuleNames.AddRange(new string[] { "ProceduralMeshComponent" });
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
