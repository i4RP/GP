// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlayerReplicationConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPlayerReplicationConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlayerReplicationConfig();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlayerReplicationConfig_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UCoalaPlayerReplicationConfig::StaticRegisterNativesUCoalaPlayerReplicationConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaPlayerReplicationConfig);
	UClass* Z_Construct_UClass_UCoalaPlayerReplicationConfig_NoRegister()
	{
		return UCoalaPlayerReplicationConfig::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minimumSecondsBetweenPlayerRefreshes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumSecondsBetweenPlayerRefreshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maximumSecondsBetweenPlayerRefreshes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maximumSecondsBetweenPlayerRefreshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_defaultLocalPlayerVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultLocalPlayerVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_defaultLocalPlayerVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xRequestDistanceFromPlayerInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xRequestDistanceFromPlayerInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yRequestDistanceFromPlayerInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yRequestDistanceFromPlayerInMeters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoalaPlayerReplicationConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshes_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshes = { "minimumSecondsBetweenPlayerRefreshes", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, minimumSecondsBetweenPlayerRefreshes), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshes_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshes = { "maximumSecondsBetweenPlayerRefreshes", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, maximumSecondsBetweenPlayerRefreshes), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone = { "minimumSecondsBetweenPlayerRefreshesWhenAlone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, minimumSecondsBetweenPlayerRefreshesWhenAlone), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone = { "maximumSecondsBetweenPlayerRefreshesWhenAlone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, maximumSecondsBetweenPlayerRefreshesWhenAlone), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility = { "defaultLocalPlayerVisibility", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, defaultLocalPlayerVisibility), Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility_MetaData)) }; // 1883689859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_xRequestDistanceFromPlayerInMeters_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_xRequestDistanceFromPlayerInMeters = { "xRequestDistanceFromPlayerInMeters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, xRequestDistanceFromPlayerInMeters), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_xRequestDistanceFromPlayerInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_xRequestDistanceFromPlayerInMeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_yRequestDistanceFromPlayerInMeters_MetaData[] = {
		{ "Category", "Coala|Config|Clients on Map" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplicationConfig.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_yRequestDistanceFromPlayerInMeters = { "yRequestDistanceFromPlayerInMeters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplicationConfig, yRequestDistanceFromPlayerInMeters), METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_yRequestDistanceFromPlayerInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_yRequestDistanceFromPlayerInMeters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_minimumSecondsBetweenPlayerRefreshesWhenAlone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_maximumSecondsBetweenPlayerRefreshesWhenAlone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_defaultLocalPlayerVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_xRequestDistanceFromPlayerInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::NewProp_yRequestDistanceFromPlayerInMeters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaPlayerReplicationConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::ClassParams = {
		&UCoalaPlayerReplicationConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaPlayerReplicationConfig()
	{
		if (!Z_Registration_Info_UClass_UCoalaPlayerReplicationConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaPlayerReplicationConfig.OuterSingleton, Z_Construct_UClass_UCoalaPlayerReplicationConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaPlayerReplicationConfig.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaPlayerReplicationConfig>()
	{
		return UCoalaPlayerReplicationConfig::StaticClass();
	}
	UCoalaPlayerReplicationConfig::UCoalaPlayerReplicationConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaPlayerReplicationConfig);
	UCoalaPlayerReplicationConfig::~UCoalaPlayerReplicationConfig() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplicationConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplicationConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaPlayerReplicationConfig, UCoalaPlayerReplicationConfig::StaticClass, TEXT("UCoalaPlayerReplicationConfig"), &Z_Registration_Info_UClass_UCoalaPlayerReplicationConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaPlayerReplicationConfig), 3080883572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplicationConfig_h_2310068807(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplicationConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplicationConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
