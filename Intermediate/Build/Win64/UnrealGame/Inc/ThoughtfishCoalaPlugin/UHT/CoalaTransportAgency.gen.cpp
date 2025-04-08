// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportAgency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportAgency() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationAgencyStruct();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FTransportationAgencyStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationAgencyStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationAgencyStruct;
class UScriptStruct* FTransportationAgencyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationAgencyStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationAgencyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationAgencyStruct>()
{
	return FTransportationAgencyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_agency_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agency_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_agency_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agency_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_agency_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agency_fare_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_agency_fare_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportAgency.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationAgencyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportAgency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_id = { "agency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationAgencyStruct, agency_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_name_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportAgency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_name = { "agency_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationAgencyStruct, agency_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_url_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportAgency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_url = { "agency_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationAgencyStruct, agency_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_fare_url_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportAgency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_fare_url = { "agency_fare_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationAgencyStruct, agency_fare_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_fare_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_fare_url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewProp_agency_fare_url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationAgencyStruct",
		sizeof(FTransportationAgencyStruct),
		alignof(FTransportationAgencyStruct),
		Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationAgencyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationAgencyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportAgency_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportAgency_h_Statics::ScriptStructInfo[] = {
		{ FTransportationAgencyStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationAgencyStruct_Statics::NewStructOps, TEXT("TransportationAgencyStruct"), &Z_Registration_Info_UScriptStruct_TransportationAgencyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationAgencyStruct), 1151196928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportAgency_h_1582332884(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportAgency_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportAgency_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
