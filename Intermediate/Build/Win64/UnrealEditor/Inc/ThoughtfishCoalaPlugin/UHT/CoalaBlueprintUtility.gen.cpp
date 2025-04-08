// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBlueprintUtility.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaBlueprintUtility() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBlueprintUtility();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBlueprintUtility_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCell();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execGetAppName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaBlueprintUtility::GetAppName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execGetAppVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaBlueprintUtility::GetAppVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execDistanceOfGpsPositions)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lng1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat2);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lng2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCoalaBlueprintUtility::DistanceOfGpsPositions(Z_Param_lat1,Z_Param_lng1,Z_Param_lat2,Z_Param_lng2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execCenterOfCell)
	{
		P_GET_STRUCT(FCoalaCell,Z_Param_cell);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_UBOOL(Z_Param_startTopLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCoalaBlueprintUtility::CenterOfCell(Z_Param_cell,Z_Param_area,Z_Param_startTopLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execGetTerrainPositionWithoutArea)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_scenePosition);
		P_GET_OBJECT(AActor,Z_Param_worldProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCoalaBlueprintUtility::GetTerrainPositionWithoutArea(Z_Param_Out_scenePosition,Z_Param_worldProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execGetTerrainPosition)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lon);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCoalaBlueprintUtility::GetTerrainPosition(Z_Param_lon,Z_Param_lat,Z_Param_area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBlueprintUtility::execSetMaximumLoopIterationCounter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBlueprintUtility::SetMaximumLoopIterationCounter(Z_Param_value);
		P_NATIVE_END;
	}
	void UCoalaBlueprintUtility::StaticRegisterNativesUCoalaBlueprintUtility()
	{
		UClass* Class = UCoalaBlueprintUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CenterOfCell", &UCoalaBlueprintUtility::execCenterOfCell },
			{ "DistanceOfGpsPositions", &UCoalaBlueprintUtility::execDistanceOfGpsPositions },
			{ "GetAppName", &UCoalaBlueprintUtility::execGetAppName },
			{ "GetAppVersion", &UCoalaBlueprintUtility::execGetAppVersion },
			{ "GetTerrainPosition", &UCoalaBlueprintUtility::execGetTerrainPosition },
			{ "GetTerrainPositionWithoutArea", &UCoalaBlueprintUtility::execGetTerrainPositionWithoutArea },
			{ "SetMaximumLoopIterationCounter", &UCoalaBlueprintUtility::execSetMaximumLoopIterationCounter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics
	{
		struct CoalaBlueprintUtility_eventCenterOfCell_Parms
		{
			FCoalaCell cell;
			UCoalaArea* area;
			bool startTopLeft;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_cell;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static void NewProp_startTopLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_startTopLeft;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_cell = { "cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventCenterOfCell_Parms, cell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventCenterOfCell_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_startTopLeft_SetBit(void* Obj)
	{
		((CoalaBlueprintUtility_eventCenterOfCell_Parms*)Obj)->startTopLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_startTopLeft = { "startTopLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBlueprintUtility_eventCenterOfCell_Parms), &Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_startTopLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventCenterOfCell_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_startTopLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "CenterOfCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::CoalaBlueprintUtility_eventCenterOfCell_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics
	{
		struct CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms
		{
			double lat1;
			double lng1;
			double lat2;
			double lng2;
			float ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lng1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lng2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lat1 = { "lat1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms, lat1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lng1 = { "lng1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms, lng1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lat2 = { "lat2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms, lat2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lng2 = { "lng2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms, lng2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lat1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lng1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lat2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_lng2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "DisplayName", "DistanceOfGpsPositions" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "DistanceOfGpsPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::CoalaBlueprintUtility_eventDistanceOfGpsPositions_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics
	{
		struct CoalaBlueprintUtility_eventGetAppName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetAppName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "GetAppName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::CoalaBlueprintUtility_eventGetAppName_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics
	{
		struct CoalaBlueprintUtility_eventGetAppVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetAppVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "GetAppVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::CoalaBlueprintUtility_eventGetAppVersion_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics
	{
		struct CoalaBlueprintUtility_eventGetTerrainPosition_Parms
		{
			double lon;
			double lat;
			UCoalaArea* area;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPosition_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPosition_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPosition_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "GetTerrainPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::CoalaBlueprintUtility_eventGetTerrainPosition_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics
	{
		struct CoalaBlueprintUtility_eventGetTerrainPositionWithoutArea_Parms
		{
			FVector scenePosition;
			AActor* worldProvider;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scenePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_scenePosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldProvider;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_scenePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_scenePosition = { "scenePosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPositionWithoutArea_Parms, scenePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_scenePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_scenePosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_worldProvider = { "worldProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPositionWithoutArea_Parms, worldProvider), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventGetTerrainPositionWithoutArea_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_scenePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_worldProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "GetTerrainPositionWithoutArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::CoalaBlueprintUtility_eventGetTerrainPositionWithoutArea_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics
	{
		struct CoalaBlueprintUtility_eventSetMaximumLoopIterationCounter_Parms
		{
			int32 value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBlueprintUtility_eventSetMaximumLoopIterationCounter_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBlueprintUtility, nullptr, "SetMaximumLoopIterationCounter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::CoalaBlueprintUtility_eventSetMaximumLoopIterationCounter_Parms), Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaBlueprintUtility);
	UClass* Z_Construct_UClass_UCoalaBlueprintUtility_NoRegister()
	{
		return UCoalaBlueprintUtility::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaBlueprintUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaBlueprintUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaBlueprintUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_CenterOfCell, "CenterOfCell" }, // 747072294
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_DistanceOfGpsPositions, "DistanceOfGpsPositions" }, // 2997270173
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppName, "GetAppName" }, // 2824439219
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_GetAppVersion, "GetAppVersion" }, // 504363172
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPosition, "GetTerrainPosition" }, // 1629758464
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_GetTerrainPositionWithoutArea, "GetTerrainPositionWithoutArea" }, // 2359069967
		{ &Z_Construct_UFunction_UCoalaBlueprintUtility_SetMaximumLoopIterationCounter, "SetMaximumLoopIterationCounter" }, // 3288119285
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaBlueprintUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaBlueprintUtility.h" },
		{ "ModuleRelativePath", "Public/CoalaBlueprintUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaBlueprintUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaBlueprintUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaBlueprintUtility_Statics::ClassParams = {
		&UCoalaBlueprintUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaBlueprintUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaBlueprintUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaBlueprintUtility()
	{
		if (!Z_Registration_Info_UClass_UCoalaBlueprintUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaBlueprintUtility.OuterSingleton, Z_Construct_UClass_UCoalaBlueprintUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaBlueprintUtility.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaBlueprintUtility>()
	{
		return UCoalaBlueprintUtility::StaticClass();
	}
	UCoalaBlueprintUtility::UCoalaBlueprintUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaBlueprintUtility);
	UCoalaBlueprintUtility::~UCoalaBlueprintUtility() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaBlueprintUtility, UCoalaBlueprintUtility::StaticClass, TEXT("UCoalaBlueprintUtility"), &Z_Registration_Info_UClass_UCoalaBlueprintUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaBlueprintUtility), 1826721641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_3203768852(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
