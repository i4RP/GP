// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaAreaController.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaAreaController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAreaController();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAreaController_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaAreaController::execGetGametagsFromGpsPosition)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_zoom);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_GET_TARRAY_REF(FString,Z_Param_Out_gametags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAreaController::GetGametagsFromGpsPosition(Z_Param_zoom,Z_Param_lon,Z_Param_lat,Z_Param_Out_gametags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaAreaController::execTryGetKnownArea)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoalaArea**)Z_Param__Result=UCoalaAreaController::TryGetKnownArea(Z_Param_lon,Z_Param_lat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaAreaController::execMoveCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAreaController::MoveCharacter(Z_Param_lon,Z_Param_lat,Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaAreaController::execGetKnownArea)
	{
		P_GET_STRUCT(FCoalaTile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoalaArea**)Z_Param__Result=UCoalaAreaController::GetKnownArea(Z_Param_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaAreaController::execAddKnownArea)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAreaController::AddKnownArea(Z_Param_area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaAreaController::execCalculateAreas)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_zoom);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newLon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newLat);
		P_GET_TARRAY_REF(FCoalaTile,Z_Param_Out_newAreasInRange);
		P_GET_TARRAY_REF(FCoalaTile,Z_Param_Out_areasOutOfRange);
		P_GET_PROPERTY(FIntProperty,Z_Param_buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAreaController::CalculateAreas(Z_Param_zoom,Z_Param_newLon,Z_Param_newLat,Z_Param_Out_newAreasInRange,Z_Param_Out_areasOutOfRange,Z_Param_buffer);
		P_NATIVE_END;
	}
	void UCoalaAreaController::StaticRegisterNativesUCoalaAreaController()
	{
		UClass* Class = UCoalaAreaController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKnownArea", &UCoalaAreaController::execAddKnownArea },
			{ "CalculateAreas", &UCoalaAreaController::execCalculateAreas },
			{ "GetGametagsFromGpsPosition", &UCoalaAreaController::execGetGametagsFromGpsPosition },
			{ "GetKnownArea", &UCoalaAreaController::execGetKnownArea },
			{ "MoveCharacter", &UCoalaAreaController::execMoveCharacter },
			{ "TryGetKnownArea", &UCoalaAreaController::execTryGetKnownArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics
	{
		struct CoalaAreaController_eventAddKnownArea_Parms
		{
			UCoalaArea* area;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventAddKnownArea_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "AddKnownArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::CoalaAreaController_eventAddKnownArea_Parms), Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_AddKnownArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_AddKnownArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics
	{
		struct CoalaAreaController_eventCalculateAreas_Parms
		{
			uint8 zoom;
			float newLon;
			float newLat;
			TArray<FCoalaTile> newAreasInRange;
			TArray<FCoalaTile> areasOutOfRange;
			int32 buffer;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newLon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newLat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_newAreasInRange_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_newAreasInRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_areasOutOfRange_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_areasOutOfRange;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_buffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newLon = { "newLon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, newLon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newLat = { "newLat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, newLat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newAreasInRange_Inner = { "newAreasInRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newAreasInRange = { "newAreasInRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, newAreasInRange), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_areasOutOfRange_Inner = { "areasOutOfRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_areasOutOfRange = { "areasOutOfRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, areasOutOfRange), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventCalculateAreas_Parms, buffer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newLon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newLat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newAreasInRange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_newAreasInRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_areasOutOfRange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_areasOutOfRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::NewProp_buffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "CPP_Default_buffer", "1" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "CalculateAreas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::CoalaAreaController_eventCalculateAreas_Parms), Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_CalculateAreas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_CalculateAreas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics
	{
		struct CoalaAreaController_eventGetGametagsFromGpsPosition_Parms
		{
			uint8 zoom;
			float lon;
			float lat;
			TArray<FString> gametags;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gametags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_gametags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetGametagsFromGpsPosition_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetGametagsFromGpsPosition_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetGametagsFromGpsPosition_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_gametags_Inner = { "gametags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_gametags = { "gametags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetGametagsFromGpsPosition_Parms, gametags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_gametags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::NewProp_gametags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "Comment", "// adding gametags to array (not clearing it before!)\n" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
		{ "ToolTip", "adding gametags to array (not clearing it before!)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "GetGametagsFromGpsPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::CoalaAreaController_eventGetGametagsFromGpsPosition_Parms), Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics
	{
		struct CoalaAreaController_eventGetKnownArea_Parms
		{
			FCoalaTile tile;
			UCoalaArea* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetKnownArea_Parms, tile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventGetKnownArea_Parms, ReturnValue), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "GetKnownArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::CoalaAreaController_eventGetKnownArea_Parms), Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_GetKnownArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_GetKnownArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics
	{
		struct CoalaAreaController_eventMoveCharacter_Parms
		{
			float lon;
			float lat;
			ACharacter* character;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventMoveCharacter_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventMoveCharacter_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventMoveCharacter_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "MoveCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::CoalaAreaController_eventMoveCharacter_Parms), Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_MoveCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_MoveCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics
	{
		struct CoalaAreaController_eventTryGetKnownArea_Parms
		{
			float lon;
			float lat;
			UCoalaArea* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventTryGetKnownArea_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventTryGetKnownArea_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaController_eventTryGetKnownArea_Parms, ReturnValue), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaController, nullptr, "TryGetKnownArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::CoalaAreaController_eventTryGetKnownArea_Parms), Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaAreaController);
	UClass* Z_Construct_UClass_UCoalaAreaController_NoRegister()
	{
		return UCoalaAreaController::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaAreaController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaAreaController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaAreaController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaAreaController_AddKnownArea, "AddKnownArea" }, // 2426029978
		{ &Z_Construct_UFunction_UCoalaAreaController_CalculateAreas, "CalculateAreas" }, // 1418571624
		{ &Z_Construct_UFunction_UCoalaAreaController_GetGametagsFromGpsPosition, "GetGametagsFromGpsPosition" }, // 968437127
		{ &Z_Construct_UFunction_UCoalaAreaController_GetKnownArea, "GetKnownArea" }, // 275455705
		{ &Z_Construct_UFunction_UCoalaAreaController_MoveCharacter, "MoveCharacter" }, // 1121436008
		{ &Z_Construct_UFunction_UCoalaAreaController_TryGetKnownArea, "TryGetKnownArea" }, // 708994721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaAreaController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaAreaController.h" },
		{ "ModuleRelativePath", "Public/CoalaAreaController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaAreaController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaAreaController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaAreaController_Statics::ClassParams = {
		&UCoalaAreaController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaAreaController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaAreaController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaAreaController()
	{
		if (!Z_Registration_Info_UClass_UCoalaAreaController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaAreaController.OuterSingleton, Z_Construct_UClass_UCoalaAreaController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaAreaController.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaAreaController>()
	{
		return UCoalaAreaController::StaticClass();
	}
	UCoalaAreaController::UCoalaAreaController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaAreaController);
	UCoalaAreaController::~UCoalaAreaController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaAreaController, UCoalaAreaController::StaticClass, TEXT("UCoalaAreaController"), &Z_Registration_Info_UClass_UCoalaAreaController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaAreaController), 4246783951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaController_h_4220848780(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
