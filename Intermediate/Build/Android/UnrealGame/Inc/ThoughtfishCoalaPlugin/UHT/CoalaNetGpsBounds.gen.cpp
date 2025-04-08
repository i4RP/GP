// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/Net/CoalaNetGpsBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaNetGpsBounds() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaNetGpsBounds();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds;
class UScriptStruct* FCoalaNetGpsBounds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaNetGpsBounds, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaNetGpsBounds"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaNetGpsBounds>()
{
	return FCoalaNetGpsBounds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/CoalaNetGpsBounds.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaNetGpsBounds>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaNetGpsBounds",
		sizeof(FCoalaNetGpsBounds),
		alignof(FCoalaNetGpsBounds),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaNetGpsBounds()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.InnerSingleton, Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetGpsBounds_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetGpsBounds_h_Statics::ScriptStructInfo[] = {
		{ FCoalaNetGpsBounds::StaticStruct, Z_Construct_UScriptStruct_FCoalaNetGpsBounds_Statics::NewStructOps, TEXT("CoalaNetGpsBounds"), &Z_Registration_Info_UScriptStruct_CoalaNetGpsBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaNetGpsBounds), 1637682834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetGpsBounds_h_3194747488(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetGpsBounds_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetGpsBounds_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
