// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationParsing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationParsing() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationParsing();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationParsing_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaTransportationParsing::execConvertTransportationData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_routesCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_agencyCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_tripsCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_shapesCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_calendarCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_calendarDatesCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_stopTimesCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_stopsCSVData);
		P_GET_PROPERTY(FStrProperty,Z_Param_gmtOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationData**)Z_Param__Result=UCoalaTransportationParsing::ConvertTransportationData(Z_Param_routesCSVData,Z_Param_agencyCSVData,Z_Param_tripsCSVData,Z_Param_shapesCSVData,Z_Param_calendarCSVData,Z_Param_calendarDatesCSVData,Z_Param_stopTimesCSVData,Z_Param_stopsCSVData,Z_Param_gmtOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationParsing::execLoadTransportationDataFromJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_json);
		P_GET_PROPERTY(FStrProperty,Z_Param_testGmtOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationData**)Z_Param__Result=UCoalaTransportationParsing::LoadTransportationDataFromJSON(Z_Param_json,Z_Param_testGmtOffset);
		P_NATIVE_END;
	}
	void UCoalaTransportationParsing::StaticRegisterNativesUCoalaTransportationParsing()
	{
		UClass* Class = UCoalaTransportationParsing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertTransportationData", &UCoalaTransportationParsing::execConvertTransportationData },
			{ "LoadTransportationDataFromJSON", &UCoalaTransportationParsing::execLoadTransportationDataFromJSON },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics
	{
		struct CoalaTransportationParsing_eventConvertTransportationData_Parms
		{
			FString routesCSVData;
			FString agencyCSVData;
			FString tripsCSVData;
			FString shapesCSVData;
			FString calendarCSVData;
			FString calendarDatesCSVData;
			FString stopTimesCSVData;
			FString stopsCSVData;
			FString gmtOffset;
			UTransportationData* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_routesCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_agencyCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripsCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_shapesCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_calendarCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_calendarDatesCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopTimesCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopsCSVData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gmtOffset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_routesCSVData = { "routesCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, routesCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_agencyCSVData = { "agencyCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, agencyCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_tripsCSVData = { "tripsCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, tripsCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_shapesCSVData = { "shapesCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, shapesCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_calendarCSVData = { "calendarCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, calendarCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_calendarDatesCSVData = { "calendarDatesCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, calendarDatesCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_stopTimesCSVData = { "stopTimesCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, stopTimesCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_stopsCSVData = { "stopsCSVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, stopsCSVData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_gmtOffset = { "gmtOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, gmtOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventConvertTransportationData_Parms, ReturnValue), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_routesCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_agencyCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_tripsCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_shapesCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_calendarCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_calendarDatesCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_stopTimesCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_stopsCSVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_gmtOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationParsing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationParsing, nullptr, "ConvertTransportationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::CoalaTransportationParsing_eventConvertTransportationData_Parms), Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics
	{
		struct CoalaTransportationParsing_eventLoadTransportationDataFromJSON_Parms
		{
			FString json;
			FString testGmtOffset;
			UTransportationData* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_json;
		static const UECodeGen_Private::FStrPropertyParams NewProp_testGmtOffset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_json = { "json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventLoadTransportationDataFromJSON_Parms, json), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_testGmtOffset = { "testGmtOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventLoadTransportationDataFromJSON_Parms, testGmtOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationParsing_eventLoadTransportationDataFromJSON_Parms, ReturnValue), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_testGmtOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationParsing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationParsing, nullptr, "LoadTransportationDataFromJSON", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::CoalaTransportationParsing_eventLoadTransportationDataFromJSON_Parms), Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTransportationParsing);
	UClass* Z_Construct_UClass_UCoalaTransportationParsing_NoRegister()
	{
		return UCoalaTransportationParsing::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTransportationParsing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTransportationParsing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTransportationParsing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTransportationParsing_ConvertTransportationData, "ConvertTransportationData" }, // 438679024
		{ &Z_Construct_UFunction_UCoalaTransportationParsing_LoadTransportationDataFromJSON, "LoadTransportationDataFromJSON" }, // 2341626985
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTransportationParsing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationParsing.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationParsing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTransportationParsing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTransportationParsing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTransportationParsing_Statics::ClassParams = {
		&UCoalaTransportationParsing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTransportationParsing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTransportationParsing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTransportationParsing()
	{
		if (!Z_Registration_Info_UClass_UCoalaTransportationParsing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTransportationParsing.OuterSingleton, Z_Construct_UClass_UCoalaTransportationParsing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTransportationParsing.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTransportationParsing>()
	{
		return UCoalaTransportationParsing::StaticClass();
	}
	UCoalaTransportationParsing::UCoalaTransportationParsing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTransportationParsing);
	UCoalaTransportationParsing::~UCoalaTransportationParsing() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationParsing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationParsing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTransportationParsing, UCoalaTransportationParsing::StaticClass, TEXT("UCoalaTransportationParsing"), &Z_Registration_Info_UClass_UCoalaTransportationParsing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTransportationParsing), 685892855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationParsing_h_1173465658(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationParsing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationParsing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
