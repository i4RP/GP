// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCustomPOI.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCustomPOI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaCustomPOIActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCustomPOI();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaPOI();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCustomPoisOnDone_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCustomPoisOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCustomPoisOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegatePlaceCustomPoisOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegatePlaceCustomPoisOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCustomPoisOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatePlaceCustomPoisOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegatePlaceCustomPoisOnDone.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCustomPoiPlaced_Parms
		{
			ACoalaCustomPOIActor* customPoiActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customPoiActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::NewProp_customPoiActor = { "customPoiActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCustomPoiPlaced_Parms, customPoiActor), Z_Construct_UClass_ACoalaCustomPOIActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::NewProp_customPoiActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegatOnCustomPoiPlaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCustomPoiPlaced_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegatOnCustomPoiPlaced_DelegateWrapper(const FScriptDelegate& CoalaDelegatOnCustomPoiPlaced, ACoalaCustomPOIActor* customPoiActor)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCustomPoiPlaced_Parms
	{
		ACoalaCustomPOIActor* customPoiActor;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegatOnCustomPoiPlaced_Parms Parms;
	Parms.customPoiActor=customPoiActor;
	CoalaDelegatOnCustomPoiPlaced.ProcessDelegate<UObject>(&Parms);
}

static_assert(std::is_polymorphic<FCoalaCustomPOI>() == std::is_polymorphic<FCoalaPOI>(), "USTRUCT FCoalaCustomPOI cannot be polymorphic unless super FCoalaPOI is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaCustomPOI;
class UScriptStruct* FCoalaCustomPOI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaCustomPOI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaCustomPOI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaCustomPOI, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaCustomPOI"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaCustomPOI.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaCustomPOI>()
{
	return FCoalaCustomPOI::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaCustomPOI>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "Coala|CustomPOI" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCustomPOI, payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewProp_payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewProp_payload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewProp_payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		Z_Construct_UScriptStruct_FCoalaPOI,
		&NewStructOps,
		"CoalaCustomPOI",
		sizeof(FCoalaCustomPOI),
		alignof(FCoalaCustomPOI),
		Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaCustomPOI()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaCustomPOI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaCustomPOI.InnerSingleton, Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaCustomPOI.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaCustomPoiBlueprintLibrary::execPlaceCustomPoisAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_TMAP_REF(FString,UClass*,Z_Param_Out_customPoiConfiguration);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onCustomPoiPlaced);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCustomPoiBlueprintLibrary::PlaceCustomPoisAsync(Z_Param_area,Z_Param_Out_customPoiConfiguration,FCoalaDelegatOnCustomPoiPlaced(Z_Param_Out_onCustomPoiPlaced),FCoalaDelegatePlaceCustomPoisOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCustomPoiBlueprintLibrary::execBreakCoalaCustomPOI)
	{
		P_GET_STRUCT(FCoalaCustomPOI,Z_Param_inCustomPOI);
		P_GET_STRUCT_REF(FCoalaGPSCoordinates,Z_Param_Out_pos);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_label);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCustomPoiBlueprintLibrary::BreakCoalaCustomPOI(Z_Param_inCustomPOI,Z_Param_Out_pos,Z_Param_Out_label,Z_Param_Out_payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCustomPoiBlueprintLibrary::execMakeCoalaCustomPOI)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_pos);
		P_GET_PROPERTY(FStrProperty,Z_Param_label);
		P_GET_PROPERTY(FStrProperty,Z_Param_payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaCustomPOI*)Z_Param__Result=UCoalaCustomPoiBlueprintLibrary::MakeCoalaCustomPOI(Z_Param_pos,Z_Param_label,Z_Param_payload);
		P_NATIVE_END;
	}
	void UCoalaCustomPoiBlueprintLibrary::StaticRegisterNativesUCoalaCustomPoiBlueprintLibrary()
	{
		UClass* Class = UCoalaCustomPoiBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaCustomPOI", &UCoalaCustomPoiBlueprintLibrary::execBreakCoalaCustomPOI },
			{ "MakeCoalaCustomPOI", &UCoalaCustomPoiBlueprintLibrary::execMakeCoalaCustomPOI },
			{ "PlaceCustomPoisAsync", &UCoalaCustomPoiBlueprintLibrary::execPlaceCustomPoisAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics
	{
		struct CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms
		{
			FCoalaCustomPOI inCustomPOI;
			FCoalaGPSCoordinates pos;
			FString label;
			FString payload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inCustomPOI;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_inCustomPOI = { "inCustomPOI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms, inCustomPOI), Z_Construct_UScriptStruct_FCoalaCustomPOI, METADATA_PARAMS(nullptr, 0) }; // 3241917959
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms, label), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms, payload), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_inCustomPOI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::NewProp_payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Custom POI" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break Custom POI" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary, nullptr, "BreakCoalaCustomPOI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::CoalaCustomPoiBlueprintLibrary_eventBreakCoalaCustomPOI_Parms), Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics
	{
		struct CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms
		{
			FCoalaGPSCoordinates pos;
			FString label;
			FString payload;
			FCoalaCustomPOI ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms, pos), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms, label), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms, payload), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaCustomPOI, METADATA_PARAMS(nullptr, 0) }; // 3241917959
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Custom POI" },
		{ "Comment", "/** Makes a coala custom poi {gps pos, label, payload} */" },
		{ "DisplayName", "Make Custom POI" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala custom poi {gps pos, label, payload}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary, nullptr, "MakeCoalaCustomPOI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::CoalaCustomPoiBlueprintLibrary_eventMakeCoalaCustomPOI_Parms), Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics
	{
		struct CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms
		{
			UCoalaArea* area;
			TMap<FString,UClass*> customPoiConfiguration;
			FScriptDelegate onCustomPoiPlaced;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FClassPropertyParams NewProp_customPoiConfiguration_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_customPoiConfiguration_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customPoiConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_customPoiConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onCustomPoiPlaced_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onCustomPoiPlaced;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_ValueProp = { "customPoiConfiguration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_Key_KeyProp = { "customPoiConfiguration_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration = { "customPoiConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms, customPoiConfiguration), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onCustomPoiPlaced_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onCustomPoiPlaced = { "onCustomPoiPlaced", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms, onCustomPoiPlaced), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatOnCustomPoiPlaced__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onCustomPoiPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onCustomPoiPlaced_MetaData)) }; // 2623000944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegatePlaceCustomPoisOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onDone_MetaData)) }; // 1354823235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_customPoiConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onCustomPoiPlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDone,onCustomPoiPlaced" },
		{ "Category", "Coala|Async|POI|Custom" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary, nullptr, "PlaceCustomPoisAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::CoalaCustomPoiBlueprintLibrary_eventPlaceCustomPoisAsync_Parms), Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaCustomPoiBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_NoRegister()
	{
		return UCoalaCustomPoiBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_BreakCoalaCustomPOI, "BreakCoalaCustomPOI" }, // 3952039531
		{ &Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_MakeCoalaCustomPOI, "MakeCoalaCustomPOI" }, // 3184682163
		{ &Z_Construct_UFunction_UCoalaCustomPoiBlueprintLibrary_PlaceCustomPoisAsync, "PlaceCustomPoisAsync" }, // 1495613116
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaCustomPOI.h" },
		{ "ModuleRelativePath", "Public/CoalaCustomPOI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaCustomPoiBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::ClassParams = {
		&UCoalaCustomPoiBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaCustomPoiBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaCustomPoiBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaCustomPoiBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaCustomPoiBlueprintLibrary>()
	{
		return UCoalaCustomPoiBlueprintLibrary::StaticClass();
	}
	UCoalaCustomPoiBlueprintLibrary::UCoalaCustomPoiBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaCustomPoiBlueprintLibrary);
	UCoalaCustomPoiBlueprintLibrary::~UCoalaCustomPoiBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ScriptStructInfo[] = {
		{ FCoalaCustomPOI::StaticStruct, Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics::NewStructOps, TEXT("CoalaCustomPOI"), &Z_Registration_Info_UScriptStruct_CoalaCustomPOI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaCustomPOI), 3241917959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary, UCoalaCustomPoiBlueprintLibrary::StaticClass, TEXT("UCoalaCustomPoiBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaCustomPoiBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaCustomPoiBlueprintLibrary), 1543964393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_3930098260(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
