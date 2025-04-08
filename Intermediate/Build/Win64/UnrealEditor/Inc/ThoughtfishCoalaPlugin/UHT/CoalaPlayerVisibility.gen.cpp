// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlayerVisibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPlayerVisibility() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoalaPlayerVisibility;
	static UEnum* ECoalaPlayerVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoalaPlayerVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoalaPlayerVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("ECoalaPlayerVisibility"));
		}
		return Z_Registration_Info_UEnum_ECoalaPlayerVisibility.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<ECoalaPlayerVisibility>()
	{
		return ECoalaPlayerVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enumerators[] = {
		{ "ECoalaPlayerVisibility::None", (int64)ECoalaPlayerVisibility::None },
		{ "ECoalaPlayerVisibility::AlwaysInvisible", (int64)ECoalaPlayerVisibility::AlwaysInvisible },
		{ "ECoalaPlayerVisibility::AlwaysVisible", (int64)ECoalaPlayerVisibility::AlwaysVisible },
		{ "ECoalaPlayerVisibility::OnlyVisibleWhenRequired", (int64)ECoalaPlayerVisibility::OnlyVisibleWhenRequired },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysInvisible.Name", "ECoalaPlayerVisibility::AlwaysInvisible" },
		{ "AlwaysVisible.Name", "ECoalaPlayerVisibility::AlwaysVisible" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaPlayerVisibility.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ECoalaPlayerVisibility::None" },
		{ "OnlyVisibleWhenRequired.Name", "ECoalaPlayerVisibility::OnlyVisibleWhenRequired" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"ECoalaPlayerVisibility",
		"ECoalaPlayerVisibility",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility()
	{
		if (!Z_Registration_Info_UEnum_ECoalaPlayerVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoalaPlayerVisibility.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoalaPlayerVisibility.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h_Statics::EnumInfo[] = {
		{ ECoalaPlayerVisibility_StaticEnum, TEXT("ECoalaPlayerVisibility"), &Z_Registration_Info_UEnum_ECoalaPlayerVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1883689859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h_3396238268(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
