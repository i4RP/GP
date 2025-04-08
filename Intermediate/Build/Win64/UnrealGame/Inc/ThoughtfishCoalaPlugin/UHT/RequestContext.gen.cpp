// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/RequestContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestContext() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_REQUEST_CONTEXT;
	static UEnum* REQUEST_CONTEXT_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_REQUEST_CONTEXT.OuterSingleton)
		{
			Z_Registration_Info_UEnum_REQUEST_CONTEXT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("REQUEST_CONTEXT"));
		}
		return Z_Registration_Info_UEnum_REQUEST_CONTEXT.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<REQUEST_CONTEXT>()
	{
		return REQUEST_CONTEXT_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enumerators[] = {
		{ "REQUEST_CONTEXT::NONE", (int64)REQUEST_CONTEXT::NONE },
		{ "REQUEST_CONTEXT::GAMETAGS", (int64)REQUEST_CONTEXT::GAMETAGS },
		{ "REQUEST_CONTEXT::POIS", (int64)REQUEST_CONTEXT::POIS },
		{ "REQUEST_CONTEXT::WEATHER", (int64)REQUEST_CONTEXT::WEATHER },
		{ "REQUEST_CONTEXT::STREETS", (int64)REQUEST_CONTEXT::STREETS },
		{ "REQUEST_CONTEXT::BUILDINGS", (int64)REQUEST_CONTEXT::BUILDINGS },
		{ "REQUEST_CONTEXT::WATER", (int64)REQUEST_CONTEXT::WATER },
		{ "REQUEST_CONTEXT::CONTEXT", (int64)REQUEST_CONTEXT::CONTEXT },
		{ "REQUEST_CONTEXT::TIMEZONE", (int64)REQUEST_CONTEXT::TIMEZONE },
		{ "REQUEST_CONTEXT::CUSTOM_POIS", (int64)REQUEST_CONTEXT::CUSTOM_POIS },
		{ "REQUEST_CONTEXT::ELEVATION", (int64)REQUEST_CONTEXT::ELEVATION },
		{ "REQUEST_CONTEXT::CRIME", (int64)REQUEST_CONTEXT::CRIME },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "BUILDINGS.Name", "REQUEST_CONTEXT::BUILDINGS" },
		{ "CONTEXT.Name", "REQUEST_CONTEXT::CONTEXT" },
		{ "CRIME.Name", "REQUEST_CONTEXT::CRIME" },
		{ "CUSTOM_POIS.Name", "REQUEST_CONTEXT::CUSTOM_POIS" },
		{ "ELEVATION.Name", "REQUEST_CONTEXT::ELEVATION" },
		{ "GAMETAGS.Name", "REQUEST_CONTEXT::GAMETAGS" },
		{ "ModuleRelativePath", "Public/RequestContext.h" },
		{ "NONE.Name", "REQUEST_CONTEXT::NONE" },
		{ "POIS.Name", "REQUEST_CONTEXT::POIS" },
		{ "STREETS.Name", "REQUEST_CONTEXT::STREETS" },
		{ "TIMEZONE.Name", "REQUEST_CONTEXT::TIMEZONE" },
		{ "WATER.Name", "REQUEST_CONTEXT::WATER" },
		{ "WEATHER.Name", "REQUEST_CONTEXT::WEATHER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"REQUEST_CONTEXT",
		"REQUEST_CONTEXT",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT()
	{
		if (!Z_Registration_Info_UEnum_REQUEST_CONTEXT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_REQUEST_CONTEXT.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_REQUEST_CONTEXT_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_REQUEST_CONTEXT.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h_Statics::EnumInfo[] = {
		{ REQUEST_CONTEXT_StaticEnum, TEXT("REQUEST_CONTEXT"), &Z_Registration_Info_UEnum_REQUEST_CONTEXT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2008189463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h_2381218248(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
