// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationRoutes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationRoutes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationRoutesStruct();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FTransportationRoutesStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationRoutesStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationRoutesStruct;
class UScriptStruct* FTransportationRoutesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationRoutesStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationRoutesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationRoutesStruct>()
{
	return FTransportationRoutesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_route_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_route_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_agency_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_route_short_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_route_short_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_route_long_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_route_long_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_route_type_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_route_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationRoutesStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_id = { "route_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationRoutesStruct, route_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_agency_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_agency_id = { "agency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationRoutesStruct, agency_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_agency_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_agency_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_short_name_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_short_name = { "route_short_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationRoutesStruct, route_short_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_short_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_short_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_long_name_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_long_name = { "route_long_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationRoutesStruct, route_long_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_long_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_long_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_type_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRoutes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_type = { "route_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationRoutesStruct, route_type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_agency_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_short_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_long_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewProp_route_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationRoutesStruct",
		sizeof(FTransportationRoutesStruct),
		alignof(FTransportationRoutesStruct),
		Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationRoutesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationRoutesStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRoutes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRoutes_h_Statics::ScriptStructInfo[] = {
		{ FTransportationRoutesStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationRoutesStruct_Statics::NewStructOps, TEXT("TransportationRoutesStruct"), &Z_Registration_Info_UScriptStruct_TransportationRoutesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationRoutesStruct), 1900889474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRoutes_h_305641815(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRoutes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRoutes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
