// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPluginBlueprintLibrary.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPluginBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBoundsBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds;
	static UEnum* EOutputPins_GpsInsideBounds_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("EOutputPins_GpsInsideBounds"));
		}
		return Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_GpsInsideBounds>()
	{
		return EOutputPins_GpsInsideBounds_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enumerators[] = {
		{ "EOutputPins_GpsInsideBounds::Yes", (int64)EOutputPins_GpsInsideBounds::Yes },
		{ "EOutputPins_GpsInsideBounds::No", (int64)EOutputPins_GpsInsideBounds::No },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "No.Name", "EOutputPins_GpsInsideBounds::No" },
		{ "Yes.Name", "EOutputPins_GpsInsideBounds::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"EOutputPins_GpsInsideBounds",
		"EOutputPins_GpsInsideBounds",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execGetHeightOfBounds)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::GetHeightOfBounds(Z_Param_inBounds,Z_Param_Out_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execGetWithOfBounds)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_width);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::GetWithOfBounds(Z_Param_inBounds,Z_Param_Out_width);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execGetCenterOfBounds)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_STRUCT_REF(FCoalaGPSCoordinates,Z_Param_Out_center);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::GetCenterOfBounds(Z_Param_inBounds,Z_Param_Out_center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execContainsGpsPosition)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_gpsPos);
		P_GET_ENUM_REF(EOutputPins_GpsInsideBounds,Z_Param_Out_execResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::ContainsGpsPosition(Z_Param_inBounds,Z_Param_gpsPos,(EOutputPins_GpsInsideBounds&)(Z_Param_Out_execResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execContainsLonLat)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_GET_ENUM_REF(EOutputPins_GpsInsideBounds,Z_Param_Out_execResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::ContainsLonLat(Z_Param_inBounds,Z_Param_lon,Z_Param_lat,(EOutputPins_GpsInsideBounds&)(Z_Param_Out_execResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execCalculateBounds)
	{
		P_GET_TARRAY_REF(FCoalaGPSCoordinates,Z_Param_Out_shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBounds*)Z_Param__Result=UCoalaBoundsBlueprintLibrary::CalculateBounds(Z_Param_Out_shape);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execBreakCoalaBounds)
	{
		P_GET_STRUCT(FCoalaBounds,Z_Param_inBounds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_left);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bottom);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_right);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_top);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBoundsBlueprintLibrary::BreakCoalaBounds(Z_Param_inBounds,Z_Param_Out_left,Z_Param_Out_bottom,Z_Param_Out_right,Z_Param_Out_top);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBoundsBlueprintLibrary::execMakeCoalaBounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_left);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bottom);
		P_GET_PROPERTY(FFloatProperty,Z_Param_right);
		P_GET_PROPERTY(FFloatProperty,Z_Param_top);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBounds*)Z_Param__Result=UCoalaBoundsBlueprintLibrary::MakeCoalaBounds(Z_Param_left,Z_Param_bottom,Z_Param_right,Z_Param_top);
		P_NATIVE_END;
	}
	void UCoalaBoundsBlueprintLibrary::StaticRegisterNativesUCoalaBoundsBlueprintLibrary()
	{
		UClass* Class = UCoalaBoundsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaBounds", &UCoalaBoundsBlueprintLibrary::execBreakCoalaBounds },
			{ "CalculateBounds", &UCoalaBoundsBlueprintLibrary::execCalculateBounds },
			{ "ContainsGpsPosition", &UCoalaBoundsBlueprintLibrary::execContainsGpsPosition },
			{ "ContainsLonLat", &UCoalaBoundsBlueprintLibrary::execContainsLonLat },
			{ "GetCenterOfBounds", &UCoalaBoundsBlueprintLibrary::execGetCenterOfBounds },
			{ "GetHeightOfBounds", &UCoalaBoundsBlueprintLibrary::execGetHeightOfBounds },
			{ "GetWithOfBounds", &UCoalaBoundsBlueprintLibrary::execGetWithOfBounds },
			{ "MakeCoalaBounds", &UCoalaBoundsBlueprintLibrary::execMakeCoalaBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms
		{
			FCoalaBounds inBounds;
			float left;
			float bottom;
			float right;
			float top;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_left;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottom;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_right;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_bottom = { "bottom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms, bottom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_bottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::NewProp_top,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Breaks a coala bounds apart into left, bottom, right, top. */" },
		{ "DisplayName", "Break Bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala bounds apart into left, bottom, right, top." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "BreakCoalaBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::CoalaBoundsBlueprintLibrary_eventBreakCoalaBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventCalculateBounds_Parms
		{
			TArray<FCoalaGPSCoordinates> shape;
			FCoalaBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_shape_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_shape_Inner = { "shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventCalculateBounds_Parms, shape), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventCalculateBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Calculate bounds from gps shape. */" },
		{ "DisplayName", "Calculate Bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Calculate bounds from gps shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "CalculateBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::CoalaBoundsBlueprintLibrary_eventCalculateBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventContainsGpsPosition_Parms
		{
			FCoalaBounds inBounds;
			FCoalaGPSCoordinates gpsPos;
			EOutputPins_GpsInsideBounds execResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gpsPos;
		static const UECodeGen_Private::FBytePropertyParams NewProp_execResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_execResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsGpsPosition_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_gpsPos = { "gpsPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsGpsPosition_Parms, gpsPos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_execResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_execResult = { "execResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsGpsPosition_Parms, execResult), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds, METADATA_PARAMS(nullptr, 0) }; // 1609359647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_gpsPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_execResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::NewProp_execResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Check if GPS coordinates inside bounds */" },
		{ "DisplayName", "Bounds contain gps position" },
		{ "ExpandEnumAsExecs", "execResult" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Check if GPS coordinates inside bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "ContainsGpsPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::CoalaBoundsBlueprintLibrary_eventContainsGpsPosition_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms
		{
			FCoalaBounds inBounds;
			float lon;
			float lat;
			EOutputPins_GpsInsideBounds execResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_execResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_execResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_execResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_execResult = { "execResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms, execResult), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GpsInsideBounds, METADATA_PARAMS(nullptr, 0) }; // 1609359647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_execResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::NewProp_execResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Check if lon lat inside bounds */" },
		{ "DisplayName", "Bounds contain lon,lat" },
		{ "ExpandEnumAsExecs", "execResult" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Check if lon lat inside bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "ContainsLonLat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::CoalaBoundsBlueprintLibrary_eventContainsLonLat_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventGetCenterOfBounds_Parms
		{
			FCoalaBounds inBounds;
			FCoalaGPSCoordinates center;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetCenterOfBounds_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetCenterOfBounds_Parms, center), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::NewProp_center,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Get center of bounds */" },
		{ "DisplayName", "Get center of bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Get center of bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "GetCenterOfBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::CoalaBoundsBlueprintLibrary_eventGetCenterOfBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventGetHeightOfBounds_Parms
		{
			FCoalaBounds inBounds;
			float height;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetHeightOfBounds_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetHeightOfBounds_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::NewProp_height,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Get height of bounds */" },
		{ "DisplayName", "Get height of bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Get height of bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "GetHeightOfBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::CoalaBoundsBlueprintLibrary_eventGetHeightOfBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventGetWithOfBounds_Parms
		{
			FCoalaBounds inBounds;
			float width;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBounds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::NewProp_inBounds = { "inBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetWithOfBounds_Parms, inBounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventGetWithOfBounds_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::NewProp_inBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::NewProp_width,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Get width of bounds */" },
		{ "DisplayName", "Get width of bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Get width of bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "GetWithOfBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::CoalaBoundsBlueprintLibrary_eventGetWithOfBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics
	{
		struct CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms
		{
			float left;
			float bottom;
			float right;
			float top;
			FCoalaBounds ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_left;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottom;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_right;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_top;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_bottom = { "bottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms, bottom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_top = { "top", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms, top), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_bottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Bounds" },
		{ "Comment", "/** Makes a coala bounds {left, buttom, right, top} */" },
		{ "DisplayName", "Make Bounds" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala bounds {left, buttom, right, top}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, nullptr, "MakeCoalaBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::CoalaBoundsBlueprintLibrary_eventMakeCoalaBounds_Parms), Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaBoundsBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_NoRegister()
	{
		return UCoalaBoundsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_BreakCoalaBounds, "BreakCoalaBounds" }, // 898435233
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_CalculateBounds, "CalculateBounds" }, // 3898466288
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsGpsPosition, "ContainsGpsPosition" }, // 787219131
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_ContainsLonLat, "ContainsLonLat" }, // 1668424866
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetCenterOfBounds, "GetCenterOfBounds" }, // 1265611477
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetHeightOfBounds, "GetHeightOfBounds" }, // 591474832
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_GetWithOfBounds, "GetWithOfBounds" }, // 2761087187
		{ &Z_Construct_UFunction_UCoalaBoundsBlueprintLibrary_MakeCoalaBounds, "MakeCoalaBounds" }, // 3975047777
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaPluginBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaBoundsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::ClassParams = {
		&UCoalaBoundsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaBoundsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaBoundsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaBoundsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaBoundsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaBoundsBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaBoundsBlueprintLibrary>()
	{
		return UCoalaBoundsBlueprintLibrary::StaticClass();
	}
	UCoalaBoundsBlueprintLibrary::UCoalaBoundsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaBoundsBlueprintLibrary);
	UCoalaBoundsBlueprintLibrary::~UCoalaBoundsBlueprintLibrary() {}
	DEFINE_FUNCTION(UCoalaGPSCoordinatesBlueprintLibrary::execDistance)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_a);
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCoalaGPSCoordinatesBlueprintLibrary::Distance(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGPSCoordinatesBlueprintLibrary::execGpsPositionToWorldPosition)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_coordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCoalaGPSCoordinatesBlueprintLibrary::GpsPositionToWorldPosition(Z_Param_coordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGPSCoordinatesBlueprintLibrary::execWorldPositionToGpsCoordinates)
	{
		P_GET_STRUCT(FVector,Z_Param_scenePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=UCoalaGPSCoordinatesBlueprintLibrary::WorldPositionToGpsCoordinates(Z_Param_scenePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGPSCoordinatesBlueprintLibrary::execBreakCoalaGPSCoordinates)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_inGpsCoordinates);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_lon);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaGPSCoordinatesBlueprintLibrary::BreakCoalaGPSCoordinates(Z_Param_inGpsCoordinates,Z_Param_Out_lon,Z_Param_Out_lat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGPSCoordinatesBlueprintLibrary::execMakeCoalaGPSCoordinates)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=UCoalaGPSCoordinatesBlueprintLibrary::MakeCoalaGPSCoordinates(Z_Param_lon,Z_Param_lat);
		P_NATIVE_END;
	}
	void UCoalaGPSCoordinatesBlueprintLibrary::StaticRegisterNativesUCoalaGPSCoordinatesBlueprintLibrary()
	{
		UClass* Class = UCoalaGPSCoordinatesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaGPSCoordinates", &UCoalaGPSCoordinatesBlueprintLibrary::execBreakCoalaGPSCoordinates },
			{ "Distance", &UCoalaGPSCoordinatesBlueprintLibrary::execDistance },
			{ "GpsPositionToWorldPosition", &UCoalaGPSCoordinatesBlueprintLibrary::execGpsPositionToWorldPosition },
			{ "MakeCoalaGPSCoordinates", &UCoalaGPSCoordinatesBlueprintLibrary::execMakeCoalaGPSCoordinates },
			{ "WorldPositionToGpsCoordinates", &UCoalaGPSCoordinatesBlueprintLibrary::execWorldPositionToGpsCoordinates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics
	{
		struct CoalaGPSCoordinatesBlueprintLibrary_eventBreakCoalaGPSCoordinates_Parms
		{
			FCoalaGPSCoordinates inGpsCoordinates;
			float lon;
			float lat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inGpsCoordinates;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_inGpsCoordinates = { "inGpsCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventBreakCoalaGPSCoordinates_Parms, inGpsCoordinates), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventBreakCoalaGPSCoordinates_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventBreakCoalaGPSCoordinates_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_inGpsCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::NewProp_lat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|GPSCoordinates" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break GPSCoordinates" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, nullptr, "BreakCoalaGPSCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::CoalaGPSCoordinatesBlueprintLibrary_eventBreakCoalaGPSCoordinates_Parms), Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics
	{
		struct CoalaGPSCoordinatesBlueprintLibrary_eventDistance_Parms
		{
			FCoalaGPSCoordinates a;
			FCoalaGPSCoordinates b;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_a;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_b;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventDistance_Parms, a), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_a_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_a_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventDistance_Parms, b), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_b_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_b_MetaData)) }; // 2370250290
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Convert" },
		{ "Comment", "/** Distance {float} between two gps coordinates {lon, lat}. */" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Distance {float} between two gps coordinates {lon, lat}." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, nullptr, "Distance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::CoalaGPSCoordinatesBlueprintLibrary_eventDistance_Parms), Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics
	{
		struct CoalaGPSCoordinatesBlueprintLibrary_eventGpsPositionToWorldPosition_Parms
		{
			FCoalaGPSCoordinates coordinates;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_coordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::NewProp_coordinates = { "coordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventGpsPositionToWorldPosition_Parms, coordinates), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventGpsPositionToWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::NewProp_coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Convert" },
		{ "Comment", "/** Convert gps coordinates {lon, lat} to world position vector {X,Y,Z}. */" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Convert gps coordinates {lon, lat} to world position vector {X,Y,Z}." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, nullptr, "GpsPositionToWorldPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::CoalaGPSCoordinatesBlueprintLibrary_eventGpsPositionToWorldPosition_Parms), Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics
	{
		struct CoalaGPSCoordinatesBlueprintLibrary_eventMakeCoalaGPSCoordinates_Parms
		{
			float lon;
			float lat;
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventMakeCoalaGPSCoordinates_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventMakeCoalaGPSCoordinates_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventMakeCoalaGPSCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|GPSCoordinates" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make GPSCoordinates" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, nullptr, "MakeCoalaGPSCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::CoalaGPSCoordinatesBlueprintLibrary_eventMakeCoalaGPSCoordinates_Parms), Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics
	{
		struct CoalaGPSCoordinatesBlueprintLibrary_eventWorldPositionToGpsCoordinates_Parms
		{
			FVector scenePosition;
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_scenePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::NewProp_scenePosition = { "scenePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventWorldPositionToGpsCoordinates_Parms, scenePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGPSCoordinatesBlueprintLibrary_eventWorldPositionToGpsCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::NewProp_scenePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Convert" },
		{ "Comment", "/** Convert a world position vector {X,Y,Z} to gps coordinates {lon, lat}. */" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
		{ "ToolTip", "Convert a world position vector {X,Y,Z} to gps coordinates {lon, lat}." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, nullptr, "WorldPositionToGpsCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::CoalaGPSCoordinatesBlueprintLibrary_eventWorldPositionToGpsCoordinates_Parms), Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaGPSCoordinatesBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_NoRegister()
	{
		return UCoalaGPSCoordinatesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_BreakCoalaGPSCoordinates, "BreakCoalaGPSCoordinates" }, // 3957214044
		{ &Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_Distance, "Distance" }, // 2214463554
		{ &Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_GpsPositionToWorldPosition, "GpsPositionToWorldPosition" }, // 4185900594
		{ &Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_MakeCoalaGPSCoordinates, "MakeCoalaGPSCoordinates" }, // 2108803571
		{ &Z_Construct_UFunction_UCoalaGPSCoordinatesBlueprintLibrary_WorldPositionToGpsCoordinates, "WorldPositionToGpsCoordinates" }, // 2898064691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaPluginBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CoalaPluginBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaGPSCoordinatesBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::ClassParams = {
		&UCoalaGPSCoordinatesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaGPSCoordinatesBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaGPSCoordinatesBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaGPSCoordinatesBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaGPSCoordinatesBlueprintLibrary>()
	{
		return UCoalaGPSCoordinatesBlueprintLibrary::StaticClass();
	}
	UCoalaGPSCoordinatesBlueprintLibrary::UCoalaGPSCoordinatesBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaGPSCoordinatesBlueprintLibrary);
	UCoalaGPSCoordinatesBlueprintLibrary::~UCoalaGPSCoordinatesBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::EnumInfo[] = {
		{ EOutputPins_GpsInsideBounds_StaticEnum, TEXT("EOutputPins_GpsInsideBounds"), &Z_Registration_Info_UEnum_EOutputPins_GpsInsideBounds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1609359647U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaBoundsBlueprintLibrary, UCoalaBoundsBlueprintLibrary::StaticClass, TEXT("UCoalaBoundsBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaBoundsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaBoundsBlueprintLibrary), 4008501078U) },
		{ Z_Construct_UClass_UCoalaGPSCoordinatesBlueprintLibrary, UCoalaGPSCoordinatesBlueprintLibrary::StaticClass, TEXT("UCoalaGPSCoordinatesBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaGPSCoordinatesBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaGPSCoordinatesBlueprintLibrary), 26815474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_1839278718(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPluginBlueprintLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
