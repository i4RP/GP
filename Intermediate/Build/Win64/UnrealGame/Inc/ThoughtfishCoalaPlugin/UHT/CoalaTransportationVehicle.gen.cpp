// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportationVehicle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UAgency_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationVehicle();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationVehicle_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationObjects_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTrip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaTransportationVehicle::execCleanUpVehicles)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_TARRAY(FString,Z_Param_tripIdsToRender);
		P_GET_UBOOL_REF(Z_Param_Out_somethingWasCleanedUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportationVehicle::CleanUpVehicles(Z_Param_data,Z_Param_objectsWrapper,Z_Param_tripIdsToRender,Z_Param_Out_somethingWasCleanedUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationVehicle::execRenderVehicleForTrip)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(AActor,Z_Param_worldActor);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_OBJECT(UClass,Z_Param_blueprintVehicle);
		P_GET_PROPERTY(FStrProperty,Z_Param_tripId);
		P_GET_STRUCT(FDateTime,Z_Param_time);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_newVehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportationVehicle::RenderVehicleForTrip(Z_Param_data,Z_Param_worldActor,Z_Param_objectsWrapper,Z_Param_blueprintVehicle,Z_Param_tripId,Z_Param_time,Z_Param_Out_newVehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportationVehicle::execFindInfoFromVehicle)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objects);
		P_GET_OBJECT(AActor,Z_Param_vehicle);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_tripId);
		P_GET_OBJECT_REF(UTrip,Z_Param_Out_trip);
		P_GET_OBJECT_REF(UAgency,Z_Param_Out_agency);
		P_GET_UBOOL_REF(Z_Param_Out_foundInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTransportationVehicle::FindInfoFromVehicle(Z_Param_data,Z_Param_objects,Z_Param_vehicle,Z_Param_Out_tripId,Z_Param_Out_trip,Z_Param_Out_agency,Z_Param_Out_foundInfo);
		P_NATIVE_END;
	}
	void UCoalaTransportationVehicle::StaticRegisterNativesUCoalaTransportationVehicle()
	{
		UClass* Class = UCoalaTransportationVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanUpVehicles", &UCoalaTransportationVehicle::execCleanUpVehicles },
			{ "FindInfoFromVehicle", &UCoalaTransportationVehicle::execFindInfoFromVehicle },
			{ "RenderVehicleForTrip", &UCoalaTransportationVehicle::execRenderVehicleForTrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics
	{
		struct CoalaTransportationVehicle_eventCleanUpVehicles_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objectsWrapper;
			TArray<FString> tripIdsToRender;
			bool somethingWasCleanedUp;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripIdsToRender_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tripIdsToRender;
		static void NewProp_somethingWasCleanedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_somethingWasCleanedUp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventCleanUpVehicles_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventCleanUpVehicles_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_tripIdsToRender_Inner = { "tripIdsToRender", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_tripIdsToRender = { "tripIdsToRender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventCleanUpVehicles_Parms, tripIdsToRender), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_somethingWasCleanedUp_SetBit(void* Obj)
	{
		((CoalaTransportationVehicle_eventCleanUpVehicles_Parms*)Obj)->somethingWasCleanedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_somethingWasCleanedUp = { "somethingWasCleanedUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportationVehicle_eventCleanUpVehicles_Parms), &Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_somethingWasCleanedUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventCleanUpVehicles_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_tripIdsToRender_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_tripIdsToRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_somethingWasCleanedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationVehicle, nullptr, "CleanUpVehicles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::CoalaTransportationVehicle_eventCleanUpVehicles_Parms), Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics
	{
		struct CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objects;
			AActor* vehicle;
			FString tripId;
			UTrip* trip;
			UAgency* agency;
			bool foundInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vehicle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trip;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_agency;
		static void NewProp_foundInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_foundInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_objects = { "objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, objects), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_vehicle = { "vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, vehicle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_tripId = { "tripId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, tripId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_trip = { "trip", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, trip), Z_Construct_UClass_UTrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_agency = { "agency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms, agency), Z_Construct_UClass_UAgency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_foundInfo_SetBit(void* Obj)
	{
		((CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms*)Obj)->foundInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_foundInfo = { "foundInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms), &Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_foundInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_vehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_tripId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_trip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_agency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::NewProp_foundInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationVehicle, nullptr, "FindInfoFromVehicle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::CoalaTransportationVehicle_eventFindInfoFromVehicle_Parms), Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics
	{
		struct CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms
		{
			UTransportationData* data;
			AActor* worldActor;
			UTransportationObjects* objectsWrapper;
			UClass* blueprintVehicle;
			FString tripId;
			FDateTime time;
			AActor* newVehicle;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FClassPropertyParams NewProp_blueprintVehicle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tripId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_time;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newVehicle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_worldActor = { "worldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, worldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_blueprintVehicle = { "blueprintVehicle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, blueprintVehicle), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_tripId = { "tripId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, tripId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_newVehicle = { "newVehicle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, newVehicle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_worldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_blueprintVehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_tripId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_newVehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportationVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationVehicle, nullptr, "RenderVehicleForTrip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::CoalaTransportationVehicle_eventRenderVehicleForTrip_Parms), Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTransportationVehicle);
	UClass* Z_Construct_UClass_UCoalaTransportationVehicle_NoRegister()
	{
		return UCoalaTransportationVehicle::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTransportationVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTransportationVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTransportationVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTransportationVehicle_CleanUpVehicles, "CleanUpVehicles" }, // 4256159322
		{ &Z_Construct_UFunction_UCoalaTransportationVehicle_FindInfoFromVehicle, "FindInfoFromVehicle" }, // 2455088140
		{ &Z_Construct_UFunction_UCoalaTransportationVehicle_RenderVehicleForTrip, "RenderVehicleForTrip" }, // 2792132760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTransportationVehicle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportationVehicle.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportationVehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTransportationVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTransportationVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTransportationVehicle_Statics::ClassParams = {
		&UCoalaTransportationVehicle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTransportationVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTransportationVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTransportationVehicle()
	{
		if (!Z_Registration_Info_UClass_UCoalaTransportationVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTransportationVehicle.OuterSingleton, Z_Construct_UClass_UCoalaTransportationVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTransportationVehicle.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTransportationVehicle>()
	{
		return UCoalaTransportationVehicle::StaticClass();
	}
	UCoalaTransportationVehicle::UCoalaTransportationVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTransportationVehicle);
	UCoalaTransportationVehicle::~UCoalaTransportationVehicle() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTransportationVehicle, UCoalaTransportationVehicle::StaticClass, TEXT("UCoalaTransportationVehicle"), &Z_Registration_Info_UClass_UCoalaTransportationVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTransportationVehicle), 2560526093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationVehicle_h_2913670417(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
