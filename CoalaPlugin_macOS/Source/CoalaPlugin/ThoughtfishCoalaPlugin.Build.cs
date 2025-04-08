// Copyright Thoughtfish GmbH, 2019
// http://www.thoughtfish.de

namespace UnrealBuildTool.Rules
{
	public class ThoughtfishCoalaPlugin : ModuleRules
	{
		public ThoughtfishCoalaPlugin(ReadOnlyTargetRules Target) 
		: base(Target)
		{
			PrivatePCHHeaderFile = "ThoughtfishCoalaPlugin.h";
			OptimizeCode = CodeOptimization.Never;

			PublicDependencyModuleNames.AddRange(
				new string[] { 
					"Core", "CoreUObject", "Engine", "InputCore",
					"ProceduralMeshComponent",
					"Slate", "SlateCore",
					"HTTP", "Json", "JsonUtilities",
					"LocationServicesBPLibrary",
					"DeveloperSettings",
					"RHI", "RenderCore"
				}
			);
			
			if( Target.bBuildEditor == true )
			{
				//@TODO: Needed for FPropertyEditorModule::NotifyCustomizationModuleChanged()
				//@TOOD: To move/implement in FStreetMapComponentDetails
				PrivateDependencyModuleNames.Add("EditorStyle");
			}

			// Add Mac-specific configurations
			if (Target.Platform == UnrealTargetPlatform.Mac)
			{
				// Enable RTTI for Mac platform
				bUseRTTI = true;
				
				// Add Mac-specific compiler settings
				PublicDefinitions.Add("WITH_MAC_PLATFORM=1");
			}

			//bUsePrecompiled = false;
			//bPrecompile = true;
			
			PrecompileForTargets = PrecompileTargetsType.Any;
		}
	}
}
