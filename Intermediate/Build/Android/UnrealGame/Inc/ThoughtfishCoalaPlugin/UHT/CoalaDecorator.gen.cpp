// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaDecorator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaDecorator();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaDecorator_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateDecorationOnDone_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateDecorationOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateDecorationOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateDecorationOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateDecorationOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateDecorationOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateDecorationOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateDecorationOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegateDecorationOnDone.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateOnDecorationPlaced_Parms
		{
			AActor* decorationObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_decorationObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::NewProp_decorationObject = { "decorationObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateOnDecorationPlaced_Parms, decorationObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::NewProp_decorationObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateOnDecorationPlaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateOnDecorationPlaced_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateOnDecorationPlaced_DelegateWrapper(const FScriptDelegate& CoalaDelegateOnDecorationPlaced, AActor* decorationObject)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateOnDecorationPlaced_Parms
	{
		AActor* decorationObject;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateOnDecorationPlaced_Parms Parms;
	Parms.decorationObject=decorationObject;
	CoalaDelegateOnDecorationPlaced.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE;
	static UEnum* OPTIONS_AREA_DECORATION_IGNORE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("OPTIONS_AREA_DECORATION_IGNORE"));
		}
		return Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<OPTIONS_AREA_DECORATION_IGNORE>()
	{
		return OPTIONS_AREA_DECORATION_IGNORE_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enumerators[] = {
		{ "OPTIONS_AREA_DECORATION_IGNORE::NONE", (int64)OPTIONS_AREA_DECORATION_IGNORE::NONE },
		{ "OPTIONS_AREA_DECORATION_IGNORE::WATER", (int64)OPTIONS_AREA_DECORATION_IGNORE::WATER },
		{ "OPTIONS_AREA_DECORATION_IGNORE::STREETS", (int64)OPTIONS_AREA_DECORATION_IGNORE::STREETS },
		{ "OPTIONS_AREA_DECORATION_IGNORE::BUILDINGS", (int64)OPTIONS_AREA_DECORATION_IGNORE::BUILDINGS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_IGNORE" },
		{ "BlueprintType", "true" },
		{ "BUILDINGS.Name", "OPTIONS_AREA_DECORATION_IGNORE::BUILDINGS" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
		{ "NONE.Name", "OPTIONS_AREA_DECORATION_IGNORE::NONE" },
		{ "STREETS.Name", "OPTIONS_AREA_DECORATION_IGNORE::STREETS" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "WATER.Name", "OPTIONS_AREA_DECORATION_IGNORE::WATER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"OPTIONS_AREA_DECORATION_IGNORE",
		"OPTIONS_AREA_DECORATION_IGNORE",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_IGNORE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO;
	static UEnum* OPTIONS_AREA_DECORATION_USE_CONFIG_TO_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("OPTIONS_AREA_DECORATION_USE_CONFIG_TO"));
		}
		return Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<OPTIONS_AREA_DECORATION_USE_CONFIG_TO>()
	{
		return OPTIONS_AREA_DECORATION_USE_CONFIG_TO_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enumerators[] = {
		{ "OPTIONS_AREA_DECORATION_USE_CONFIG_TO::NONE", (int64)OPTIONS_AREA_DECORATION_USE_CONFIG_TO::NONE },
		{ "OPTIONS_AREA_DECORATION_USE_CONFIG_TO::CELLS", (int64)OPTIONS_AREA_DECORATION_USE_CONFIG_TO::CELLS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_USE_CONFIG_TO" },
		{ "BlueprintType", "true" },
		{ "CELLS.Name", "OPTIONS_AREA_DECORATION_USE_CONFIG_TO::CELLS" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
		{ "NONE.Name", "OPTIONS_AREA_DECORATION_USE_CONFIG_TO::NONE" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"OPTIONS_AREA_DECORATION_USE_CONFIG_TO",
		"OPTIONS_AREA_DECORATION_USE_CONFIG_TO",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration;
class UScriptStruct* FCoalaAreaDecorationConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaAreaDecorationConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaAreaDecorationConfiguration>()
{
	return FCoalaAreaDecorationConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_gametag_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gametag_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_gametag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_useAt_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useAt_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_useAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skipIf_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_skipIf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_decoration_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_decoration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_randomScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_randomScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_countRetriesIfPositionIsOccupied_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_countRetriesIfPositionIsOccupied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onlyIfGametagIsHighest_MetaData[];
#endif
		static void NewProp_onlyIfGametagIsHighest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyIfGametagIsHighest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnChanceInPercent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_spawnChanceInPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellSpaceToOther_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellSpaceToOther;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smothSpawning_MetaData[];
#endif
		static void NewProp_smothSpawning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_smothSpawning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaAreaDecorationConfiguration>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag_Inner = { "gametag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag = { "gametag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, gametag), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt_MetaData[] = {
		{ "Bitflags", "" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_USE_CONFIG_TO" },
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt = { "useAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, useAt), Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_AREA_DECORATION_USE_CONFIG_TO, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt_MetaData)) }; // 1920196429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_skipIf_MetaData[] = {
		{ "Bitflags", "" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_AREA_DECORATION_IGNORE" },
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_skipIf = { "skipIf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, skipIf), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_skipIf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_skipIf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_decoration_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_decoration = { "decoration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, decoration), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_decoration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_decoration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMax_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMax = { "randomScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, randomScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMin_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMin = { "randomScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, randomScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_countRetriesIfPositionIsOccupied_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_countRetriesIfPositionIsOccupied = { "countRetriesIfPositionIsOccupied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, countRetriesIfPositionIsOccupied), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_countRetriesIfPositionIsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_countRetriesIfPositionIsOccupied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest_SetBit(void* Obj)
	{
		((FCoalaAreaDecorationConfiguration*)Obj)->onlyIfGametagIsHighest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest = { "onlyIfGametagIsHighest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaAreaDecorationConfiguration), &Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_spawnChanceInPercent_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Valid value's are from 100 to 1 % */" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
		{ "ToolTip", "Valid value's are from 100 to 1 %" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_spawnChanceInPercent = { "spawnChanceInPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, spawnChanceInPercent), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_spawnChanceInPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_spawnChanceInPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_cellSpaceToOther_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_cellSpaceToOther = { "cellSpaceToOther", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaAreaDecorationConfiguration, cellSpaceToOther), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_cellSpaceToOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_cellSpaceToOther_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning_MetaData[] = {
		{ "Category", "Coala|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning_SetBit(void* Obj)
	{
		((FCoalaAreaDecorationConfiguration*)Obj)->smothSpawning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning = { "smothSpawning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaAreaDecorationConfiguration), &Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_gametag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_useAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_skipIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_decoration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_randomScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_countRetriesIfPositionIsOccupied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_onlyIfGametagIsHighest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_spawnChanceInPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_cellSpaceToOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewProp_smothSpawning,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaAreaDecorationConfiguration",
		sizeof(FCoalaAreaDecorationConfiguration),
		alignof(FCoalaAreaDecorationConfiguration),
		Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaDecorator::execDecorateArea)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_TARRAY(FCoalaAreaDecorationConfiguration,Z_Param_configs);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDecorationObjectPlaced);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaDecorator::DecorateArea(Z_Param_area,Z_Param_configs,FCoalaDelegateOnDecorationPlaced(Z_Param_Out_onDecorationObjectPlaced),FCoalaDelegateDecorationOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	void UCoalaDecorator::StaticRegisterNativesUCoalaDecorator()
	{
		UClass* Class = UCoalaDecorator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecorateArea", &UCoalaDecorator::execDecorateArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics
	{
		struct CoalaDecorator_eventDecorateArea_Parms
		{
			UCoalaArea* area;
			TArray<FCoalaAreaDecorationConfiguration> configs;
			FScriptDelegate onDecorationObjectPlaced;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_configs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_configs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDecorationObjectPlaced_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDecorationObjectPlaced;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDecorator_eventDecorateArea_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_configs_Inner = { "configs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration, METADATA_PARAMS(nullptr, 0) }; // 230965346
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_configs = { "configs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDecorator_eventDecorateArea_Parms, configs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 230965346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDecorationObjectPlaced_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDecorationObjectPlaced = { "onDecorationObjectPlaced", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDecorator_eventDecorateArea_Parms, onDecorationObjectPlaced), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateOnDecorationPlaced__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDecorationObjectPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDecorationObjectPlaced_MetaData)) }; // 2358148819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDecorator_eventDecorateArea_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateDecorationOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDone_MetaData)) }; // 1549737650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_configs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_configs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDecorationObjectPlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDecorationObjectPlaced,onDone" },
		{ "Category", "Coala|Async|Decoration" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaDecorator, nullptr, "DecorateArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::CoalaDecorator_eventDecorateArea_Parms), Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaDecorator_DecorateArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaDecorator_DecorateArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaDecorator);
	UClass* Z_Construct_UClass_UCoalaDecorator_NoRegister()
	{
		return UCoalaDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaDecorator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaDecorator_DecorateArea, "DecorateArea" }, // 3609071503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaDecorator.h" },
		{ "ModuleRelativePath", "Public/CoalaDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaDecorator_Statics::ClassParams = {
		&UCoalaDecorator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaDecorator()
	{
		if (!Z_Registration_Info_UClass_UCoalaDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaDecorator.OuterSingleton, Z_Construct_UClass_UCoalaDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaDecorator.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaDecorator>()
	{
		return UCoalaDecorator::StaticClass();
	}
	UCoalaDecorator::UCoalaDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaDecorator);
	UCoalaDecorator::~UCoalaDecorator() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::EnumInfo[] = {
		{ OPTIONS_AREA_DECORATION_IGNORE_StaticEnum, TEXT("OPTIONS_AREA_DECORATION_IGNORE"), &Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_IGNORE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1262573359U) },
		{ OPTIONS_AREA_DECORATION_USE_CONFIG_TO_StaticEnum, TEXT("OPTIONS_AREA_DECORATION_USE_CONFIG_TO"), &Z_Registration_Info_UEnum_OPTIONS_AREA_DECORATION_USE_CONFIG_TO, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1920196429U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ScriptStructInfo[] = {
		{ FCoalaAreaDecorationConfiguration::StaticStruct, Z_Construct_UScriptStruct_FCoalaAreaDecorationConfiguration_Statics::NewStructOps, TEXT("CoalaAreaDecorationConfiguration"), &Z_Registration_Info_UScriptStruct_CoalaAreaDecorationConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaAreaDecorationConfiguration), 230965346U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaDecorator, UCoalaDecorator::StaticClass, TEXT("UCoalaDecorator"), &Z_Registration_Info_UClass_UCoalaDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaDecorator), 4241785819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_3747847828(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDecorator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
