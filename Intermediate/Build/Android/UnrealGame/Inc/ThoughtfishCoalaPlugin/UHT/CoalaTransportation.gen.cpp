// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportation.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTransportationRenderConfig.h"
#include "ThoughtfishCoalaPlugin/Public/TransportationStopInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTransportation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportation();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportation_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationData_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationObjects_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStopPopupInfo();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaTransportation::execGetTimeNowWithGMTOffset)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UCoalaTransportation::GetTimeNowWithGMTOffset(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execUpdateZPositions)
	{
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTransportation::UpdateZPositions(Z_Param_objectsWrapper,Z_Param_area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execCheckIfPlayerLeftCurrentTransportationPerimeter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_playerLon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playerLat);
		P_GET_STRUCT(FCoalaTransportationRenderConfig,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCoalaTransportation::CheckIfPlayerLeftCurrentTransportationPerimeter(Z_Param_playerLon,Z_Param_playerLat,Z_Param_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execBitflaggedEnumToFlagArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TransportationType>*)Z_Param__Result=UCoalaTransportation::BitflaggedEnumToFlagArray(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execGetStopPopupInfo)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_stopId);
		P_GET_UBOOL(Z_Param_arrivalInfoOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStopPopupInfo*)Z_Param__Result=UCoalaTransportation::GetStopPopupInfo(Z_Param_data,Z_Param_stopId,Z_Param_arrivalInfoOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execFindStopIdFromObject)
	{
		P_GET_OBJECT(UTransportationObjects,Z_Param_objects);
		P_GET_OBJECT(AActor,Z_Param_stopActor);
		P_GET_UBOOL_REF(Z_Param_Out_foundId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaTransportation::FindStopIdFromObject(Z_Param_objects,Z_Param_stopActor,Z_Param_Out_foundId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execCleanUpRoutes)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportation::CleanUpRoutes(Z_Param_data,Z_Param_objectsWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTransportation::execRenderRoutes)
	{
		P_GET_OBJECT(UTransportationData,Z_Param_data);
		P_GET_OBJECT(UTransportationObjects,Z_Param_objectsWrapper);
		P_GET_OBJECT(AActor,Z_Param_worldActor);
		P_GET_STRUCT(FCoalaTransportationRenderConfig,Z_Param_config);
		P_GET_ENUM(TransportationType,Z_Param_type);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_newVehicles);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_newStops);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransportationObjects**)Z_Param__Result=UCoalaTransportation::RenderRoutes(Z_Param_data,Z_Param_objectsWrapper,Z_Param_worldActor,Z_Param_config,TransportationType(Z_Param_type),Z_Param_Out_newVehicles,Z_Param_Out_newStops);
		P_NATIVE_END;
	}
	void UCoalaTransportation::StaticRegisterNativesUCoalaTransportation()
	{
		UClass* Class = UCoalaTransportation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BitflaggedEnumToFlagArray", &UCoalaTransportation::execBitflaggedEnumToFlagArray },
			{ "CheckIfPlayerLeftCurrentTransportationPerimeter", &UCoalaTransportation::execCheckIfPlayerLeftCurrentTransportationPerimeter },
			{ "CleanUpRoutes", &UCoalaTransportation::execCleanUpRoutes },
			{ "FindStopIdFromObject", &UCoalaTransportation::execFindStopIdFromObject },
			{ "GetStopPopupInfo", &UCoalaTransportation::execGetStopPopupInfo },
			{ "GetTimeNowWithGMTOffset", &UCoalaTransportation::execGetTimeNowWithGMTOffset },
			{ "RenderRoutes", &UCoalaTransportation::execRenderRoutes },
			{ "UpdateZPositions", &UCoalaTransportation::execUpdateZPositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics
	{
		struct CoalaTransportation_eventBitflaggedEnumToFlagArray_Parms
		{
			int32 type;
			TArray<TransportationType> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_type_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.TransportationType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventBitflaggedEnumToFlagArray_Parms, type), METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_type_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(nullptr, 0) }; // 609406224
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventBitflaggedEnumToFlagArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 609406224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "BitflaggedEnumToFlagArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::CoalaTransportation_eventBitflaggedEnumToFlagArray_Parms), Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics
	{
		struct CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms
		{
			float playerLon;
			float playerLat;
			FCoalaTransportationRenderConfig config;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerLon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerLat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_playerLon = { "playerLon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms, playerLon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_playerLat = { "playerLat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms, playerLat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms, config), Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1191119480
	void Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms), &Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_playerLon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_playerLat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "CheckIfPlayerLeftCurrentTransportationPerimeter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::CoalaTransportation_eventCheckIfPlayerLeftCurrentTransportationPerimeter_Parms), Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics
	{
		struct CoalaTransportation_eventCleanUpRoutes_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objectsWrapper;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCleanUpRoutes_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCleanUpRoutes_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventCleanUpRoutes_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "CleanUpRoutes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::CoalaTransportation_eventCleanUpRoutes_Parms), Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics
	{
		struct CoalaTransportation_eventFindStopIdFromObject_Parms
		{
			UTransportationObjects* objects;
			AActor* stopActor;
			bool foundId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopActor;
		static void NewProp_foundId_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_foundId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_objects = { "objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventFindStopIdFromObject_Parms, objects), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_stopActor = { "stopActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventFindStopIdFromObject_Parms, stopActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_foundId_SetBit(void* Obj)
	{
		((CoalaTransportation_eventFindStopIdFromObject_Parms*)Obj)->foundId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_foundId = { "foundId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportation_eventFindStopIdFromObject_Parms), &Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_foundId_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventFindStopIdFromObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_stopActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_foundId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "FindStopIdFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::CoalaTransportation_eventFindStopIdFromObject_Parms), Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics
	{
		struct CoalaTransportation_eventGetStopPopupInfo_Parms
		{
			UTransportationData* data;
			FString stopId;
			bool arrivalInfoOnly;
			FStopPopupInfo ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopId;
		static void NewProp_arrivalInfoOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_arrivalInfoOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventGetStopPopupInfo_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_stopId = { "stopId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventGetStopPopupInfo_Parms, stopId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_arrivalInfoOnly_SetBit(void* Obj)
	{
		((CoalaTransportation_eventGetStopPopupInfo_Parms*)Obj)->arrivalInfoOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_arrivalInfoOnly = { "arrivalInfoOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTransportation_eventGetStopPopupInfo_Parms), &Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_arrivalInfoOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventGetStopPopupInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FStopPopupInfo, METADATA_PARAMS(nullptr, 0) }; // 4001038581
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_stopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_arrivalInfoOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "GetStopPopupInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::CoalaTransportation_eventGetStopPopupInfo_Parms), Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics
	{
		struct CoalaTransportation_eventGetTimeNowWithGMTOffset_Parms
		{
			UTransportationData* data;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventGetTimeNowWithGMTOffset_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventGetTimeNowWithGMTOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "GetTimeNowWithGMTOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::CoalaTransportation_eventGetTimeNowWithGMTOffset_Parms), Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics
	{
		struct CoalaTransportation_eventRenderRoutes_Parms
		{
			UTransportationData* data;
			UTransportationObjects* objectsWrapper;
			AActor* worldActor;
			FCoalaTransportationRenderConfig config;
			TransportationType type;
			TArray<AActor*> newVehicles;
			TArray<AActor*> newStops;
			UTransportationObjects* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newVehicles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newVehicles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newStops_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newStops;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, data), Z_Construct_UClass_UTransportationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_worldActor = { "worldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, worldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, config), Z_Construct_UScriptStruct_FCoalaTransportationRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1191119480
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, type), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(nullptr, 0) }; // 609406224
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newVehicles_Inner = { "newVehicles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newVehicles = { "newVehicles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, newVehicles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newStops_Inner = { "newStops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newStops = { "newStops", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, newStops), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventRenderRoutes_Parms, ReturnValue), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_worldActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newVehicles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newStops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_newStops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "RenderRoutes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::CoalaTransportation_eventRenderRoutes_Parms), Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_RenderRoutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_RenderRoutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics
	{
		struct CoalaTransportation_eventUpdateZPositions_Parms
		{
			UTransportationObjects* objectsWrapper;
			UCoalaArea* area;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectsWrapper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::NewProp_objectsWrapper = { "objectsWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventUpdateZPositions_Parms, objectsWrapper), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportation_eventUpdateZPositions_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::NewProp_objectsWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportation, nullptr, "UpdateZPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::CoalaTransportation_eventUpdateZPositions_Parms), Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTransportation);
	UClass* Z_Construct_UClass_UCoalaTransportation_NoRegister()
	{
		return UCoalaTransportation::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTransportation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTransportation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTransportation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTransportation_BitflaggedEnumToFlagArray, "BitflaggedEnumToFlagArray" }, // 1619971834
		{ &Z_Construct_UFunction_UCoalaTransportation_CheckIfPlayerLeftCurrentTransportationPerimeter, "CheckIfPlayerLeftCurrentTransportationPerimeter" }, // 2088799126
		{ &Z_Construct_UFunction_UCoalaTransportation_CleanUpRoutes, "CleanUpRoutes" }, // 4103619835
		{ &Z_Construct_UFunction_UCoalaTransportation_FindStopIdFromObject, "FindStopIdFromObject" }, // 3794142857
		{ &Z_Construct_UFunction_UCoalaTransportation_GetStopPopupInfo, "GetStopPopupInfo" }, // 1636142589
		{ &Z_Construct_UFunction_UCoalaTransportation_GetTimeNowWithGMTOffset, "GetTimeNowWithGMTOffset" }, // 1072883490
		{ &Z_Construct_UFunction_UCoalaTransportation_RenderRoutes, "RenderRoutes" }, // 550047961
		{ &Z_Construct_UFunction_UCoalaTransportation_UpdateZPositions, "UpdateZPositions" }, // 3972630796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTransportation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTransportation.h" },
		{ "ModuleRelativePath", "Public/CoalaTransportation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTransportation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTransportation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTransportation_Statics::ClassParams = {
		&UCoalaTransportation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTransportation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTransportation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTransportation()
	{
		if (!Z_Registration_Info_UClass_UCoalaTransportation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTransportation.OuterSingleton, Z_Construct_UClass_UCoalaTransportation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTransportation.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTransportation>()
	{
		return UCoalaTransportation::StaticClass();
	}
	UCoalaTransportation::UCoalaTransportation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTransportation);
	UCoalaTransportation::~UCoalaTransportation() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTransportation, UCoalaTransportation::StaticClass, TEXT("UCoalaTransportation"), &Z_Registration_Info_UClass_UCoalaTransportation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTransportation), 527399856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportation_h_3440357035(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
