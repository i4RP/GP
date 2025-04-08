// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationRenderConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationTypeSettings();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationTypeSettings;
class UScriptStruct* FTransportationTypeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationTypeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationTypeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationTypeSettings, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationTypeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationTypeSettings.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationTypeSettings>()
{
	return FTransportationTypeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vehicleBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_vehicleBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stopBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationTypeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_vehicleBlueprint_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//The blueprint for the actor which is spawned to represent each vehicle of this setting's type. Needs to inherit from BP_Vehicle!\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "The blueprint for the actor which is spawned to represent each vehicle of this setting's type. Needs to inherit from BP_Vehicle!" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_vehicleBlueprint = { "vehicleBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTypeSettings, vehicleBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_vehicleBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_vehicleBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_stopBlueprint_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//The blueprint for the actor which is spawned to represent each stop of this setting's type. Needs to inherit from  BP_Stop!\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "The blueprint for the actor which is spawned to represent each stop of this setting's type. Needs to inherit from  BP_Stop!" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_stopBlueprint = { "stopBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTypeSettings, stopBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_stopBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_stopBlueprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_vehicleBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewProp_stopBlueprint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"TransportationTypeSettings",
		sizeof(FTransportationTypeSettings),
		alignof(FTransportationTypeSettings),
		Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationTypeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationTypeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationTypeSettings.InnerSingleton, Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationTypeSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig;
class UScriptStruct* FCoalaTransportationRenderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaTransportationRenderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaTransportationRenderConfig>()
{
	return FCoalaTransportationRenderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transportationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_transportationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_busSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_busSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_trainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_flightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transportationDataPerimeter_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_transportationDataPerimeter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaTransportationRenderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationType_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.TransportationType" },
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//This determines the transportation data that will be requested. You can request multiple transportation types by flagging multiple ones. To disable the transportation layer, flag \"NONE\".\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "This determines the transportation data that will be requested. You can request multiple transportation types by flagging multiple ones. To disable the transportation layer, flag \"NONE\"." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationType = { "transportationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTransportationRenderConfig, transportationType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_busSettings_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//These settings apply to entities of the type \"BUS\".\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "These settings apply to entities of the type \"BUS\"." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_busSettings = { "busSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTransportationRenderConfig, busSettings), Z_Construct_UScriptStruct_FTransportationTypeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_busSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_busSettings_MetaData)) }; // 965466770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_trainSettings_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//These settings apply to entities of the type \"TRAIN\".\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "These settings apply to entities of the type \"TRAIN\"." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_trainSettings = { "trainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTransportationRenderConfig, trainSettings), Z_Construct_UScriptStruct_FTransportationTypeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_trainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_trainSettings_MetaData)) }; // 965466770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_flightSettings_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//These settings apply to entities of the type \"FLIGHT\".\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "These settings apply to entities of the type \"FLIGHT\"." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_flightSettings = { "flightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTransportationRenderConfig, flightSettings), Z_Construct_UScriptStruct_FTransportationTypeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_flightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_flightSettings_MetaData)) }; // 965466770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationDataPerimeter_MetaData[] = {
		{ "Category", "Coala Transportation Render Config" },
		{ "Comment", "//This number determines the perimeter (in meter) around the player's location where transportation data will be considered for rendering. Any route and respective vehicles will be rendered as long as at least one stop is located inside the set perimeter.\n" },
		{ "ModuleRelativePath", "Public/CoalaTransportationRenderConfig.h" },
		{ "ToolTip", "This number determines the perimeter (in meter) around the player's location where transportation data will be considered for rendering. Any route and respective vehicles will be rendered as long as at least one stop is located inside the set perimeter." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationDataPerimeter = { "transportationDataPerimeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTransportationRenderConfig, transportationDataPerimeter), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationDataPerimeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationDataPerimeter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_busSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_trainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_flightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewProp_transportationDataPerimeter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaTransportationRenderConfig",
		sizeof(FCoalaTransportationRenderConfig),
		alignof(FCoalaTransportationRenderConfig),
		Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRenderConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRenderConfig_h_Statics::ScriptStructInfo[] = {
		{ FTransportationTypeSettings::StaticStruct, Z_Construct_UScriptStruct_FTransportationTypeSettings_Statics::NewStructOps, TEXT("TransportationTypeSettings"), &Z_Registration_Info_UScriptStruct_TransportationTypeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationTypeSettings), 965466770U) },
		{ FCoalaTransportationRenderConfig::StaticStruct, Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig_Statics::NewStructOps, TEXT("CoalaTransportationRenderConfig"), &Z_Registration_Info_UScriptStruct_CoalaTransportationRenderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaTransportationRenderConfig), 1191119480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRenderConfig_h_2952270938(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRenderConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationRenderConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
