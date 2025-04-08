// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaProperties.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBounds.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaProperties() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaAreaProperties();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBounds();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaAreaProperties;
class UScriptStruct* FCoalaAreaProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaAreaProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaAreaProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaAreaProperties, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaAreaProperties"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaAreaProperties.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaAreaProperties>()
{
	return FCoalaAreaProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaAreaProperties>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaAreaProperties",
		sizeof(FCoalaAreaProperties),
		alignof(FCoalaAreaProperties),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaAreaProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaAreaProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaAreaProperties.InnerSingleton, Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaAreaProperties.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById;
	static UEnum* EOutputPins_GetProjectTagById_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("EOutputPins_GetProjectTagById"));
		}
		return Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_GetProjectTagById>()
	{
		return EOutputPins_GetProjectTagById_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enumerators[] = {
		{ "EOutputPins_GetProjectTagById::Invalide", (int64)EOutputPins_GetProjectTagById::Invalide },
		{ "EOutputPins_GetProjectTagById::Valide", (int64)EOutputPins_GetProjectTagById::Valide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Invalide.Name", "EOutputPins_GetProjectTagById::Invalide" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
		{ "Valide.Name", "EOutputPins_GetProjectTagById::Valide" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"EOutputPins_GetProjectTagById",
		"EOutputPins_GetProjectTagById",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById()
	{
		if (!Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaPropertiesBlueprintLibrary::execgetGametagNameById)
	{
		P_GET_STRUCT(FCoalaAreaProperties,Z_Param_inProperties);
		P_GET_PROPERTY(FInt64Property,Z_Param_gametag_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_projectTagName);
		P_GET_ENUM_REF(EOutputPins_GetProjectTagById,Z_Param_Out_execResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaPropertiesBlueprintLibrary::getGametagNameById(Z_Param_inProperties,Z_Param_gametag_id,Z_Param_Out_projectTagName,(EOutputPins_GetProjectTagById&)(Z_Param_Out_execResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPropertiesBlueprintLibrary::execBreakCoalaAreaProperties)
	{
		P_GET_STRUCT(FCoalaAreaProperties,Z_Param_inProperties);
		P_GET_STRUCT_REF(FCoalaTile,Z_Param_Out_tile);
		P_GET_STRUCT_REF(FCoalaBounds,Z_Param_Out_bounds);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_weather);
		P_GET_TMAP_REF(int64,FString,Z_Param_Out_gametag_map);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaPropertiesBlueprintLibrary::BreakCoalaAreaProperties(Z_Param_inProperties,Z_Param_Out_tile,Z_Param_Out_bounds,Z_Param_Out_weather,Z_Param_Out_gametag_map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPropertiesBlueprintLibrary::execMakeCoalaAreaProperties)
	{
		P_GET_STRUCT(FCoalaTile,Z_Param_tile);
		P_GET_STRUCT(FCoalaBounds,Z_Param_bounds);
		P_GET_PROPERTY(FStrProperty,Z_Param_weather);
		P_GET_TMAP(int64,FString,Z_Param_gametag_map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaAreaProperties*)Z_Param__Result=UCoalaPropertiesBlueprintLibrary::MakeCoalaAreaProperties(Z_Param_tile,Z_Param_bounds,Z_Param_weather,Z_Param_gametag_map);
		P_NATIVE_END;
	}
	void UCoalaPropertiesBlueprintLibrary::StaticRegisterNativesUCoalaPropertiesBlueprintLibrary()
	{
		UClass* Class = UCoalaPropertiesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaAreaProperties", &UCoalaPropertiesBlueprintLibrary::execBreakCoalaAreaProperties },
			{ "getGametagNameById", &UCoalaPropertiesBlueprintLibrary::execgetGametagNameById },
			{ "MakeCoalaAreaProperties", &UCoalaPropertiesBlueprintLibrary::execMakeCoalaAreaProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics
	{
		struct CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms
		{
			FCoalaAreaProperties inProperties;
			FCoalaTile tile;
			FCoalaBounds bounds;
			FString weather;
			TMap<int64,FString> gametag_map;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_bounds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_weather;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gametag_map_ValueProp;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gametag_map_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_gametag_map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_inProperties = { "inProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms, inProperties), Z_Construct_UScriptStruct_FCoalaAreaProperties, METADATA_PARAMS(nullptr, 0) }; // 197509453
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms, tile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_bounds = { "bounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms, bounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_weather = { "weather", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms, weather), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map_ValueProp = { "gametag_map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map_Key_KeyProp = { "gametag_map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map = { "gametag_map", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms, gametag_map), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_inProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_weather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::NewProp_gametag_map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Area|Properties" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break Area Properties" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary, nullptr, "BreakCoalaAreaProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::CoalaPropertiesBlueprintLibrary_eventBreakCoalaAreaProperties_Parms), Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics
	{
		struct CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms
		{
			FCoalaAreaProperties inProperties;
			int64 gametag_id;
			FString projectTagName;
			EOutputPins_GetProjectTagById execResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inProperties;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gametag_id;
		static const UECodeGen_Private::FStrPropertyParams NewProp_projectTagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_execResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_execResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_inProperties = { "inProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms, inProperties), Z_Construct_UScriptStruct_FCoalaAreaProperties, METADATA_PARAMS(nullptr, 0) }; // 197509453
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_gametag_id = { "gametag_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms, gametag_id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_projectTagName = { "projectTagName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms, projectTagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_execResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_execResult = { "execResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms, execResult), Z_Construct_UEnum_ThoughtfishCoalaPlugin_EOutputPins_GetProjectTagById, METADATA_PARAMS(nullptr, 0) }; // 4128664653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_inProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_gametag_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_projectTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_execResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::NewProp_execResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Area|Properties" },
		{ "Comment", "/** Get project tag name from coala area properties by id. */" },
		{ "DisplayName", "Get project tag by id" },
		{ "ExpandEnumAsExecs", "execResult" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
		{ "ToolTip", "Get project tag name from coala area properties by id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary, nullptr, "getGametagNameById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::CoalaPropertiesBlueprintLibrary_eventgetGametagNameById_Parms), Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics
	{
		struct CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms
		{
			FCoalaTile tile;
			FCoalaBounds bounds;
			FString weather;
			TMap<int64,FString> gametag_map;
			FCoalaAreaProperties ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_bounds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_weather;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gametag_map_ValueProp;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gametag_map_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_gametag_map;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms, tile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_bounds = { "bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms, bounds), Z_Construct_UScriptStruct_FCoalaBounds, METADATA_PARAMS(nullptr, 0) }; // 305814663
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_weather = { "weather", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms, weather), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map_ValueProp = { "gametag_map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map_Key_KeyProp = { "gametag_map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map = { "gametag_map", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms, gametag_map), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaAreaProperties, METADATA_PARAMS(nullptr, 0) }; // 197509453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_weather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_gametag_map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Area|Properties" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make Area Properties" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary, nullptr, "MakeCoalaAreaProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::CoalaPropertiesBlueprintLibrary_eventMakeCoalaAreaProperties_Parms), Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaPropertiesBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_NoRegister()
	{
		return UCoalaPropertiesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_BreakCoalaAreaProperties, "BreakCoalaAreaProperties" }, // 3315486322
		{ &Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_getGametagNameById, "getGametagNameById" }, // 3165054417
		{ &Z_Construct_UFunction_UCoalaPropertiesBlueprintLibrary_MakeCoalaAreaProperties, "MakeCoalaAreaProperties" }, // 1403894886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaProperties.h" },
		{ "ModuleRelativePath", "Public/CoalaProperties.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaPropertiesBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::ClassParams = {
		&UCoalaPropertiesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaPropertiesBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaPropertiesBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaPropertiesBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaPropertiesBlueprintLibrary>()
	{
		return UCoalaPropertiesBlueprintLibrary::StaticClass();
	}
	UCoalaPropertiesBlueprintLibrary::UCoalaPropertiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaPropertiesBlueprintLibrary);
	UCoalaPropertiesBlueprintLibrary::~UCoalaPropertiesBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::EnumInfo[] = {
		{ EOutputPins_GetProjectTagById_StaticEnum, TEXT("EOutputPins_GetProjectTagById"), &Z_Registration_Info_UEnum_EOutputPins_GetProjectTagById, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4128664653U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ScriptStructInfo[] = {
		{ FCoalaAreaProperties::StaticStruct, Z_Construct_UScriptStruct_FCoalaAreaProperties_Statics::NewStructOps, TEXT("CoalaAreaProperties"), &Z_Registration_Info_UScriptStruct_CoalaAreaProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaAreaProperties), 197509453U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaPropertiesBlueprintLibrary, UCoalaPropertiesBlueprintLibrary::StaticClass, TEXT("UCoalaPropertiesBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaPropertiesBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaPropertiesBlueprintLibrary), 2889545473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_2853919641(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
