// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationTableRows.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationTableRows() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationCalendarStruct();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationShapesStruct();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationStopsStruct();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationStopTimesStruct();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransportationTripsStruct();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FTransportationCalendarDatesStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationCalendarDatesStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct;
class UScriptStruct* FTransportationCalendarDatesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationCalendarDatesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationCalendarDatesStruct>()
{
	return FTransportationCalendarDatesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_service_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_service_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_exception_type_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_exception_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationCalendarDatesStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_service_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_service_id = { "service_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarDatesStruct, service_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_service_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_service_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_date_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarDatesStruct, date), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_date_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_exception_type_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_exception_type = { "exception_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarDatesStruct, exception_type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_exception_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_exception_type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_service_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewProp_exception_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationCalendarDatesStruct",
		sizeof(FTransportationCalendarDatesStruct),
		alignof(FTransportationCalendarDatesStruct),
		Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransportationShapesStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationShapesStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationShapesStruct;
class UScriptStruct* FTransportationShapesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationShapesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationShapesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationShapesStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationShapesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationShapesStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationShapesStruct>()
{
	return FTransportationShapesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shape_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_pt_lat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shape_pt_lat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_pt_lon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shape_pt_lon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_pt_sequence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_shape_pt_sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationShapesStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_id = { "shape_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationShapesStruct, shape_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lat_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lat = { "shape_pt_lat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationShapesStruct, shape_pt_lat), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lon_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lon = { "shape_pt_lon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationShapesStruct, shape_pt_lon), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_sequence_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_sequence = { "shape_pt_sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationShapesStruct, shape_pt_sequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_sequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewProp_shape_pt_sequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationShapesStruct",
		sizeof(FTransportationShapesStruct),
		alignof(FTransportationShapesStruct),
		Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationShapesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationShapesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationShapesStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationShapesStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransportationStopsStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationStopsStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationStopsStruct;
class UScriptStruct* FTransportationStopsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationStopsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationStopsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationStopsStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationStopsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationStopsStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationStopsStruct>()
{
	return FTransportationStopsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stop_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_lat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stop_lat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_lon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stop_lon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stop_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelchair_boarding_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wheelchair_boarding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationStopsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_id = { "stop_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopsStruct, stop_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lat_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lat = { "stop_lat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopsStruct, stop_lat), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lon_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lon = { "stop_lon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopsStruct, stop_lon), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_name_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_name = { "stop_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopsStruct, stop_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_wheelchair_boarding_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_wheelchair_boarding = { "wheelchair_boarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopsStruct, wheelchair_boarding), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_wheelchair_boarding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_wheelchair_boarding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_stop_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewProp_wheelchair_boarding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationStopsStruct",
		sizeof(FTransportationStopsStruct),
		alignof(FTransportationStopsStruct),
		Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationStopsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationStopsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationStopsStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationStopsStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransportationStopTimesStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationStopTimesStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct;
class UScriptStruct* FTransportationStopTimesStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationStopTimesStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationStopTimesStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationStopTimesStruct>()
{
	return FTransportationStopTimesStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stop_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trip_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_trip_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrival_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_arrival_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_departure_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_departure_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stop_sequence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_stop_sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationStopTimesStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_id = { "stop_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopTimesStruct, stop_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_trip_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_trip_id = { "trip_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopTimesStruct, trip_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_trip_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_trip_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_arrival_time_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_arrival_time = { "arrival_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopTimesStruct, arrival_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_arrival_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_arrival_time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_departure_time_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_departure_time = { "departure_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopTimesStruct, departure_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_departure_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_departure_time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_sequence_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_sequence = { "stop_sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationStopTimesStruct, stop_sequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_sequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_trip_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_arrival_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_departure_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewProp_stop_sequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationStopTimesStruct",
		sizeof(FTransportationStopTimesStruct),
		alignof(FTransportationStopTimesStruct),
		Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationStopTimesStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransportationTripsStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationTripsStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationTripsStruct;
class UScriptStruct* FTransportationTripsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationTripsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationTripsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationTripsStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationTripsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationTripsStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationTripsStruct>()
{
	return FTransportationTripsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_route_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_route_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trip_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_trip_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_service_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_service_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shape_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shape_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_id_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_direction_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bikes_allowed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bikes_allowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trip_headsign_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_trip_headsign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelchair_accessible_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wheelchair_accessible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationTripsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_route_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_route_id = { "route_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, route_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_route_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_route_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_id = { "trip_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, trip_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_service_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_service_id = { "service_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, service_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_service_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_service_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_shape_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_shape_id = { "shape_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, shape_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_shape_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_shape_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_direction_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_direction_id = { "direction_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, direction_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_direction_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_direction_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_bikes_allowed_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_bikes_allowed = { "bikes_allowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, bikes_allowed), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_bikes_allowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_bikes_allowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_headsign_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_headsign = { "trip_headsign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, trip_headsign), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_headsign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_headsign_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_wheelchair_accessible_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_wheelchair_accessible = { "wheelchair_accessible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationTripsStruct, wheelchair_accessible), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_wheelchair_accessible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_wheelchair_accessible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_route_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_service_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_shape_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_direction_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_bikes_allowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_trip_headsign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewProp_wheelchair_accessible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationTripsStruct",
		sizeof(FTransportationTripsStruct),
		alignof(FTransportationTripsStruct),
		Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationTripsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationTripsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationTripsStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationTripsStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransportationCalendarStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTransportationCalendarStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransportationCalendarStruct;
class UScriptStruct* FTransportationCalendarStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransportationCalendarStruct, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("TransportationCalendarStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FTransportationCalendarStruct>()
{
	return FTransportationCalendarStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_service_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_service_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_monday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_monday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tuesday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tuesday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wednesday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wednesday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thursday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_thursday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_friday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_friday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saturday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_saturday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sunday_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sunday;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_start_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_end_date;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransportationCalendarStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_service_id_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_service_id = { "service_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, service_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_service_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_service_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_monday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_monday = { "monday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, monday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_monday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_monday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_tuesday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_tuesday = { "tuesday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, tuesday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_tuesday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_tuesday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_wednesday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_wednesday = { "wednesday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, wednesday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_wednesday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_wednesday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_thursday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_thursday = { "thursday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, thursday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_thursday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_thursday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_friday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_friday = { "friday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, friday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_friday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_friday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_saturday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_saturday = { "saturday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, saturday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_saturday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_saturday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_sunday_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_sunday = { "sunday", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, sunday), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_sunday_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_sunday_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_start_date_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_start_date = { "start_date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, start_date), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_start_date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_start_date_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_end_date_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTableRows.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_end_date = { "end_date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransportationCalendarStruct, end_date), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_end_date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_end_date_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_service_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_monday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_tuesday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_wednesday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_thursday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_friday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_saturday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_sunday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_start_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewProp_end_date,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TransportationCalendarStruct",
		sizeof(FTransportationCalendarStruct),
		alignof(FTransportationCalendarStruct),
		Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransportationCalendarStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.InnerSingleton, Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransportationCalendarStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTableRows_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTableRows_h_Statics::ScriptStructInfo[] = {
		{ FTransportationCalendarDatesStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationCalendarDatesStruct_Statics::NewStructOps, TEXT("TransportationCalendarDatesStruct"), &Z_Registration_Info_UScriptStruct_TransportationCalendarDatesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationCalendarDatesStruct), 2369705850U) },
		{ FTransportationShapesStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationShapesStruct_Statics::NewStructOps, TEXT("TransportationShapesStruct"), &Z_Registration_Info_UScriptStruct_TransportationShapesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationShapesStruct), 4259937726U) },
		{ FTransportationStopsStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationStopsStruct_Statics::NewStructOps, TEXT("TransportationStopsStruct"), &Z_Registration_Info_UScriptStruct_TransportationStopsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationStopsStruct), 1498610910U) },
		{ FTransportationStopTimesStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationStopTimesStruct_Statics::NewStructOps, TEXT("TransportationStopTimesStruct"), &Z_Registration_Info_UScriptStruct_TransportationStopTimesStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationStopTimesStruct), 450976429U) },
		{ FTransportationTripsStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationTripsStruct_Statics::NewStructOps, TEXT("TransportationTripsStruct"), &Z_Registration_Info_UScriptStruct_TransportationTripsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationTripsStruct), 748635024U) },
		{ FTransportationCalendarStruct::StaticStruct, Z_Construct_UScriptStruct_FTransportationCalendarStruct_Statics::NewStructOps, TEXT("TransportationCalendarStruct"), &Z_Registration_Info_UScriptStruct_TransportationCalendarStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransportationCalendarStruct), 3429281447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTableRows_h_280920920(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTableRows_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTableRows_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
