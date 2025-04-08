// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaVehicle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStopTime_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UVehicle();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UVehicle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UVehicle::StaticRegisterNativesUVehicle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicle);
	UClass* Z_Construct_UClass_UVehicle_NoRegister()
	{
		return UVehicle::StaticClass();
	}
	struct Z_Construct_UClass_UVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAtVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lookAtVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastStopTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lastStopTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaVehicle.h" },
		{ "ModuleRelativePath", "Public/CoalaVehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicle_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVehicle, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::NewProp_lookRotator_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaVehicle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicle_Statics::NewProp_lookRotator = { "lookRotator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVehicle, lookRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::NewProp_lookRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::NewProp_lookRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::NewProp_lookAtVector_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaVehicle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicle_Statics::NewProp_lookAtVector = { "lookAtVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVehicle, lookAtVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::NewProp_lookAtVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::NewProp_lookAtVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::NewProp_lastStopTime_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaVehicle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicle_Statics::NewProp_lastStopTime = { "lastStopTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVehicle, lastStopTime), Z_Construct_UClass_UStopTime_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::NewProp_lastStopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::NewProp_lastStopTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicle_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicle_Statics::NewProp_lookRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicle_Statics::NewProp_lookAtVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicle_Statics::NewProp_lastStopTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicle_Statics::ClassParams = {
		&UVehicle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicle()
	{
		if (!Z_Registration_Info_UClass_UVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicle.OuterSingleton, Z_Construct_UClass_UVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVehicle.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UVehicle>()
	{
		return UVehicle::StaticClass();
	}
	UVehicle::UVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicle);
	UVehicle::~UVehicle() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVehicle, UVehicle::StaticClass, TEXT("UVehicle"), &Z_Registration_Info_UClass_UVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicle), 3388450461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaVehicle_h_44462563(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
