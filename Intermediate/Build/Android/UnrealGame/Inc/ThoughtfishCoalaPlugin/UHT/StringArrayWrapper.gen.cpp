// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/StringArrayWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringArrayWrapper() {}
// Cross Module References
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStringArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringArrayWrapper;
class UScriptStruct* FStringArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringArrayWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("StringArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StringArrayWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FStringArrayWrapper>()
{
	return FStringArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_strings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_strings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_strings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/StringArrayWrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringArrayWrapper>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings_Inner = { "strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StringArrayWrapper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings = { "strings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringArrayWrapper, strings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewProp_strings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"StringArrayWrapper",
		sizeof(FStringArrayWrapper),
		alignof(FStringArrayWrapper),
		Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StringArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringArrayWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_StringArrayWrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_StringArrayWrapper_h_Statics::ScriptStructInfo[] = {
		{ FStringArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FStringArrayWrapper_Statics::NewStructOps, TEXT("StringArrayWrapper"), &Z_Registration_Info_UScriptStruct_StringArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringArrayWrapper), 1556959102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_StringArrayWrapper_h_1529953369(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_StringArrayWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_StringArrayWrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
