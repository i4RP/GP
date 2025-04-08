// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuilding.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaHole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaBuilding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuilding();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaHole();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaBuilding;
class UScriptStruct* FCoalaBuilding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaBuilding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaBuilding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaBuilding, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaBuilding"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaBuilding.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaBuilding>()
{
	return FCoalaBuilding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuilding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaBuilding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaBuilding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaBuilding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaBuilding",
		sizeof(FCoalaBuilding),
		alignof(FCoalaBuilding),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuilding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuilding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuilding()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaBuilding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaBuilding.InnerSingleton, Z_Construct_UScriptStruct_FCoalaBuilding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaBuilding.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaBuildingBlueprintLibrary::execgetBounds)
	{
		P_GET_STRUCT(FCoalaBuilding,Z_Param_inBuilding);
		P_GET_UBOOL(Z_Param_recalculate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBounds*)Z_Param__Result=UCoalaBuildingBlueprintLibrary::getBounds(Z_Param_inBuilding,Z_Param_recalculate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBuildingBlueprintLibrary::execgetCenter)
	{
		P_GET_STRUCT(FCoalaBuilding,Z_Param_inBuilding);
		P_GET_UBOOL(Z_Param_recalculate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=UCoalaBuildingBlueprintLibrary::getCenter(Z_Param_inBuilding,Z_Param_recalculate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBuildingBlueprintLibrary::execBreakCoalaBuilding)
	{
		P_GET_STRUCT(FCoalaBuilding,Z_Param_inBuilding);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_height);
		P_GET_TARRAY_REF(FCoalaGPSCoordinates,Z_Param_Out_area);
		P_GET_TARRAY_REF(FCoalaHole,Z_Param_Out_holes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBuildingBlueprintLibrary::BreakCoalaBuilding(Z_Param_inBuilding,Z_Param_Out_height,Z_Param_Out_area,Z_Param_Out_holes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBuildingBlueprintLibrary::execMakeCoalaBuilding)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_height);
		P_GET_TARRAY(FCoalaGPSCoordinates,Z_Param_area);
		P_GET_TARRAY(FCoalaHole,Z_Param_holes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBuilding*)Z_Param__Result=UCoalaBuildingBlueprintLibrary::MakeCoalaBuilding(Z_Param_height,Z_Param_area,Z_Param_holes);
		P_NATIVE_END;
	}
	void UCoalaBuildingBlueprintLibrary::StaticRegisterNativesUCoalaBuildingBlueprintLibrary()
	{
		UClass* Class = UCoalaBuildingBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaBuilding", &UCoalaBuildingBlueprintLibrary::execBreakCoalaBuilding },
			{ "getBounds", &UCoalaBuildingBlueprintLibrary::execgetBounds },
			{ "getCenter", &UCoalaBuildingBlueprintLibrary::execgetCenter },
			{ "MakeCoalaBuilding", &UCoalaBuildingBlueprintLibrary::execMakeCoalaBuilding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics
	{
		struct CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms
		{
			FCoalaBuilding inBuilding;
			uint8 height;
			TArray<FCoalaGPSCoordinates> area;
			TArray<FCoalaHole> holes;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBuilding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_height;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_inBuilding = { "inBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms, inBuilding), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms, height), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_holes_Inner = { "holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaHole, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_holes = { "holes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms, holes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_inBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_area_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::NewProp_holes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Building" },
		{ "Comment", "/** Breaks a coala water apart into area, holes. */" },
		{ "DisplayName", "Break Building" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala water apart into area, holes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingBlueprintLibrary, nullptr, "BreakCoalaBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::CoalaBuildingBlueprintLibrary_eventBreakCoalaBuilding_Parms), Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics
	{
		struct CoalaBuildingBlueprintLibrary_eventgetBounds_Parms
		{
			FCoalaBuilding inBuilding;
			bool recalculate;
			FCoalaBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBuilding;
		static void NewProp_recalculate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recalculate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_inBuilding = { "inBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventgetBounds_Parms, inBuilding), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
	void Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_recalculate_SetBit(void* Obj)
	{
		((CoalaBuildingBlueprintLibrary_eventgetBounds_Parms*)Obj)->recalculate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_recalculate = { "recalculate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingBlueprintLibrary_eventgetBounds_Parms), &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_recalculate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventgetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_inBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_recalculate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Building" },
		{ "Comment", "/** Get bounds from the water shape. */" },
		{ "DisplayName", "Get bounds from building" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
		{ "ToolTip", "Get bounds from the water shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingBlueprintLibrary, nullptr, "getBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::CoalaBuildingBlueprintLibrary_eventgetBounds_Parms), Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics
	{
		struct CoalaBuildingBlueprintLibrary_eventgetCenter_Parms
		{
			FCoalaBuilding inBuilding;
			bool recalculate;
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBuilding;
		static void NewProp_recalculate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recalculate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_inBuilding = { "inBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventgetCenter_Parms, inBuilding), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
	void Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_recalculate_SetBit(void* Obj)
	{
		((CoalaBuildingBlueprintLibrary_eventgetCenter_Parms*)Obj)->recalculate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_recalculate = { "recalculate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingBlueprintLibrary_eventgetCenter_Parms), &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_recalculate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventgetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_inBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_recalculate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Building" },
		{ "Comment", "/** Get the center from the water shape as gps position. */" },
		{ "DisplayName", "Get center from building" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
		{ "ToolTip", "Get the center from the water shape as gps position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingBlueprintLibrary, nullptr, "getCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::CoalaBuildingBlueprintLibrary_eventgetCenter_Parms), Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics
	{
		struct CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms
		{
			uint8 height;
			TArray<FCoalaGPSCoordinates> area;
			TArray<FCoalaHole> holes;
			FCoalaBuilding ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_height;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms, height), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_holes_Inner = { "holes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaHole, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_holes = { "holes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms, holes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3586217535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_area_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_holes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_holes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Building" },
		{ "Comment", "/** Makes a coala water {area, holes} */" },
		{ "DisplayName", "Make Building" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala water {area, holes}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingBlueprintLibrary, nullptr, "MakeCoalaBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::CoalaBuildingBlueprintLibrary_eventMakeCoalaBuilding_Parms), Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaBuildingBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_NoRegister()
	{
		return UCoalaBuildingBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_BreakCoalaBuilding, "BreakCoalaBuilding" }, // 2277778803
		{ &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getBounds, "getBounds" }, // 1807269078
		{ &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_getCenter, "getCenter" }, // 1279151800
		{ &Z_Construct_UFunction_UCoalaBuildingBlueprintLibrary_MakeCoalaBuilding, "MakeCoalaBuilding" }, // 858803891
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaBuilding.h" },
		{ "ModuleRelativePath", "Public/CoalaBuilding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaBuildingBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::ClassParams = {
		&UCoalaBuildingBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaBuildingBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaBuildingBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaBuildingBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaBuildingBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaBuildingBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaBuildingBlueprintLibrary>()
	{
		return UCoalaBuildingBlueprintLibrary::StaticClass();
	}
	UCoalaBuildingBlueprintLibrary::UCoalaBuildingBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaBuildingBlueprintLibrary);
	UCoalaBuildingBlueprintLibrary::~UCoalaBuildingBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ScriptStructInfo[] = {
		{ FCoalaBuilding::StaticStruct, Z_Construct_UScriptStruct_FCoalaBuilding_Statics::NewStructOps, TEXT("CoalaBuilding"), &Z_Registration_Info_UScriptStruct_CoalaBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaBuilding), 3918306864U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaBuildingBlueprintLibrary, UCoalaBuildingBlueprintLibrary::StaticClass, TEXT("UCoalaBuildingBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaBuildingBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaBuildingBlueprintLibrary), 617549496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_1276235461(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuilding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
