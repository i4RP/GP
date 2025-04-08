// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/TransportationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransportationType() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TransportationType;
	static UEnum* TransportationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TransportationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TransportationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationType"));
		}
		return Z_Registration_Info_UEnum_TransportationType.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<TransportationType>()
	{
		return TransportationType_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enumerators[] = {
		{ "TransportationType::NONE", (int64)TransportationType::NONE },
		{ "TransportationType::BUS", (int64)TransportationType::BUS },
		{ "TransportationType::TRAIN", (int64)TransportationType::TRAIN },
		{ "TransportationType::FLIGHT", (int64)TransportationType::FLIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "BUS.Name", "TransportationType::BUS" },
		{ "FLIGHT.Name", "TransportationType::FLIGHT" },
		{ "ModuleRelativePath", "Public/TransportationType.h" },
		{ "NONE.Name", "TransportationType::NONE" },
		{ "TRAIN.Name", "TransportationType::TRAIN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"TransportationType",
		"TransportationType",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType()
	{
		if (!Z_Registration_Info_UEnum_TransportationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TransportationType.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TransportationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h_Statics::EnumInfo[] = {
		{ TransportationType_StaticEnum, TEXT("TransportationType"), &Z_Registration_Info_UEnum_TransportationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 609406224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h_1245604381(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
