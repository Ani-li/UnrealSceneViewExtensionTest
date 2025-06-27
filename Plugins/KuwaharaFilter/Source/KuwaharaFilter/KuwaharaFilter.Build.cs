// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KuwaharaFilter : ModuleRules
{
	public KuwaharaFilter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Projects",
				"RenderCore"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"RenderCore",
				"Engine",
				"Core",
				"Renderer",
                "RHI",
                "CoreUObject"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				
			}
			);
	}
}
