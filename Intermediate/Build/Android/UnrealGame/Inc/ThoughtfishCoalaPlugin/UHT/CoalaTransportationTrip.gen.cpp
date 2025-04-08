// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationTrip.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationTrip() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationTrip();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationTrip_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationObjects_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaTransportationTrip::execDestroyTripSpline)
	{
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTransportationTrip::DestroyTripSpline(Z_Param_objectsWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationTrip::execSaveTripSpline)
	{
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_OBJECT(AActor,Z_Param_splineActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportationTrip::SaveTripSpline(Z_Param_objectsWrapper,Z_Param_splineActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationTrip::execGetPositionOfFirstStopInTrip)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_tripId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=UCoalaTransportationTrip::GetPositionOfFirstStopInTrip(Z_Param_data,Z_Param_tripId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationTrip::execUpdateTrips)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_OBJECT(AActor,Z_Param_worldActor);
		P_GET_TARRAY(FString,Z_Param_tripIds);
		P_GET_STRUCT(FCoalaTransportationRenderConfig,Z_Param_config);
		P_GET_ENUM(TransportationType,Z_Param_type);
		P_GET_UBOOL(Z_Param_IsYesterday);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_newVehicles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportationTrip::UpdateTrips(Z_Param_data,Z_Param_objectsWrapper,Z_Param_worldActor,Z_Param_tripIds,Z_Param_config,TransportationType(Z_Param_type),Z_Param_IsYesterday,Z_Param_Out_newVehicles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationTrip::execGetTripPositions)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objects);
		P_GET_PROPERTY(FStrProperty,Z_Param_tripId);
		P_GET_OBJECT(AActor,Z_Param_worldObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UCoalaTransportationTrip::GetTripPositions(Z_Param_data,Z_Param_objects,Z_Param_tripId,Z_Param_worldObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationTrip::execGetCurrentTrips)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_TARRAY_REF(FString,Z_Param_Out_tripIdsToday);
		P_GET_TARRAY_REF(FString,Z_Param_Out_tripIdsYesterday);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTransportationTrip::GetCurrentTrips(Z_Param_data,Z_Param_Out_tripIdsToday,Z_Param_Out_tripIdsYesterday);
		P_NATIVE_END;
	}
	void UCoalaTransportationTrip::StaticRegisterNativesUCoalaTransportationTrip()
	{
		UClass* Class = UCoalaTransportationTrip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTripSpline", &UCoalaTransportationTrip::execDestroyTripSpline },
			{ "GetCurrentTrips", &UCoalaTransportationTrip::execGetCurrentTrips },
			{ "GetPositionOfFirstStopInTrip", &UCoalaTransportationTrip::execGetPositionOfFirstStopInTrip },
			{ "GetTripPositions", &UCoalaTransportationTrip::execGetTripPositions },
			{ "SaveTripSpline", &UCoalaTransportationTrip::execSaveTripSpline },
			{ "UpdateTrips", &UCoalaTransportationTrip::execUpdateTrips },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics
	{
		struct CoalaTransportationTrip_eventDestroyTripSpline_Parms
		{
			UTransportationObjects* objectsWrapper;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventDestroyTripSpline_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::NewProp_objectsWrapper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "DestroyTripSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::CoalaTransportationTrip_eventDestroyTripSpline_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics
	{
		struct CoalaTransportationTrip_eventGetCurrentTrips_Parms
		{
			UTransportationData* data;
			TArray<FString> tripIdsToday;
			TArray<FString> tripIdsYesterday;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripIdsToday_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tripIdsToday;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripIdsYesterday_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tripIdsYesterday;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetCurrentTrips_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsToday_Inner = { "tripIdsToday", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsToday = { "tripIdsToday", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetCurrentTrips_Parms, tripIdsToday), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsYesterday_Inner = { "tripIdsYesterday", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsYesterday = { "tripIdsYesterday", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetCurrentTrips_Parms, tripIdsYesterday), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsToday_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsToday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsYesterday_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::NewProp_tripIdsYesterday,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "GetCurrentTrips", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::CoalaTransportationTrip_eventGetCurrentTrips_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics
	{
		struct CoalaTransportationTrip_eventGetPositionOfFirstStopInTrip_Parms
		{
			UTransportationData* data;
			FString tripId;
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetPositionOfFirstStopInTrip_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_tripId = { "tripId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetPositionOfFirstStopInTrip_Parms, tripId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetPositionOfFirstStopInTrip_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_tripId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "GetPositionOfFirstStopInTrip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::CoalaTransportationTrip_eventGetPositionOfFirstStopInTrip_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics
	{
		struct CoalaTransportationTrip_eventGetTripPositions_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objects;
			FString tripId;
			AActor* worldObject;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objects;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetTripPositions_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_objects = { "objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetTripPositions_Parms, objects), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_tripId = { "tripId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetTripPositions_Parms, tripId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_worldObject = { "worldObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetTripPositions_Parms, worldObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventGetTripPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_tripId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_worldObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "GetTripPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::CoalaTransportationTrip_eventGetTripPositions_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics
	{
		struct CoalaTransportationTrip_eventSaveTripSpline_Parms
		{
			UTransportationObjects* objectsWrapper;
			AActor* splineActor;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_splineActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventSaveTripSpline_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_splineActor = { "splineActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventSaveTripSpline_Parms, splineActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventSaveTripSpline_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_splineActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "SaveTripSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::CoalaTransportationTrip_eventSaveTripSpline_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics
	{
		struct CoalaTransportationTrip_eventUpdateTrips_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objectsWrapper;
			AActor* worldActor;
			TArray<FString> tripIds;
			FCoalaTransportationRenderConfig config;
			TransportationType type;
			bool IsYesterday;
			TArray<AActor*> newVehicles;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldActor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tripIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_IsYesterday_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsYesterday;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newVehicles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newVehicles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_worldActor = { "worldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, worldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_tripIds_Inner = { "tripIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_tripIds = { "tripIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, tripIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, config), Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1191119480
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, type), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(nullptr, 0) }; // 609406224
	void Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_IsYesterday_SetBit(void* Obj)
	{
		((CoalaTransportationTrip_eventUpdateTrips_Parms*)Obj)->IsYesterday = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_IsYesterday = { "IsYesterday", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportationTrip_eventUpdateTrips_Parms), &Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_IsYesterday_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_newVehicles_Inner = { "newVehicles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_newVehicles = { "newVehicles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, newVehicles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationTrip_eventUpdateTrips_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_worldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_tripIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_tripIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_IsYesterday,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_newVehicles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_newVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationTrip, nullptr, "UpdateTrips", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::CoalaTransportationTrip_eventUpdateTrips_Parms), Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTransportationTrip);
	UClass* Z_Construct_UClass_UCoalaTransportationTrip_NoRegister()
	{
		return UCoalaTransportationTrip::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTransportationTrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTransportationTrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTransportationTrip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_DestroyTripSpline, "DestroyTripSpline" }, // 2989088418
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_GetCurrentTrips, "GetCurrentTrips" }, // 2171364259
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_GetPositionOfFirstStopInTrip, "GetPositionOfFirstStopInTrip" }, // 3402584716
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_GetTripPositions, "GetTripPositions" }, // 3823580315
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_SaveTripSpline, "SaveTripSpline" }, // 4143169146
		{ &Z_Construct_UFunction_UCoalaTransportationTrip_UpdateTrips, "UpdateTrips" }, // 2939034823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTransportationTrip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationTrip.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationTrip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTransportationTrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTransportationTrip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTransportationTrip_Statics::ClassParams = {
		&UCoalaTransportationTrip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTransportationTrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTransportationTrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTransportationTrip()
	{
		if (!Z_Registration_Info_UClass_UCoalaTransportationTrip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTransportationTrip.OuterSingleton, Z_Construct_UClass_UCoalaTransportationTrip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTransportationTrip.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTransportationTrip>()
	{
		return UCoalaTransportationTrip::StaticClass();
	}
	UCoalaTransportationTrip::UCoalaTransportationTrip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTransportationTrip);
	UCoalaTransportationTrip::~UCoalaTransportationTrip() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTransportationTrip, UCoalaTransportationTrip::StaticClass, TEXT("UCoalaTransportationTrip"), &Z_Registration_Info_UClass_UCoalaTransportationTrip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTransportationTrip), 3508408057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_281967970(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
