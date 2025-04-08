// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaGPSCoordinates() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates;
class UScriptStruct* FCoalaGPSCoordinates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaGPSCoordinates, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaGPSCoordinates"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaGPSCoordinates>()
{
	return FCoalaGPSCoordinates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lon_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lat_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaGPSCoordinates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaGPSCoordinates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lon_MetaData[] = {
		{ "Category", "Coala|GPSCoordinates" },
		{ "ModuleRelativePath", "Public/CoalaGPSCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaGPSCoordinates, lon), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lat_MetaData[] = {
		{ "Category", "Coala|GPSCoordinates" },
		{ "ModuleRelativePath", "Public/CoalaGPSCoordinates.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaGPSCoordinates, lat), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewProp_lat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaGPSCoordinates",
		sizeof(FCoalaGPSCoordinates),
		alignof(FCoalaGPSCoordinates),
		Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.InnerSingleton, Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGPSCoordinates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGPSCoordinates_h_Statics::ScriptStructInfo[] = {
		{ FCoalaGPSCoordinates::StaticStruct, Z_Construct_UScriptStruct_FCoalaGPSCoordinates_Statics::NewStructOps, TEXT("CoalaGPSCoordinates"), &Z_Registration_Info_UScriptStruct_CoalaGPSCoordinates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaGPSCoordinates), 2370250290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGPSCoordinates_h_4244418963(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGPSCoordinates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGPSCoordinates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
