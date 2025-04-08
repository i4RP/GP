// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTripArrayWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTripArrayWrapper() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTrip_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTripsWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TripsWrapper;
class UScriptStruct* FTripsWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TripsWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TripsWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTripsWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TripsWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_TripsWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTripsWrapper>()
{
	return FTripsWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTripsWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trips_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trips_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trips_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_trips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTripsWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaTripArrayWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTripsWrapper>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_ValueProp = { "trips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_Key_KeyProp = { "trips_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaTripArrayWrapper.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips = { "trips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTripsWrapper, trips), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTripsWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewProp_trips,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTripsWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"TripsWrapper",
		sizeof(FTripsWrapper),
		alignof(FTripsWrapper),
		Z_Construct_UScriptStruct_FTripsWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTripsWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTripsWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTripsWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTripsWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_TripsWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TripsWrapper.InnerSingleton, Z_Construct_UScriptStruct_FTripsWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TripsWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTripArrayWrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTripArrayWrapper_h_Statics::ScriptStructInfo[] = {
		{ FTripsWrapper::StaticStruct, Z_Construct_UScriptStruct_FTripsWrapper_Statics::NewStructOps, TEXT("TripsWrapper"), &Z_Registration_Info_UScriptStruct_TripsWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTripsWrapper), 1675568993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTripArrayWrapper_h_1259929082(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTripArrayWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTripArrayWrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
