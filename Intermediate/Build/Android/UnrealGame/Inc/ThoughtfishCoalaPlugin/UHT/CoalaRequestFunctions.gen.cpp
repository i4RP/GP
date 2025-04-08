// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaRequestFunctions.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaRequestFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaRequestFunctions();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaRequestFunctions_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult;
	static UEnum* EOutputPins_CoalaRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("EOutputPins_CoalaRequestResult"));
		}
		return Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_CoalaRequestResult>()
	{
		return EOutputPins_CoalaRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enumerators[] = {
		{ "EOutputPins_CoalaRequestResult::OnSuccess", (int64)EOutputPins_CoalaRequestResult::OnSuccess },
		{ "EOutputPins_CoalaRequestResult::OnError", (int64)EOutputPins_CoalaRequestResult::OnError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
		{ "OnError.Name", "EOutputPins_CoalaRequestResult::OnError" },
		{ "OnSuccess.Name", "EOutputPins_CoalaRequestResult::OnSuccess" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"EOutputPins_CoalaRequestResult",
		"EOutputPins_CoalaRequestResult",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaRequestFunctions::execMakeCoalaRequestTransportation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_perimeter);
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_coordinates);
		P_GET_ENUM(TransportationType,Z_Param_transportationType);
		P_GET_ENUM_REF(EOutputPins_CoalaRequestResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBluePrintHttpGetRequestTransportation**)Z_Param__Result=UCoalaRequestFunctions::MakeCoalaRequestTransportation(Z_Param_perimeter,Z_Param_coordinates,TransportationType(Z_Param_transportationType),(EOutputPins_CoalaRequestResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaRequestFunctions::execMakeCoalaGetCustomPOISuggestionsRequest)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_GET_ENUM_REF(EOutputPins_CoalaRequestResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBluePrintHttpGetRequest**)Z_Param__Result=UCoalaRequestFunctions::MakeCoalaGetCustomPOISuggestionsRequest(Z_Param_lon,Z_Param_lat,(EOutputPins_CoalaRequestResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaRequestFunctions::execMakeCoalaSetCustomPOIRequest)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lat);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_payload);
		P_GET_ENUM_REF(EOutputPins_CoalaRequestResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBluePrintHttpGetRequest**)Z_Param__Result=UCoalaRequestFunctions::MakeCoalaSetCustomPOIRequest(Z_Param_lon,Z_Param_lat,Z_Param_name,Z_Param_payload,(EOutputPins_CoalaRequestResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaRequestFunctions::execMakeCoalaRequest)
	{
		P_GET_STRUCT(FCoalaTile,Z_Param_tile);
		P_GET_PROPERTY(FIntProperty,Z_Param_context);
		P_GET_ENUM_REF(EOutputPins_CoalaRequestResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBluePrintHttpGetRequest**)Z_Param__Result=UCoalaRequestFunctions::MakeCoalaRequest(Z_Param_tile,Z_Param_context,(EOutputPins_CoalaRequestResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	void UCoalaRequestFunctions::StaticRegisterNativesUCoalaRequestFunctions()
	{
		UClass* Class = UCoalaRequestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeCoalaGetCustomPOISuggestionsRequest", &UCoalaRequestFunctions::execMakeCoalaGetCustomPOISuggestionsRequest },
			{ "MakeCoalaRequest", &UCoalaRequestFunctions::execMakeCoalaRequest },
			{ "MakeCoalaRequestTransportation", &UCoalaRequestFunctions::execMakeCoalaRequestTransportation },
			{ "MakeCoalaSetCustomPOIRequest", &UCoalaRequestFunctions::execMakeCoalaSetCustomPOIRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics
	{
		struct CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms
		{
			float lon;
			float lat;
			EOutputPins_CoalaRequestResult Branches;
			UBluePrintHttpGetRequest* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms, Branches), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult, METADATA_PARAMS(nullptr, 0) }; // 3843459602
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms, ReturnValue), Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Requests" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaRequestFunctions, nullptr, "MakeCoalaGetCustomPOISuggestionsRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::CoalaRequestFunctions_eventMakeCoalaGetCustomPOISuggestionsRequest_Parms), Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics
	{
		struct CoalaRequestFunctions_eventMakeCoalaRequest_Parms
		{
			FCoalaTile tile;
			int32 context;
			EOutputPins_CoalaRequestResult Branches;
			UBluePrintHttpGetRequest* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequest_Parms, tile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_context_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequest_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_context_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequest_Parms, Branches), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult, METADATA_PARAMS(nullptr, 0) }; // 3843459602
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequest_Parms, ReturnValue), Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Requests" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaRequestFunctions, nullptr, "MakeCoalaRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::CoalaRequestFunctions_eventMakeCoalaRequest_Parms), Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics
	{
		struct CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms
		{
			int32 perimeter;
			FCoalaGPSCoordinates coordinates;
			TransportationType transportationType;
			EOutputPins_CoalaRequestResult Branches;
			UBluePrintHttpGetRequestTransportation* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_perimeter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_coordinates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_transportationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_transportationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_perimeter = { "perimeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms, perimeter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_coordinates = { "coordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms, coordinates), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_transportationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_transportationType = { "transportationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms, transportationType), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(nullptr, 0) }; // 609406224
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms, Branches), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult, METADATA_PARAMS(nullptr, 0) }; // 3843459602
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms, ReturnValue), Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_perimeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_transportationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_transportationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaRequestFunctions, nullptr, "MakeCoalaRequestTransportation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::CoalaRequestFunctions_eventMakeCoalaRequestTransportation_Parms), Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics
	{
		struct CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms
		{
			float lon;
			float lat;
			FString name;
			FString payload;
			EOutputPins_CoalaRequestResult Branches;
			UBluePrintHttpGetRequest* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, payload), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, Branches), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_CoalaRequestResult, METADATA_PARAMS(nullptr, 0) }; // 3843459602
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms, ReturnValue), Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Requests" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaRequestFunctions, nullptr, "MakeCoalaSetCustomPOIRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::CoalaRequestFunctions_eventMakeCoalaSetCustomPOIRequest_Parms), Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaRequestFunctions);
	UClass* Z_Construct_UClass_UCoalaRequestFunctions_NoRegister()
	{
		return UCoalaRequestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaRequestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaRequestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaRequestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaGetCustomPOISuggestionsRequest, "MakeCoalaGetCustomPOISuggestionsRequest" }, // 4265568205
		{ &Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequest, "MakeCoalaRequest" }, // 3484664673
		{ &Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaRequestTransportation, "MakeCoalaRequestTransportation" }, // 4234720155
		{ &Z_Construct_UFunction_UCoalaRequestFunctions_MakeCoalaSetCustomPOIRequest, "MakeCoalaSetCustomPOIRequest" }, // 3099652115
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaRequestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaRequestFunctions.h" },
		{ "ModuleRelativePath", "Public/CoalaRequestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaRequestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaRequestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaRequestFunctions_Statics::ClassParams = {
		&UCoalaRequestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaRequestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaRequestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaRequestFunctions()
	{
		if (!Z_Registration_Info_UClass_UCoalaRequestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaRequestFunctions.OuterSingleton, Z_Construct_UClass_UCoalaRequestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaRequestFunctions.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaRequestFunctions>()
	{
		return UCoalaRequestFunctions::StaticClass();
	}
	UCoalaRequestFunctions::UCoalaRequestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaRequestFunctions);
	UCoalaRequestFunctions::~UCoalaRequestFunctions() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::EnumInfo[] = {
		{ EOutputPins_CoalaRequestResult_StaticEnum, TEXT("EOutputPins_CoalaRequestResult"), &Z_Registration_Info_UEnum_EOutputPins_CoalaRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3843459602U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaRequestFunctions, UCoalaRequestFunctions::StaticClass, TEXT("UCoalaRequestFunctions"), &Z_Registration_Info_UClass_UCoalaRequestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaRequestFunctions), 588848767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_691079252(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
