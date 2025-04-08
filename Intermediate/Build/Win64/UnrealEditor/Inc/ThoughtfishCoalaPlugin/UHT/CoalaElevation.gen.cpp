// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaElevation.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaElevation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaElevationBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaElevationBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCell();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaElevation();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaElevation;
class UScriptStruct* FCoalaElevation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaElevation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaElevation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaElevation, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaElevation"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaElevation.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaElevation>()
{
	return FCoalaElevation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaElevation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaElevation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaElevation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_min_MetaData[] = {
		{ "Category", "Coala|Variables|Elevation" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaElevation, min), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_max_MetaData[] = {
		{ "Category", "Coala|Variables|Elevation" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaElevation, max), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaElevation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewProp_max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaElevation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaElevation",
		sizeof(FCoalaElevation),
		alignof(FCoalaElevation),
		Z_Construct_UScriptStruct_FCoalaElevation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaElevation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaElevation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaElevation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaElevation()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaElevation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaElevation.InnerSingleton, Z_Construct_UScriptStruct_FCoalaElevation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaElevation.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaElevationBlueprintLibrary::execGetCoalaElevationForCellIndex)
	{
		P_GET_STRUCT_REF(FCoalaElevation,Z_Param_Out_inElevation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_cellX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_cellY);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_topLeft);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_topRight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bottomLeft);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bottomRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaElevationBlueprintLibrary::GetCoalaElevationForCellIndex(Z_Param_Out_inElevation,Z_Param_Out_cellX,Z_Param_Out_cellY,Z_Param_Out_topLeft,Z_Param_Out_topRight,Z_Param_Out_bottomLeft,Z_Param_Out_bottomRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaElevationBlueprintLibrary::execGetCoalaElevationForCell)
	{
		P_GET_STRUCT_REF(FCoalaElevation,Z_Param_Out_inElevation);
		P_GET_STRUCT_REF(FCoalaCell,Z_Param_Out_cell);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_topLeft);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_topRight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bottomLeft);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bottomRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaElevationBlueprintLibrary::GetCoalaElevationForCell(Z_Param_Out_inElevation,Z_Param_Out_cell,Z_Param_Out_topLeft,Z_Param_Out_topRight,Z_Param_Out_bottomLeft,Z_Param_Out_bottomRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaElevationBlueprintLibrary::execGetCoalaElevation)
	{
		P_GET_STRUCT(FCoalaElevation,Z_Param_inElevation);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_elevationValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaElevationBlueprintLibrary::GetCoalaElevation(Z_Param_inElevation,Z_Param_x,Z_Param_y,Z_Param_Out_elevationValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaElevationBlueprintLibrary::execSetCoalaElevation)
	{
		P_GET_STRUCT(FCoalaElevation,Z_Param_inElevation);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_elevationValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaElevationBlueprintLibrary::SetCoalaElevation(Z_Param_inElevation,Z_Param_x,Z_Param_y,Z_Param_elevationValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaElevationBlueprintLibrary::execMakeCoalaElevation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaElevation*)Z_Param__Result=UCoalaElevationBlueprintLibrary::MakeCoalaElevation();
		P_NATIVE_END;
	}
	void UCoalaElevationBlueprintLibrary::StaticRegisterNativesUCoalaElevationBlueprintLibrary()
	{
		UClass* Class = UCoalaElevationBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCoalaElevation", &UCoalaElevationBlueprintLibrary::execGetCoalaElevation },
			{ "GetCoalaElevationForCell", &UCoalaElevationBlueprintLibrary::execGetCoalaElevationForCell },
			{ "GetCoalaElevationForCellIndex", &UCoalaElevationBlueprintLibrary::execGetCoalaElevationForCellIndex },
			{ "MakeCoalaElevation", &UCoalaElevationBlueprintLibrary::execMakeCoalaElevation },
			{ "SetCoalaElevation", &UCoalaElevationBlueprintLibrary::execSetCoalaElevation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics
	{
		struct CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms
		{
			FCoalaElevation inElevation;
			int32 x;
			int32 y;
			float elevationValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inElevation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_elevationValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_inElevation = { "inElevation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms, inElevation), Z_Construct_UScriptStruct_FCoalaElevation, METADATA_PARAMS(nullptr, 0) }; // 1058179108
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_elevationValue = { "elevationValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms, elevationValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_inElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::NewProp_elevationValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Elevation" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Get elevation value" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaElevationBlueprintLibrary, nullptr, "GetCoalaElevation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::CoalaElevationBlueprintLibrary_eventGetCoalaElevation_Parms), Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics
	{
		struct CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms
		{
			FCoalaElevation inElevation;
			FCoalaCell cell;
			float topLeft;
			float topRight;
			float bottomLeft;
			float bottomRight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inElevation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inElevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cell;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_topLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_topRight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottomLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottomRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_inElevation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_inElevation = { "inElevation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, inElevation), Z_Construct_UScriptStruct_FCoalaElevation, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_inElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_inElevation_MetaData)) }; // 1058179108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_cell = { "cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, cell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_cell_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_cell_MetaData)) }; // 3179001797
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_topLeft = { "topLeft", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, topLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_topRight = { "topRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, topRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_bottomLeft = { "bottomLeft", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, bottomLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_bottomRight = { "bottomRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms, bottomRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_inElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_topLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_topRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_bottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::NewProp_bottomRight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Elevation" },
		{ "Comment", "/** Get elevation data for cell corner's */" },
		{ "DisplayName", "Get elevation value for cell" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
		{ "ToolTip", "Get elevation data for cell corner's" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaElevationBlueprintLibrary, nullptr, "GetCoalaElevationForCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCell_Parms), Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics
	{
		struct CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms
		{
			FCoalaElevation inElevation;
			int32 cellX;
			int32 cellY;
			float topLeft;
			float topRight;
			float bottomLeft;
			float bottomRight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inElevation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inElevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cellX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellY_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_cellY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_topLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_topRight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottomLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bottomRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_inElevation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_inElevation = { "inElevation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, inElevation), Z_Construct_UScriptStruct_FCoalaElevation, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_inElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_inElevation_MetaData)) }; // 1058179108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellX = { "cellX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, cellX), METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellY = { "cellY", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, cellY), METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellY_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_topLeft = { "topLeft", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, topLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_topRight = { "topRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, topRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_bottomLeft = { "bottomLeft", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, bottomLeft), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_bottomRight = { "bottomRight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms, bottomRight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_inElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_cellY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_topLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_topRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_bottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::NewProp_bottomRight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Elevation" },
		{ "Comment", "/** Get elevation data for cell corner's */" },
		{ "DisplayName", "Get elevation value for cell index" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
		{ "ToolTip", "Get elevation data for cell corner's" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaElevationBlueprintLibrary, nullptr, "GetCoalaElevationForCellIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::CoalaElevationBlueprintLibrary_eventGetCoalaElevationForCellIndex_Parms), Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics
	{
		struct CoalaElevationBlueprintLibrary_eventMakeCoalaElevation_Parms
		{
			FCoalaElevation ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventMakeCoalaElevation_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaElevation, METADATA_PARAMS(nullptr, 0) }; // 1058179108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Elevation" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make elevation dataset" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaElevationBlueprintLibrary, nullptr, "MakeCoalaElevation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::CoalaElevationBlueprintLibrary_eventMakeCoalaElevation_Parms), Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics
	{
		struct CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms
		{
			FCoalaElevation inElevation;
			int32 x;
			int32 y;
			float elevationValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inElevation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_elevationValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_inElevation = { "inElevation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms, inElevation), Z_Construct_UScriptStruct_FCoalaElevation, METADATA_PARAMS(nullptr, 0) }; // 1058179108
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_elevationValue = { "elevationValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms, elevationValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_inElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::NewProp_elevationValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Elevation" },
		{ "Comment", "/** Set raw elevation data on X and Y.*/" },
		{ "DisplayName", "Set elevation value" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Set raw elevation data on X and Y." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaElevationBlueprintLibrary, nullptr, "SetCoalaElevation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::CoalaElevationBlueprintLibrary_eventSetCoalaElevation_Parms), Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaElevationBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaElevationBlueprintLibrary_NoRegister()
	{
		return UCoalaElevationBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevation, "GetCoalaElevation" }, // 1821356640
		{ &Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCell, "GetCoalaElevationForCell" }, // 394960231
		{ &Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_GetCoalaElevationForCellIndex, "GetCoalaElevationForCellIndex" }, // 1173454162
		{ &Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_MakeCoalaElevation, "MakeCoalaElevation" }, // 3782150219
		{ &Z_Construct_UFunction_UCoalaElevationBlueprintLibrary_SetCoalaElevation, "SetCoalaElevation" }, // 853381991
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaElevation.h" },
		{ "ModuleRelativePath", "Public/CoalaElevation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaElevationBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::ClassParams = {
		&UCoalaElevationBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaElevationBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaElevationBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaElevationBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaElevationBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaElevationBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaElevationBlueprintLibrary>()
	{
		return UCoalaElevationBlueprintLibrary::StaticClass();
	}
	UCoalaElevationBlueprintLibrary::UCoalaElevationBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaElevationBlueprintLibrary);
	UCoalaElevationBlueprintLibrary::~UCoalaElevationBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ScriptStructInfo[] = {
		{ FCoalaElevation::StaticStruct, Z_Construct_UScriptStruct_FCoalaElevation_Statics::NewStructOps, TEXT("CoalaElevation"), &Z_Registration_Info_UScriptStruct_CoalaElevation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaElevation), 1058179108U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaElevationBlueprintLibrary, UCoalaElevationBlueprintLibrary::StaticClass, TEXT("UCoalaElevationBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaElevationBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaElevationBlueprintLibrary), 1376724630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_3824405867(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaElevation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
