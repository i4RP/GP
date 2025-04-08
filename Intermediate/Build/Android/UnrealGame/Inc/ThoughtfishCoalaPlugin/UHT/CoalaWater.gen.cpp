// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaWater.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaHole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaWater() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaHole();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaWater();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaWater;
class UScriptStruct* FCoalaWater::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaWater.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaWater.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaWater, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaWater"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaWater.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaWater>()
{
	return FCoalaWater::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaWater_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWater_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaWater_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaWater>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaWater_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaWater",
		sizeof(FCoalaWater),
		alignof(FCoalaWater),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWater_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWater_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaWater()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaWater.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaWater.InnerSingleton, Z_Construct_UScriptStruct_FCoalaWater_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaWater.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaWaterBlueprintLibrary::execgetBounds)
	{
		P_GET_STRUCT(FCoalaWater,Z_Param_inWater);
		P_GET_UBOOL(Z_Param_recalculate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBounds*)Z_Param__Result=UCoalaWaterBlueprintLibrary::getBounds(Z_Param_inWater,Z_Param_recalculate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWaterBlueprintLibrary::execgetCenter)
	{
		P_GET_STRUCT(FCoalaWater,Z_Param_inWater);
		P_GET_UBOOL(Z_Param_recalculate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=UCoalaWaterBlueprintLibrary::getCenter(Z_Param_inWater,Z_Param_recalculate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWaterBlueprintLibrary::execBreakCoalaWater)
	{
		P_GET_STRUCT(FCoalaWater,Z_Param_inWater);
		P_GET_TARRAY_REF(FCoalaGPSCoordinates,Z_Param_Out_area);
		P_GET_TARRAY_REF(FCoalaHole,Z_Param_Out_holes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWaterBlueprintLibrary::BreakCoalaWater(Z_Param_inWater,Z_Param_Out_area,Z_Param_Out_holes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWaterBlueprintLibrary::execMakeCoalaWater)
	{
		P_GET_TARRAY(FCoalaGPSCoordinates,Z_Param_area);
		P_GET_TARRAY(FCoalaHole,Z_Param_holes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaWater*)Z_Param__Result=UCoalaWaterBlueprintLibrary::MakeCoalaWater(Z_Param_area,Z_Param_holes);
		P_NATIVE_END;
	}
	void UCoalaWaterBlueprintLibrary::StaticRegisterNativesUCoalaWaterBlueprintLibrary()
	{
		UClass* Class = UCoalaWaterBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaWater", &UCoalaWaterBlueprintLibrary::execBreakCoalaWater },
			{ "getBounds", &UCoalaWaterBlueprintLibrary::execgetBounds },
			{ "getCenter", &UCoalaWaterBlueprintLibrary::execgetCenter },
			{ "MakeCoalaWater", &UCoalaWaterBlueprintLibrary::execMakeCoalaWater },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics
	{
		struct CoalaWaterBlueprintLibrary_eventBreakCoalaWater_Parms
		{
			FCoalaWater inWater;
			TArray<FCoalaGPSCoordinates> area;
			TArray<FCoalaHole> holes;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inWater;
		static const UECodeGen_Private::FStructPropertyParams NewProp_area_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_holes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_holes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_inWater = { "inWater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventBreakCoalaWater_Parms, inWater), Z_Construct_UScriptStruct_FCoalaWater, METADATA_PARAMS(nullptr, 0) }; // 2250552008
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventBreakCoalaWater_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_holes_Inner = { "holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaHole, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_holes = { "holes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventBreakCoalaWater_Parms, holes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_inWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_area_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::NewProp_holes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Water" },
		{ "Comment", "/** Breaks a coala water apart into area, holes. */" },
		{ "DisplayName", "Break Water" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala water apart into area, holes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterBlueprintLibrary, nullptr, "BreakCoalaWater", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::CoalaWaterBlueprintLibrary_eventBreakCoalaWater_Parms), Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics
	{
		struct CoalaWaterBlueprintLibrary_eventgetBounds_Parms
		{
			FCoalaWater inWater;
			bool recalculate;
			FCoalaBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inWater;
		static void NewProp_recalculate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recalculate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_inWater = { "inWater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventgetBounds_Parms, inWater), Z_Construct_UScriptStruct_FCoalaWater, METADATA_PARAMS(nullptr, 0) }; // 2250552008
	void Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_recalculate_SetBit(void* Obj)
	{
		((CoalaWaterBlueprintLibrary_eventgetBounds_Parms*)Obj)->recalculate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_recalculate = { "recalculate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaWaterBlueprintLibrary_eventgetBounds_Parms), &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_recalculate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventgetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_inWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_recalculate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Water" },
		{ "Comment", "/** Get bounds from the water shape. */" },
		{ "DisplayName", "Get bounds from water" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
		{ "ToolTip", "Get bounds from the water shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterBlueprintLibrary, nullptr, "getBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::CoalaWaterBlueprintLibrary_eventgetBounds_Parms), Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics
	{
		struct CoalaWaterBlueprintLibrary_eventgetCenter_Parms
		{
			FCoalaWater inWater;
			bool recalculate;
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inWater;
		static void NewProp_recalculate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recalculate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_inWater = { "inWater", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventgetCenter_Parms, inWater), Z_Construct_UScriptStruct_FCoalaWater, METADATA_PARAMS(nullptr, 0) }; // 2250552008
	void Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_recalculate_SetBit(void* Obj)
	{
		((CoalaWaterBlueprintLibrary_eventgetCenter_Parms*)Obj)->recalculate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_recalculate = { "recalculate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaWaterBlueprintLibrary_eventgetCenter_Parms), &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_recalculate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventgetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_inWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_recalculate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Water" },
		{ "Comment", "/** Get the center from the water shape as gps position. */" },
		{ "DisplayName", "Get center from water" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
		{ "ToolTip", "Get the center from the water shape as gps position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterBlueprintLibrary, nullptr, "getCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::CoalaWaterBlueprintLibrary_eventgetCenter_Parms), Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics
	{
		struct CoalaWaterBlueprintLibrary_eventMakeCoalaWater_Parms
		{
			TArray<FCoalaGPSCoordinates> area;
			TArray<FCoalaHole> holes;
			FCoalaWater ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_area_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_holes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_holes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventMakeCoalaWater_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_holes_Inner = { "holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaHole, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_holes = { "holes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventMakeCoalaWater_Parms, holes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterBlueprintLibrary_eventMakeCoalaWater_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaWater, METADATA_PARAMS(nullptr, 0) }; // 2250552008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_area_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_holes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Water" },
		{ "Comment", "/** Makes a coala water {area, holes} */" },
		{ "DisplayName", "Make Water" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala water {area, holes}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterBlueprintLibrary, nullptr, "MakeCoalaWater", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::CoalaWaterBlueprintLibrary_eventMakeCoalaWater_Parms), Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaWaterBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaWaterBlueprintLibrary_NoRegister()
	{
		return UCoalaWaterBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_BreakCoalaWater, "BreakCoalaWater" }, // 1998389716
		{ &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getBounds, "getBounds" }, // 4144513686
		{ &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_getCenter, "getCenter" }, // 4153400269
		{ &Z_Construct_UFunction_UCoalaWaterBlueprintLibrary_MakeCoalaWater, "MakeCoalaWater" }, // 2818972156
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaWater.h" },
		{ "ModuleRelativePath", "Public/CoalaWater.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaWaterBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::ClassParams = {
		&UCoalaWaterBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaWaterBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaWaterBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaWaterBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaWaterBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaWaterBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaWaterBlueprintLibrary>()
	{
		return UCoalaWaterBlueprintLibrary::StaticClass();
	}
	UCoalaWaterBlueprintLibrary::UCoalaWaterBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaWaterBlueprintLibrary);
	UCoalaWaterBlueprintLibrary::~UCoalaWaterBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ScriptStructInfo[] = {
		{ FCoalaWater::StaticStruct, Z_Construct_UScriptStruct_FCoalaWater_Statics::NewStructOps, TEXT("CoalaWater"), &Z_Registration_Info_UScriptStruct_CoalaWater, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaWater), 2250552008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaWaterBlueprintLibrary, UCoalaWaterBlueprintLibrary::StaticClass, TEXT("UCoalaWaterBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaWaterBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaWaterBlueprintLibrary), 1033703995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_4225627371(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWater_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
