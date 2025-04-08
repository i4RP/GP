// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCustomPOIActor.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCustomPOI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCustomPOIActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaCustomPOIActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaCustomPOIActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCustomPOI();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void ACoalaCustomPOIActor::StaticRegisterNativesACoalaCustomPOIActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaCustomPOIActor);
	UClass* Z_Construct_UClass_ACoalaCustomPOIActor_NoRegister()
	{
		return ACoalaCustomPOIActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaCustomPOIActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customPoiData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_customPoiData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaCustomPOIActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCustomPOIActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaCustomPOIActor.h" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOIActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCustomPOIActor_Statics::NewProp_customPoiData_MetaData[] = {
		{ "Category", "Coala" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOIActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoalaCustomPOIActor_Statics::NewProp_customPoiData = { "customPoiData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCustomPOIActor, customPoiData), Z_Construct_UScriptStruct_FCoalaCustomPOI, METADATA_PARAMS(Z_Construct_UClass_ACoalaCustomPOIActor_Statics::NewProp_customPoiData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCustomPOIActor_Statics::NewProp_customPoiData_MetaData)) }; // 3241917959
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoalaCustomPOIActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCustomPOIActor_Statics::NewProp_customPoiData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaCustomPOIActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaCustomPOIActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaCustomPOIActor_Statics::ClassParams = {
		&ACoalaCustomPOIActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoalaCustomPOIActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCustomPOIActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaCustomPOIActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCustomPOIActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaCustomPOIActor()
	{
		if (!Z_Registration_Info_UClass_ACoalaCustomPOIActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaCustomPOIActor.OuterSingleton, Z_Construct_UClass_ACoalaCustomPOIActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaCustomPOIActor.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaCustomPOIActor>()
	{
		return ACoalaCustomPOIActor::StaticClass();
	}
	ACoalaCustomPOIActor::ACoalaCustomPOIActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaCustomPOIActor);
	ACoalaCustomPOIActor::~ACoalaCustomPOIActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOIActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOIActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaCustomPOIActor, ACoalaCustomPOIActor::StaticClass, TEXT("ACoalaCustomPOIActor"), &Z_Registration_Info_UClass_ACoalaCustomPOIActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaCustomPOIActor), 4101691235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOIActor_h_3926374690(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOIActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOIActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
