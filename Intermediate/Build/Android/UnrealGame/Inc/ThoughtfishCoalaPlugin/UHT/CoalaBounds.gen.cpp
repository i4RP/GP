// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaBounds() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaBounds;
class UScriptStruct* FCoalaBounds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaBounds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaBounds, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaBounds"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaBounds.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaBounds>()
{
	return FCoalaBounds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaBounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBounds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaBounds.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaBounds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaBounds>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaBounds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaBounds",
		sizeof(FCoalaBounds),
		alignof(FCoalaBounds),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBounds_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBounds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaBounds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaBounds.InnerSingleton, Z_Construct_UScriptStruct_FCoalaBounds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaBounds.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBounds_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBounds_h_Statics::ScriptStructInfo[] = {
		{ FCoalaBounds::StaticStruct, Z_Construct_UScriptStruct_FCoalaBounds_Statics::NewStructOps, TEXT("CoalaBounds"), &Z_Registration_Info_UScriptStruct_CoalaBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaBounds), 305814663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBounds_h_455140344(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBounds_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBounds_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
