// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaInteractableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaInteractableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaInteractableActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaInteractableActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void ACoalaInteractableActor::StaticRegisterNativesACoalaInteractableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaInteractableActor);
	UClass* Z_Construct_UClass_ACoalaInteractableActor_NoRegister()
	{
		return ACoalaInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//A base class for hit testing ckecks\n" },
		{ "IncludePath", "CoalaInteractableActor.h" },
		{ "ModuleRelativePath", "Public/CoalaInteractableActor.h" },
		{ "ToolTip", "A base class for hit testing ckecks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaInteractableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaInteractableActor_Statics::ClassParams = {
		&ACoalaInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaInteractableActor()
	{
		if (!Z_Registration_Info_UClass_ACoalaInteractableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaInteractableActor.OuterSingleton, Z_Construct_UClass_ACoalaInteractableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaInteractableActor.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaInteractableActor>()
	{
		return ACoalaInteractableActor::StaticClass();
	}
	ACoalaInteractableActor::ACoalaInteractableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaInteractableActor);
	ACoalaInteractableActor::~ACoalaInteractableActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaInteractableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaInteractableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaInteractableActor, ACoalaInteractableActor::StaticClass, TEXT("ACoalaInteractableActor"), &Z_Registration_Info_UClass_ACoalaInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaInteractableActor), 3760942309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaInteractableActor_h_3042285430(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaInteractableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaInteractableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
