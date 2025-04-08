// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/Net/CoalaNetRemotePlayerData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaNetRemotePlayerData() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData;
class UScriptStruct* FCoalaNetRemotePlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaNetRemotePlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaNetRemotePlayerData>()
{
	return FCoalaNetRemotePlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/CoalaNetRemotePlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaNetRemotePlayerData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaNetRemotePlayerData",
		sizeof(FCoalaNetRemotePlayerData),
		alignof(FCoalaNetRemotePlayerData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.InnerSingleton, Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetRemotePlayerData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetRemotePlayerData_h_Statics::ScriptStructInfo[] = {
		{ FCoalaNetRemotePlayerData::StaticStruct, Z_Construct_UScriptStruct_FCoalaNetRemotePlayerData_Statics::NewStructOps, TEXT("CoalaNetRemotePlayerData"), &Z_Registration_Info_UScriptStruct_CoalaNetRemotePlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaNetRemotePlayerData), 4117494278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetRemotePlayerData_h_2783540836(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetRemotePlayerData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Net_CoalaNetRemotePlayerData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
