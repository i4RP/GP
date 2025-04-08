// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCrimeRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCrimeRenderConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCrimeTypeWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrimeTypeWrapper;
class UScriptStruct* FCrimeTypeWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrimeTypeWrapper, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CrimeTypeWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCrimeTypeWrapper>()
{
	return FCrimeTypeWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_crimeTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_crimeTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_crimeTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimePinBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crimePinBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shouldBeRendered_MetaData[];
#endif
		static void NewProp_shouldBeRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldBeRendered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shouldBeHighlighted_MetaData[];
#endif
		static void NewProp_shouldBeHighlighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldBeHighlighted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrimeTypeWrapper>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_Inner = { "crimeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UCrimeType, METADATA_PARAMS(nullptr, 0) }; // 1388485597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_MetaData[] = {
		{ "Category", "Coala crime type wrapper" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes = { "crimeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCrimeTypeWrapper, crimeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_MetaData)) }; // 1388485597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimePinBlueprint_MetaData[] = {
		{ "Category", "Coala crime type wrapper" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimePinBlueprint = { "crimePinBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCrimeTypeWrapper, crimePinBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimePinBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimePinBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered_MetaData[] = {
		{ "Category", "Coala crime type wrapper" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered_SetBit(void* Obj)
	{
		((FCrimeTypeWrapper*)Obj)->shouldBeRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered = { "shouldBeRendered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCrimeTypeWrapper), &Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted_MetaData[] = {
		{ "Category", "Coala crime type wrapper" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted_SetBit(void* Obj)
	{
		((FCrimeTypeWrapper*)Obj)->shouldBeHighlighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted = { "shouldBeHighlighted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCrimeTypeWrapper), &Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimeTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_crimePinBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewProp_shouldBeHighlighted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CrimeTypeWrapper",
		sizeof(FCrimeTypeWrapper),
		alignof(FCrimeTypeWrapper),
		Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrimeTypeWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.InnerSingleton, Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrimeTypeWrapper.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UHeatMapType;
	static UEnum* UHeatMapType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UHeatMapType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UHeatMapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("UHeatMapType"));
		}
		return Z_Registration_Info_UEnum_UHeatMapType.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<UHeatMapType>()
	{
		return UHeatMapType_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enumerators[] = {
		{ "UHeatMapType::Pillar", (int64)UHeatMapType::Pillar },
		{ "UHeatMapType::Flat", (int64)UHeatMapType::Flat },
		{ "UHeatMapType::None", (int64)UHeatMapType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flat.Name", "UHeatMapType::Flat" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "None.Name", "UHeatMapType::None" },
		{ "Pillar.Name", "UHeatMapType::Pillar" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"UHeatMapType",
		"UHeatMapType",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType()
	{
		if (!Z_Registration_Info_UEnum_UHeatMapType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UHeatMapType.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UHeatMapType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig;
class UScriptStruct* FCoalaCrimeRenderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaCrimeRenderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaCrimeRenderConfig>()
{
	return FCoalaCrimeRenderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceRenderAllCrimes_MetaData[];
#endif
		static void NewProp_forceRenderAllCrimes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceRenderAllCrimes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_crimeTypesToDisplay_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crimeTypesToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_crimeTypesToDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_highlighterBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_highlighterBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultCrimePinBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_defaultCrimePinBlueprint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_heatMapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heatMapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_heatMapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_influence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_influence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weightFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weightFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weightThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weightThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pillarScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pillarScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pillarTokenBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_pillarTokenBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flatTokenBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_flatTokenBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaCrimeRenderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//Renders all crimes regardless of their unique configuration in CrimeTypesToDisplay.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "Renders all crimes regardless of their unique configuration in CrimeTypesToDisplay." },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes_SetBit(void* Obj)
	{
		((FCoalaCrimeRenderConfig*)Obj)->forceRenderAllCrimes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes = { "forceRenderAllCrimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaCrimeRenderConfig), &Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay_Inner = { "crimeTypesToDisplay", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCrimeTypeWrapper, METADATA_PARAMS(nullptr, 0) }; // 3889901744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//Configure your crime types here. Select a combination of crime types like e. g. 'THEFT' and 'BICYCLE' to configure all instances of bicycle theft. 'Should be Highlighted' will use the HighlighterPrefab when checked. Crime types that are not configured will not be rendered. To ignore this setting and show all crimes, check ForceRenderAllCrimes. Beware that the 'AREA' type will be ignored.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "Configure your crime types here. Select a combination of crime types like e. g. 'THEFT' and 'BICYCLE' to configure all instances of bicycle theft. 'Should be Highlighted' will use the HighlighterPrefab when checked. Crime types that are not configured will not be rendered. To ignore this setting and show all crimes, check ForceRenderAllCrimes. Beware that the 'AREA' type will be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay = { "crimeTypesToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, crimeTypesToDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay_MetaData)) }; // 3889901744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_highlighterBlueprint_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//Blueprint that is used to highlight a crime type combination if specified in CrimeTypesToDisplay.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "Blueprint that is used to highlight a crime type combination if specified in CrimeTypesToDisplay." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_highlighterBlueprint = { "highlighterBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, highlighterBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_highlighterBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_highlighterBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_defaultCrimePinBlueprint_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//Set the default blueprint to be used when no blueprint is specified in a crime type combination in CrimeTypesToDisplay.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "Set the default blueprint to be used when no blueprint is specified in a crime type combination in CrimeTypesToDisplay." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_defaultCrimePinBlueprint = { "defaultCrimePinBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, defaultCrimePinBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_defaultCrimePinBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_defaultCrimePinBlueprint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//You can select here if and how you want to display your Crime heatmap. 'None' disables the heatmap.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "You can select here if and how you want to display your Crime heatmap. 'None' disables the heatmap." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType = { "heatMapType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, heatMapType), Z_Construct_UEnum_ThoughtfishCoalaPlugin_UHeatMapType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType_MetaData)) }; // 3975712135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_influence_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//This value defines how far the Heatmap is influenced by one CrimePoint.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "This value defines how far the Heatmap is influenced by one CrimePoint." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_influence = { "influence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, influence), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_influence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_influence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightFactor_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//This value determines how much a crime point influences its surrounding heatmap tokens.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "This value determines how much a crime point influences its surrounding heatmap tokens." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightFactor = { "weightFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, weightFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightThreshold_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//Set the minimum Weight for HeatMapTokens to be displayed. If you want to display all tokens, set this value to -1.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "Set the minimum Weight for HeatMapTokens to be displayed. If you want to display all tokens, set this value to -1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightThreshold = { "weightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, weightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarScale_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//This value is only relevant when HeatMapType is set to 'Pillar' and determines how the heatmap token's height scales.\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "This value is only relevant when HeatMapType is set to 'Pillar' and determines how the heatmap token's height scales." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarScale = { "pillarScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, pillarScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarTokenBlueprint_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Pillar'. Has to Inherit from BP_HeatmapToken!\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Pillar'. Has to Inherit from BP_HeatmapToken!" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarTokenBlueprint = { "pillarTokenBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, pillarTokenBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarTokenBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarTokenBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_flatTokenBlueprint_MetaData[] = {
		{ "Category", "Coala crime render config" },
		{ "Comment", "//This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Flat'. Has to Inherit from BP_HeatmapToken!\n" },
		{ "ModuleRelativePath", "Public/CoalaCrimeRenderConfig.h" },
		{ "ToolTip", "This blueprint will be instantiated for each loaded cell if HeatMapType is set to 'Flat'. Has to Inherit from BP_HeatmapToken!" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_flatTokenBlueprint = { "flatTokenBlueprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaCrimeRenderConfig, flatTokenBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_flatTokenBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_flatTokenBlueprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_forceRenderAllCrimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_crimeTypesToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_highlighterBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_defaultCrimePinBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_heatMapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_influence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_weightThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_pillarTokenBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewProp_flatTokenBlueprint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaCrimeRenderConfig",
		sizeof(FCoalaCrimeRenderConfig),
		alignof(FCoalaCrimeRenderConfig),
		Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::EnumInfo[] = {
		{ UHeatMapType_StaticEnum, TEXT("UHeatMapType"), &Z_Registration_Info_UEnum_UHeatMapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3975712135U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::ScriptStructInfo[] = {
		{ FCrimeTypeWrapper::StaticStruct, Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics::NewStructOps, TEXT("CrimeTypeWrapper"), &Z_Registration_Info_UScriptStruct_CrimeTypeWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrimeTypeWrapper), 3889901744U) },
		{ FCoalaCrimeRenderConfig::StaticStruct, Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics::NewStructOps, TEXT("CoalaCrimeRenderConfig"), &Z_Registration_Info_UScriptStruct_CoalaCrimeRenderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaCrimeRenderConfig), 134112998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_1482418130(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
