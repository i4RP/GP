// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationStop.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationStop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStop();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStop_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UStop::StaticRegisterNativesUStop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStop);
	UClass* Z_Construct_UClass_UStop_NoRegister()
	{
		return UStop::StaticClass();
	}
	struct Z_Construct_UClass_UStop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelchairBoardingPossible_MetaData[];
#endif
		static void NewProp_wheelchairBoardingPossible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wheelchairBoardingPossible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationStop.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStop_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStop_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStop, name), METADATA_PARAMS(Z_Construct_UClass_UStop_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStop_Statics::NewProp_stopId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStop_Statics::NewProp_stopId = { "stopId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStop, stopId), METADATA_PARAMS(Z_Construct_UClass_UStop_Statics::NewProp_stopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::NewProp_stopId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStop_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStop_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStop, position), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UClass_UStop_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::NewProp_position_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	void Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible_SetBit(void* Obj)
	{
		((UStop*)Obj)->wheelchairBoardingPossible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible = { "wheelchairBoardingPossible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStop), &Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStop_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStop_Statics::NewProp_stopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStop_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStop_Statics::NewProp_wheelchairBoardingPossible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStop_Statics::ClassParams = {
		&UStop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStop()
	{
		if (!Z_Registration_Info_UClass_UStop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStop.OuterSingleton, Z_Construct_UClass_UStop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStop.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UStop>()
	{
		return UStop::StaticClass();
	}
	UStop::UStop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStop);
	UStop::~UStop() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StopArrayWrapper;
class UScriptStruct* FStopArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StopArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StopArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStopArrayWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("StopArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StopArrayWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FStopArrayWrapper>()
{
	return FStopArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStopArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStopArrayWrapper>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops_Inner = { "stops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStop_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaTransportationStop.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops = { "stops", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStopArrayWrapper, stops), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewProp_stops,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"StopArrayWrapper",
		sizeof(FStopArrayWrapper),
		alignof(FStopArrayWrapper),
		Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStopArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StopArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StopArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StopArrayWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ScriptStructInfo[] = {
		{ FStopArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FStopArrayWrapper_Statics::NewStructOps, TEXT("StopArrayWrapper"), &Z_Registration_Info_UScriptStruct_StopArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStopArrayWrapper), 1138606276U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStop, UStop::StaticClass, TEXT("UStop"), &Z_Registration_Info_UClass_UStop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStop), 1977019670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_3150893667(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStop_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
