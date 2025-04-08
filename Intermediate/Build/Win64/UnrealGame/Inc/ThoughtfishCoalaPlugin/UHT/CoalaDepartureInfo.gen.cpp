// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaDepartureInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaDepartureInfo() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDepartureInfo();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DepartureInfo;
class UScriptStruct* FDepartureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DepartureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DepartureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDepartureInfo, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("DepartureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DepartureInfo.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FDepartureInfo>()
{
	return FDepartureInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDepartureInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_headsign_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_headsign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_departureTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_departureTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDepartureInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaDepartureInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDepartureInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_headsign_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaDepartureInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_headsign = { "headsign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDepartureInfo, headsign), METADATA_PARAMS(Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_headsign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_headsign_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_departureTime_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaDepartureInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_departureTime = { "departureTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDepartureInfo, departureTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_departureTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_departureTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDepartureInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_headsign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewProp_departureTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDepartureInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"DepartureInfo",
		sizeof(FDepartureInfo),
		alignof(FDepartureInfo),
		Z_Construct_UScriptStruct_FDepartureInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDepartureInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDepartureInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDepartureInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDepartureInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DepartureInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DepartureInfo.InnerSingleton, Z_Construct_UScriptStruct_FDepartureInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DepartureInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDepartureInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDepartureInfo_h_Statics::ScriptStructInfo[] = {
		{ FDepartureInfo::StaticStruct, Z_Construct_UScriptStruct_FDepartureInfo_Statics::NewStructOps, TEXT("DepartureInfo"), &Z_Registration_Info_UScriptStruct_DepartureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDepartureInfo), 4282318708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDepartureInfo_h_1378731196(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDepartureInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDepartureInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
