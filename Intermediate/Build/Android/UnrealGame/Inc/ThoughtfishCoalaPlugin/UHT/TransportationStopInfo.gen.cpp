// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/TransportationStopInfo.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaDepartureInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransportationStopInfo() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDepartureInfo();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopPopupInfo();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StopPopupInfo;
class UScriptStruct* FStopPopupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StopPopupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StopPopupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStopPopupInfo, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("StopPopupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StopPopupInfo.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FStopPopupInfo>()
{
	return FStopPopupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStopPopupInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_departureInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_departureInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_departureInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelchairBoarding_MetaData[];
#endif
		static void NewProp_wheelchairBoarding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wheelchairBoarding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fareURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fareURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopPopupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/TransportationStopInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStopPopupInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo_Inner = { "departureInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDepartureInfo, METADATA_PARAMS(nullptr, 0) }; // 4282318708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationStopInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo = { "departureInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStopPopupInfo, departureInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo_MetaData)) }; // 4282318708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_stopName_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationStopInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_stopName = { "stopName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStopPopupInfo, stopName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_stopName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_stopName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationStopInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding_SetBit(void* Obj)
	{
		((FStopPopupInfo*)Obj)->wheelchairBoarding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding = { "wheelchairBoarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStopPopupInfo), &Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_fareURL_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationStopInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_fareURL = { "fareURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStopPopupInfo, fareURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_fareURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_fareURL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStopPopupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_departureInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_stopName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_wheelchairBoarding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewProp_fareURL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStopPopupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"StopPopupInfo",
		sizeof(FStopPopupInfo),
		alignof(FStopPopupInfo),
		Z_Construct_UScriptStruct_FStopPopupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopPopupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStopPopupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_StopPopupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StopPopupInfo.InnerSingleton, Z_Construct_UScriptStruct_FStopPopupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StopPopupInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationStopInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationStopInfo_h_Statics::ScriptStructInfo[] = {
		{ FStopPopupInfo::StaticStruct, Z_Construct_UScriptStruct_FStopPopupInfo_Statics::NewStructOps, TEXT("StopPopupInfo"), &Z_Registration_Info_UScriptStruct_StopPopupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStopPopupInfo), 4001038581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationStopInfo_h_2778186262(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationStopInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationStopInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
