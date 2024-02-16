// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS_CPP : ModuleRules
{
	public TPS_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
