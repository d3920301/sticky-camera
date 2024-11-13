// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StickyCameraPlugin : ModuleRules
{
	public StickyCameraPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
