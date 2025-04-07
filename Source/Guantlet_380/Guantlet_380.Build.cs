// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Guantlet_380 : ModuleRules
{
	public Guantlet_380(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
