// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MainProyect : ModuleRules
{
	public MainProyect(ReadOnlyTargetRules Target) : base(Target)
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
			"MainProyect",
			"MainProyect/Variant_Platforming",
			"MainProyect/Variant_Platforming/Animation",
			"MainProyect/Variant_Combat",
			"MainProyect/Variant_Combat/AI",
			"MainProyect/Variant_Combat/Animation",
			"MainProyect/Variant_Combat/Gameplay",
			"MainProyect/Variant_Combat/Interfaces",
			"MainProyect/Variant_Combat/UI",
			"MainProyect/Variant_SideScrolling",
			"MainProyect/Variant_SideScrolling/AI",
			"MainProyect/Variant_SideScrolling/Gameplay",
			"MainProyect/Variant_SideScrolling/Interfaces",
			"MainProyect/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
