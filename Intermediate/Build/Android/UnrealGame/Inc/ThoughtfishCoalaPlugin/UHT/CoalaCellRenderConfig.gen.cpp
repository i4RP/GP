// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCellRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCellRenderConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCellRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig;
class UScriptStruct* FCoalaCellRenderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaCellRenderConfig, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaCellRenderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaCellRenderConfig>()
{
	return FCoalaCellRenderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_gametagNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gametagNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_gametagNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyIfGametagIsHighest_MetaData[];
#endif
		static void NewProp_onlyIfGametagIsHighest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyIfGametagIsHighest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaCellRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaCellRenderConfig>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames_Inner = { "gametagNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames_MetaData[] = {
		{ "Category", "Coala|Config|Cell" },
		{ "ModuleRelativePath", "Public/CoalaCellRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames = { "gametagNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCellRenderConfig, gametagNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_material_MetaData[] = {
		{ "Category", "Coala|Config|Cell" },
		{ "ModuleRelativePath", "Public/CoalaCellRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCellRenderConfig, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest_MetaData[] = {
		{ "Category", "Coala|Config|Cell" },
		{ "ModuleRelativePath", "Public/CoalaCellRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest_SetBit(void* Obj)
	{
		((FCoalaCellRenderConfig*)Obj)->onlyIfGametagIsHighest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest = { "onlyIfGametagIsHighest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaCellRenderConfig), &Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_gametagNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewProp_onlyIfGametagIsHighest,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaCellRenderConfig",
		sizeof(FCoalaCellRenderConfig),
		alignof(FCoalaCellRenderConfig),
		Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaCellRenderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellRenderConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellRenderConfig_h_Statics::ScriptStructInfo[] = {
		{ FCoalaCellRenderConfig::StaticStruct, Z_Construct_UScriptStruct_FCoalaCellRenderConfig_Statics::NewStructOps, TEXT("CoalaCellRenderConfig"), &Z_Registration_Info_UScriptStruct_CoalaCellRenderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaCellRenderConfig), 2506499260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellRenderConfig_h_3723863115(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellRenderConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellRenderConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
