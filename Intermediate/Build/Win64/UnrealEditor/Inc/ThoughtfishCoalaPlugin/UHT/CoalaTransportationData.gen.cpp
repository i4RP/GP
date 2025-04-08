// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationData.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaShapeArrayWrapper.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationStop.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationStopTime.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTripArrayWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UAgency_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCalendarInfo_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_URoute_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UStop_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTrip_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FShapeArrayWrapper();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopArrayWrapper();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopTimesArrayWrapper();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTripsWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UTransportationData::StaticRegisterNativesUTransportationData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransportationData);
	UClass* Z_Construct_UClass_UTransportationData_NoRegister()
	{
		return UTransportationData::StaticClass();
	}
	struct Z_Construct_UClass_UTransportationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_transportationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transportationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_transportationType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_agencyData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_agencyData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agencyData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_agencyData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gmtOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_gmtOffset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_routesData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routesData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_routesData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_routesData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tripsDataPerRouteId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripsDataPerRouteId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tripsDataPerRouteId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_tripsDataPerRouteId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tripsDataPerServiceId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripsDataPerServiceId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tripsDataPerServiceId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_tripsDataPerServiceId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tripsData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripsData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tripsData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_tripsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_stopTimesData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopTimesData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopTimesData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopTimesData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_stopTimesDataPerStopId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopTimesDataPerStopId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopTimesDataPerStopId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopTimesDataPerStopId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopsData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopsData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopsData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_stopsDataPerRouteId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopsDataPerRouteId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopsDataPerRouteId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopsDataPerRouteId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_calendarData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_calendarData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calendarData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_calendarData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shapesData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_shapesData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapesData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_shapesData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransportationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "IncludePath", "CoalaTransportationData.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType = { "transportationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, transportationType), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType_MetaData)) }; // 609406224
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_ValueProp = { "agencyData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAgency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_Key_KeyProp = { "agencyData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData = { "agencyData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, agencyData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_gmtOffset_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_gmtOffset = { "gmtOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, gmtOffset), METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_gmtOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_gmtOffset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_ValueProp = { "routesData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URoute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_Key_KeyProp = { "routesData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData = { "routesData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, routesData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_ValueProp = { "tripsDataPerRouteId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTripsWrapper, METADATA_PARAMS(nullptr, 0) }; // 1675568993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_Key_KeyProp = { "tripsDataPerRouteId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId = { "tripsDataPerRouteId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, tripsDataPerRouteId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_MetaData)) }; // 1675568993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_ValueProp = { "tripsDataPerServiceId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTripsWrapper, METADATA_PARAMS(nullptr, 0) }; // 1675568993
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_Key_KeyProp = { "tripsDataPerServiceId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId = { "tripsDataPerServiceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, tripsDataPerServiceId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_MetaData)) }; // 1675568993
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_ValueProp = { "tripsData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_Key_KeyProp = { "tripsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData = { "tripsData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, tripsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_ValueProp = { "stopTimesData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStopTimesArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 2960221877
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_Key_KeyProp = { "stopTimesData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData = { "stopTimesData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, stopTimesData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_MetaData)) }; // 2960221877
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_ValueProp = { "stopTimesDataPerStopId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStopTimesArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 2960221877
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_Key_KeyProp = { "stopTimesDataPerStopId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId = { "stopTimesDataPerStopId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, stopTimesDataPerStopId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_MetaData)) }; // 2960221877
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_ValueProp = { "stopsData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UStop_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_Key_KeyProp = { "stopsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData = { "stopsData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, stopsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_ValueProp = { "stopsDataPerRouteId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStopArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 1138606276
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_Key_KeyProp = { "stopsDataPerRouteId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId = { "stopsDataPerRouteId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, stopsDataPerRouteId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_MetaData)) }; // 1138606276
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_ValueProp = { "calendarData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCalendarInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_Key_KeyProp = { "calendarData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData = { "calendarData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, calendarData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_ValueProp = { "shapesData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FShapeArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 857630666
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_Key_KeyProp = { "shapesData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData = { "shapesData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationData, shapesData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_MetaData)) }; // 857630666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransportationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_transportationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_agencyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_gmtOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_routesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerRouteId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsDataPerServiceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_tripsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopTimesDataPerStopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_stopsDataPerRouteId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_calendarData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationData_Statics::NewProp_shapesData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransportationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransportationData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransportationData_Statics::ClassParams = {
		&UTransportationData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransportationData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransportationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransportationData()
	{
		if (!Z_Registration_Info_UClass_UTransportationData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransportationData.OuterSingleton, Z_Construct_UClass_UTransportationData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransportationData.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UTransportationData>()
	{
		return UTransportationData::StaticClass();
	}
	UTransportationData::UTransportationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransportationData);
	UTransportationData::~UTransportationData() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransportationData, UTransportationData::StaticClass, TEXT("UTransportationData"), &Z_Registration_Info_UClass_UTransportationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransportationData), 171545179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationData_h_3105045695(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
