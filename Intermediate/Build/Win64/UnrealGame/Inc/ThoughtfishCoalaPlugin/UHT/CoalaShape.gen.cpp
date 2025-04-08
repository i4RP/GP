// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaShape.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaShape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UShape();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UShape_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UShape::StaticRegisterNativesUShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShape);
	UClass* Z_Construct_UClass_UShape_NoRegister()
	{
		return UShape::StaticClass();
	}
	struct Z_Construct_UClass_UShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedFIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaShape.h" },
		{ "ModuleRelativePath", "Public/CoalaShape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShape_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Coala|Core|Shape" },
		{ "ModuleRelativePath", "Public/CoalaShape.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShape_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShape, position), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UClass_UShape_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShape_Statics::NewProp_position_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShape_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Coala|Core|Shape" },
		{ "ModuleRelativePath", "Public/CoalaShape.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedFIntPropertyParams Z_Construct_UClass_UShape_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShape, index), METADATA_PARAMS(Z_Construct_UClass_UShape_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShape_Statics::NewProp_index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShape_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShape_Statics::NewProp_index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShape_Statics::ClassParams = {
		&UShape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShape_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShape()
	{
		if (!Z_Registration_Info_UClass_UShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShape.OuterSingleton, Z_Construct_UClass_UShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShape.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UShape>()
	{
		return UShape::StaticClass();
	}
	UShape::UShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShape);
	UShape::~UShape() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShape, UShape::StaticClass, TEXT("UShape"), &Z_Registration_Info_UClass_UShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShape), 3361384388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShape_h_3363109180(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
