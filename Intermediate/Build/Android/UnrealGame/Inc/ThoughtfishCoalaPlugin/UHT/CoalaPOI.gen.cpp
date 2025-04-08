// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPOI.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPOI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPoiBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPoiBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaPOI();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCoalaPoisOnDone_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCoalaPoisOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCoalaPoisOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegatePlaceCoalaPoisOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegatePlaceCoalaPoisOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCoalaPoisOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCoalaPoisOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegatePlaceCoalaPoisOnDone.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCoalaPoiPlaced_Parms
		{
			AActor* poiActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_poiActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::NewProp_poiActor = { "poiActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCoalaPoiPlaced_Parms, poiActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::NewProp_poiActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegatOnCoalaPoiPlaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCoalaPoiPlaced_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegatOnCoalaPoiPlaced_DelegateWrapper(const FScriptDelegate& CoalaDelegatOnCoalaPoiPlaced, AActor* poiActor)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCoalaPoiPlaced_Parms
	{
		AActor* poiActor;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCoalaPoiPlaced_Parms Parms;
	Parms.poiActor=poiActor;
	CoalaDelegatOnCoalaPoiPlaced.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaPOI;
class UScriptStruct* FCoalaPOI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaPOI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaPOI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaPOI, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaPOI"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaPOI.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaPOI>()
{
	return FCoalaPOI::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaPOI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPOI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaPOI>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_pos_MetaData[] = {
		{ "Category", "Coala|POI" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaPOI, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_pos_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_label_MetaData[] = {
		{ "Category", "Coala|POI" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaPOI, label), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaPOI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewProp_label,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaPOI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaPOI",
		sizeof(FCoalaPOI),
		alignof(FCoalaPOI),
		Z_Construct_UScriptStruct_FCoalaPOI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPOI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPOI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPOI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaPOI()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaPOI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaPOI.InnerSingleton, Z_Construct_UScriptStruct_FCoalaPOI_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaPOI.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaPoiBlueprintLibrary::execPlaceCoalaPoisAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_TMAP_REF(FString,UClass*,Z_Param_Out_coalaPoiConfiguration);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPoiPlaced);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaPoiBlueprintLibrary::PlaceCoalaPoisAsync(Z_Param_area,Z_Param_Out_coalaPoiConfiguration,FCoalaDelegatOnCoalaPoiPlaced(Z_Param_Out_onPoiPlaced),FCoalaDelegatePlaceCoalaPoisOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPoiBlueprintLibrary::execBreakCoalaPoi)
	{
		P_GET_STRUCT(FCoalaPOI,Z_Param_inPoi);
		P_GET_STRUCT_REF(FCoalaGPSCoordinates,Z_Param_Out_pos);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaPoiBlueprintLibrary::BreakCoalaPoi(Z_Param_inPoi,Z_Param_Out_pos,Z_Param_Out_label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPoiBlueprintLibrary::execMakeCoalaPoi)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_pos);
		P_GET_PROPERTY(FStrProperty,Z_Param_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaPOI*)Z_Param__Result=UCoalaPoiBlueprintLibrary::MakeCoalaPoi(Z_Param_pos,Z_Param_label);
		P_NATIVE_END;
	}
	void UCoalaPoiBlueprintLibrary::StaticRegisterNativesUCoalaPoiBlueprintLibrary()
	{
		UClass* Class = UCoalaPoiBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaPoi", &UCoalaPoiBlueprintLibrary::execBreakCoalaPoi },
			{ "MakeCoalaPoi", &UCoalaPoiBlueprintLibrary::execMakeCoalaPoi },
			{ "PlaceCoalaPoisAsync", &UCoalaPoiBlueprintLibrary::execPlaceCoalaPoisAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics
	{
		struct CoalaPoiBlueprintLibrary_eventBreakCoalaPoi_Parms
		{
			FCoalaPOI inPoi;
			FCoalaGPSCoordinates pos;
			FString label;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inPoi;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_inPoi = { "inPoi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventBreakCoalaPoi_Parms, inPoi), Z_Construct_UScriptStruct_FCoalaPOI, METADATA_PARAMS(nullptr, 0) }; // 567411576
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventBreakCoalaPoi_Parms, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventBreakCoalaPoi_Parms, label), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_inPoi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::NewProp_label,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Point Of Interest" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break Point Of Interest" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPoiBlueprintLibrary, nullptr, "BreakCoalaPoi", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::CoalaPoiBlueprintLibrary_eventBreakCoalaPoi_Parms), Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics
	{
		struct CoalaPoiBlueprintLibrary_eventMakeCoalaPoi_Parms
		{
			FCoalaGPSCoordinates pos;
			FString label;
			FCoalaPOI ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventMakeCoalaPoi_Parms, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventMakeCoalaPoi_Parms, label), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventMakeCoalaPoi_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaPOI, METADATA_PARAMS(nullptr, 0) }; // 567411576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Point Of Interest" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make Point Of Interest" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPoiBlueprintLibrary, nullptr, "MakeCoalaPoi", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::CoalaPoiBlueprintLibrary_eventMakeCoalaPoi_Parms), Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics
	{
		struct CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms
		{
			UCoalaArea* area;
			TMap<FString,UClass*> coalaPoiConfiguration;
			FScriptDelegate onPoiPlaced;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FClassPropertyParams NewProp_coalaPoiConfiguration_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_coalaPoiConfiguration_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coalaPoiConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_coalaPoiConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPoiPlaced_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPoiPlaced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_ValueProp = { "coalaPoiConfiguration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_Key_KeyProp = { "coalaPoiConfiguration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration = { "coalaPoiConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms, coalaPoiConfiguration), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onPoiPlaced_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onPoiPlaced = { "onPoiPlaced", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms, onPoiPlaced), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCoalaPoiPlaced__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onPoiPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onPoiPlaced_MetaData)) }; // 3787966935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCoalaPoisOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onDone_MetaData)) }; // 1502517851
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_coalaPoiConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onPoiPlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDone,onPoiPlaced" },
		{ "Category", "Coala|Async|POI|Coala" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPoiBlueprintLibrary, nullptr, "PlaceCoalaPoisAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::CoalaPoiBlueprintLibrary_eventPlaceCoalaPoisAsync_Parms), Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaPoiBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaPoiBlueprintLibrary_NoRegister()
	{
		return UCoalaPoiBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_BreakCoalaPoi, "BreakCoalaPoi" }, // 2259353701
		{ &Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_MakeCoalaPoi, "MakeCoalaPoi" }, // 3277522308
		{ &Z_Construct_UFunction_UCoalaPoiBlueprintLibrary_PlaceCoalaPoisAsync, "PlaceCoalaPoisAsync" }, // 223004813
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaPOI.h" },
		{ "ModuleRelativePath", "Public/CoalaPOI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaPoiBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::ClassParams = {
		&UCoalaPoiBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaPoiBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaPoiBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaPoiBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaPoiBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaPoiBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaPoiBlueprintLibrary>()
	{
		return UCoalaPoiBlueprintLibrary::StaticClass();
	}
	UCoalaPoiBlueprintLibrary::UCoalaPoiBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaPoiBlueprintLibrary);
	UCoalaPoiBlueprintLibrary::~UCoalaPoiBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ScriptStructInfo[] = {
		{ FCoalaPOI::StaticStruct, Z_Construct_UScriptStruct_FCoalaPOI_Statics::NewStructOps, TEXT("CoalaPOI"), &Z_Registration_Info_UScriptStruct_CoalaPOI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaPOI), 567411576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaPoiBlueprintLibrary, UCoalaPoiBlueprintLibrary::StaticClass, TEXT("UCoalaPoiBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaPoiBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaPoiBlueprintLibrary), 2557836986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_4268272418(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPOI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
