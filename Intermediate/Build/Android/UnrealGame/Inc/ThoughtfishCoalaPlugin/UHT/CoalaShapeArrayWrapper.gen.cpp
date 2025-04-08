// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaShapeArrayWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaShapeArrayWrapper() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UShape_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShapeArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapeArrayWrapper;
class UScriptStruct* FShapeArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeArrayWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("ShapeArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FShapeArrayWrapper>()
{
	return FShapeArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shapes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaShapeArrayWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeArrayWrapper>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes_Inner = { "shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShape_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaShapeArrayWrapper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes = { "shapes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShapeArrayWrapper, shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewProp_shapes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"ShapeArrayWrapper",
		sizeof(FShapeArrayWrapper),
		alignof(FShapeArrayWrapper),
		Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShapeArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShapeArrayWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShapeArrayWrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShapeArrayWrapper_h_Statics::ScriptStructInfo[] = {
		{ FShapeArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FShapeArrayWrapper_Statics::NewStructOps, TEXT("ShapeArrayWrapper"), &Z_Registration_Info_UScriptStruct_ShapeArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapeArrayWrapper), 857630666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShapeArrayWrapper_h_2725332331(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShapeArrayWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaShapeArrayWrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
