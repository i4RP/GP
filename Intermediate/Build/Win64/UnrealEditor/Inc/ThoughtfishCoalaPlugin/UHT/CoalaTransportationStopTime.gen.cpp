// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationStopTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationStopTime() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStopTime();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStopTime_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopTimesArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UStopTime::StaticRegisterNativesUStopTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStopTime);
	UClass* Z_Construct_UClass_UStopTime_NoRegister()
	{
		return UStopTime::StaticClass();
	}
	struct Z_Construct_UClass_UStopTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tripId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedFIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrivalTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrivalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_departureTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_departureTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStopTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationStopTime.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::NewProp_stopId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStopTime_Statics::NewProp_stopId = { "stopId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStopTime, stopId), METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::NewProp_stopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::NewProp_stopId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::NewProp_tripId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStopTime_Statics::NewProp_tripId = { "tripId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStopTime, tripId), METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::NewProp_tripId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::NewProp_tripId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedFIntPropertyParams Z_Construct_UClass_UStopTime_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStopTime, index), METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::NewProp_arrivalTime_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStopTime_Statics::NewProp_arrivalTime = { "arrivalTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStopTime, arrivalTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::NewProp_arrivalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::NewProp_arrivalTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopTime_Statics::NewProp_departureTime_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStopTime_Statics::NewProp_departureTime = { "departureTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStopTime, departureTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::NewProp_departureTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::NewProp_departureTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStopTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopTime_Statics::NewProp_stopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopTime_Statics::NewProp_tripId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopTime_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopTime_Statics::NewProp_arrivalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopTime_Statics::NewProp_departureTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStopTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStopTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStopTime_Statics::ClassParams = {
		&UStopTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStopTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStopTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStopTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStopTime()
	{
		if (!Z_Registration_Info_UClass_UStopTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStopTime.OuterSingleton, Z_Construct_UClass_UStopTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStopTime.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UStopTime>()
	{
		return UStopTime::StaticClass();
	}
	UStopTime::UStopTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStopTime);
	UStopTime::~UStopTime() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper;
class UScriptStruct* FStopTimesArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStopTimesArrayWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("StopTimesArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FStopTimesArrayWrapper>()
{
	return FStopTimesArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stopTimes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStopTimesArrayWrapper>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes_Inner = { "stopTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStopTime_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaTransportationStopTime.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes = { "stopTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStopTimesArrayWrapper, stopTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewProp_stopTimes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"StopTimesArrayWrapper",
		sizeof(FStopTimesArrayWrapper),
		alignof(FStopTimesArrayWrapper),
		Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStopTimesArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ScriptStructInfo[] = {
		{ FStopTimesArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FStopTimesArrayWrapper_Statics::NewStructOps, TEXT("StopTimesArrayWrapper"), &Z_Registration_Info_UScriptStruct_StopTimesArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStopTimesArrayWrapper), 2960221877U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStopTime, UStopTime::StaticClass, TEXT("UStopTime"), &Z_Registration_Info_UClass_UStopTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStopTime), 3798541676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_1876524071(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationStopTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
