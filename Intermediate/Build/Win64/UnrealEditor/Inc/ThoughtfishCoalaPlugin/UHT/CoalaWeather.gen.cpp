// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaWeather.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaWeather() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaHumidity();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaPressure();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTemperature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaWeather();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaWind();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaWind;
class UScriptStruct* FCoalaWind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaWind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaWind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaWind, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaWind"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaWind.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaWind>()
{
	return FCoalaWind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaWind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWind_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaWind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaWind>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Wind" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWind, speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Wind" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWind, direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaWind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWind_Statics::NewProp_direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaWind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaWind",
		sizeof(FCoalaWind),
		alignof(FCoalaWind),
		Z_Construct_UScriptStruct_FCoalaWind_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWind_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWind_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaWind()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaWind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaWind.InnerSingleton, Z_Construct_UScriptStruct_FCoalaWind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaWind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaPressure;
class UScriptStruct* FCoalaPressure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaPressure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaPressure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaPressure, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaPressure"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaPressure.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaPressure>()
{
	return FCoalaPressure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaPressure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPressure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaPressure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Pressure" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaPressure, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_unit_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Pressure" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaPressure, unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_unit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaPressure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewProp_unit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaPressure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaPressure",
		sizeof(FCoalaPressure),
		alignof(FCoalaPressure),
		Z_Construct_UScriptStruct_FCoalaPressure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPressure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaPressure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaPressure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaPressure()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaPressure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaPressure.InnerSingleton, Z_Construct_UScriptStruct_FCoalaPressure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaPressure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaHumidity;
class UScriptStruct* FCoalaHumidity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaHumidity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaHumidity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaHumidity, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaHumidity"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaHumidity.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaHumidity>()
{
	return FCoalaHumidity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaHumidity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaHumidity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaHumidity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Humidity" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaHumidity, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_unit_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Humidity" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaHumidity, unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_unit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaHumidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewProp_unit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaHumidity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaHumidity",
		sizeof(FCoalaHumidity),
		alignof(FCoalaHumidity),
		Z_Construct_UScriptStruct_FCoalaHumidity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaHumidity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaHumidity()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaHumidity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaHumidity.InnerSingleton, Z_Construct_UScriptStruct_FCoalaHumidity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaHumidity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaTemperature;
class UScriptStruct* FCoalaTemperature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaTemperature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaTemperature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaTemperature, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaTemperature"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaTemperature.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaTemperature>()
{
	return FCoalaTemperature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaTemperature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTemperature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaTemperature>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Temperature" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTemperature, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_unit_MetaData[] = {
		{ "Category", "Coala|Variables|Weather|Temperature" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTemperature, unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_unit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewProp_unit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaTemperature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaTemperature",
		sizeof(FCoalaTemperature),
		alignof(FCoalaTemperature),
		Z_Construct_UScriptStruct_FCoalaTemperature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTemperature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaTemperature()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaTemperature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaTemperature.InnerSingleton, Z_Construct_UScriptStruct_FCoalaTemperature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaTemperature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaWeather;
class UScriptStruct* FCoalaWeather::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaWeather.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaWeather.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaWeather, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaWeather"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaWeather.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaWeather>()
{
	return FCoalaWeather::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaWeather_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_simple_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_simple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_temperature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_humidity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_humidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wind_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaWeather>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_simple_MetaData[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_simple = { "simple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWeather, simple), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_simple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_simple_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_temperature_MetaData[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWeather, temperature), Z_Construct_UScriptStruct_FCoalaTemperature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_temperature_MetaData)) }; // 4198487187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_humidity_MetaData[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_humidity = { "humidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWeather, humidity), Z_Construct_UScriptStruct_FCoalaHumidity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_humidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_humidity_MetaData)) }; // 2232065189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_pressure_MetaData[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWeather, pressure), Z_Construct_UScriptStruct_FCoalaPressure, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_pressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_pressure_MetaData)) }; // 829270451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_wind_MetaData[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_wind = { "wind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaWeather, wind), Z_Construct_UScriptStruct_FCoalaWind, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_wind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_wind_MetaData)) }; // 2432117187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaWeather_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_simple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewProp_wind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaWeather_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaWeather",
		sizeof(FCoalaWeather),
		alignof(FCoalaWeather),
		Z_Construct_UScriptStruct_FCoalaWeather_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaWeather_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaWeather_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaWeather()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaWeather.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaWeather.InnerSingleton, Z_Construct_UScriptStruct_FCoalaWeather_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaWeather.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaWind)
	{
		P_GET_STRUCT_REF(FCoalaWind,Z_Param_Out_in);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_speed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaWind(Z_Param_Out_in,Z_Param_Out_speed,Z_Param_Out_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaWind)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaWind*)Z_Param__Result=UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaWind(Z_Param_speed,Z_Param_direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaPressure)
	{
		P_GET_STRUCT_REF(FCoalaPressure,Z_Param_Out_in);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaPressure(Z_Param_Out_in,Z_Param_Out_value,Z_Param_Out_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaPressure)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaPressure*)Z_Param__Result=UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaPressure(Z_Param_value,Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaHumidity)
	{
		P_GET_STRUCT_REF(FCoalaHumidity,Z_Param_Out_in);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaHumidity(Z_Param_Out_in,Z_Param_Out_value,Z_Param_Out_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaHumidity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaHumidity*)Z_Param__Result=UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaHumidity(Z_Param_value,Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaTemperature)
	{
		P_GET_STRUCT_REF(FCoalaTemperature,Z_Param_Out_in);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaTemperature(Z_Param_Out_in,Z_Param_Out_value,Z_Param_Out_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaTemperature*)Z_Param__Result=UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaTemperature(Z_Param_value,Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaWeather)
	{
		P_GET_STRUCT_REF(FCoalaWeather,Z_Param_Out_in);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_simple);
		P_GET_STRUCT_REF(FCoalaTemperature,Z_Param_Out_temperature);
		P_GET_STRUCT_REF(FCoalaHumidity,Z_Param_Out_humidity);
		P_GET_STRUCT_REF(FCoalaPressure,Z_Param_Out_pressure);
		P_GET_STRUCT_REF(FCoalaWind,Z_Param_Out_wind);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWeatherBlueprintFunctionLibrary::BreakCoalaWeather(Z_Param_Out_in,Z_Param_Out_simple,Z_Param_Out_temperature,Z_Param_Out_humidity,Z_Param_Out_pressure,Z_Param_Out_wind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaWeather)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_simple);
		P_GET_STRUCT(FCoalaTemperature,Z_Param_temperature);
		P_GET_STRUCT(FCoalaHumidity,Z_Param_humidity);
		P_GET_STRUCT(FCoalaPressure,Z_Param_pressure);
		P_GET_STRUCT(FCoalaWind,Z_Param_wind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaWeather*)Z_Param__Result=UCoalaWeatherBlueprintFunctionLibrary::MakeCoalaWeather(Z_Param_simple,Z_Param_temperature,Z_Param_humidity,Z_Param_pressure,Z_Param_wind);
		P_NATIVE_END;
	}
	void UCoalaWeatherBlueprintFunctionLibrary::StaticRegisterNativesUCoalaWeatherBlueprintFunctionLibrary()
	{
		UClass* Class = UCoalaWeatherBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaHumidity", &UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaHumidity },
			{ "BreakCoalaPressure", &UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaPressure },
			{ "BreakCoalaTemperature", &UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaTemperature },
			{ "BreakCoalaWeather", &UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaWeather },
			{ "BreakCoalaWind", &UCoalaWeatherBlueprintFunctionLibrary::execBreakCoalaWind },
			{ "MakeCoalaHumidity", &UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaHumidity },
			{ "MakeCoalaPressure", &UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaPressure },
			{ "MakeCoalaTemperature", &UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaTemperature },
			{ "MakeCoalaWeather", &UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaWeather },
			{ "MakeCoalaWind", &UCoalaWeatherBlueprintFunctionLibrary::execMakeCoalaWind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaHumidity_Parms
		{
			FCoalaHumidity in;
			float value;
			FString unit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_in_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaHumidity_Parms, in), Z_Construct_UScriptStruct_FCoalaHumidity, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_in_MetaData)) }; // 2232065189
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaHumidity_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaHumidity_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_in,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Humidity" },
		{ "Comment", "/** Breaks a COALA humidity apart into value, unit. */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a COALA humidity apart into value, unit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "BreakCoalaHumidity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaHumidity_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaPressure_Parms
		{
			FCoalaPressure in;
			float value;
			FString unit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_in_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaPressure_Parms, in), Z_Construct_UScriptStruct_FCoalaPressure, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_in_MetaData)) }; // 829270451
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaPressure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaPressure_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_in,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Pressure" },
		{ "Comment", "/** Breaks a COALA pressure apart into value, unit. */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a COALA pressure apart into value, unit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "BreakCoalaPressure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaPressure_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaTemperature_Parms
		{
			FCoalaTemperature in;
			float value;
			FString unit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_in_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaTemperature_Parms, in), Z_Construct_UScriptStruct_FCoalaTemperature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_in_MetaData)) }; // 4198487187
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaTemperature_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaTemperature_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_in,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Temperature" },
		{ "Comment", "/** Breaks a COALA temperature apart into value, unit. */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a COALA temperature apart into value, unit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "BreakCoalaTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaTemperature_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms
		{
			FCoalaWeather in;
			FString simple;
			FCoalaTemperature temperature;
			FCoalaHumidity humidity;
			FCoalaPressure pressure;
			FCoalaWind wind;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in;
		static const UECodeGen_Private::FStrPropertyParams NewProp_simple;
		static const UECodeGen_Private::FStructPropertyParams NewProp_temperature;
		static const UECodeGen_Private::FStructPropertyParams NewProp_humidity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pressure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_in_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, in), Z_Construct_UScriptStruct_FCoalaWeather, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_in_MetaData)) }; // 1812895348
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_simple = { "simple", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, simple), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, temperature), Z_Construct_UScriptStruct_FCoalaTemperature, METADATA_PARAMS(nullptr, 0) }; // 4198487187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_humidity = { "humidity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, humidity), Z_Construct_UScriptStruct_FCoalaHumidity, METADATA_PARAMS(nullptr, 0) }; // 2232065189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, pressure), Z_Construct_UScriptStruct_FCoalaPressure, METADATA_PARAMS(nullptr, 0) }; // 829270451
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_wind = { "wind", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms, wind), Z_Construct_UScriptStruct_FCoalaWind, METADATA_PARAMS(nullptr, 0) }; // 2432117187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_in,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_simple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::NewProp_wind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "Comment", "/** Breaks a COALA weather apart into simple, temperature, humidity, pressure, wind. */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a COALA weather apart into simple, temperature, humidity, pressure, wind." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "BreakCoalaWeather", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWeather_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWind_Parms
		{
			FCoalaWind in;
			float speed;
			float direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_in_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_in = { "in", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWind_Parms, in), Z_Construct_UScriptStruct_FCoalaWind, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_in_MetaData)) }; // 2432117187
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWind_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWind_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_in,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Wind" },
		{ "Comment", "/** Breaks a COALA wind apart into value, unit. */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a COALA wind apart into value, unit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "BreakCoalaWind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::CoalaWeatherBlueprintFunctionLibrary_eventBreakCoalaWind_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaHumidity_Parms
		{
			float value;
			FString unit;
			FCoalaHumidity ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaHumidity_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaHumidity_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaHumidity_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaHumidity, METADATA_PARAMS(nullptr, 0) }; // 2232065189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Humidity" },
		{ "Comment", "/** Makes a COALA humidity {value, unit} */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a COALA humidity {value, unit}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "MakeCoalaHumidity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaHumidity_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaPressure_Parms
		{
			float value;
			FString unit;
			FCoalaPressure ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaPressure_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaPressure_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaPressure_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaPressure, METADATA_PARAMS(nullptr, 0) }; // 829270451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Pressure" },
		{ "Comment", "/** Makes a COALA pressure {value, unit} */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a COALA pressure {value, unit}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "MakeCoalaPressure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaPressure_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaTemperature_Parms
		{
			float value;
			FString unit;
			FCoalaTemperature ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_unit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaTemperature_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaTemperature_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaTemperature_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaTemperature, METADATA_PARAMS(nullptr, 0) }; // 4198487187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Temperature" },
		{ "Comment", "/** Makes a COALA temperature {value, unit} */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a COALA temperature {value, unit}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "MakeCoalaTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaTemperature_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms
		{
			FString simple;
			FCoalaTemperature temperature;
			FCoalaHumidity humidity;
			FCoalaPressure pressure;
			FCoalaWind wind;
			FCoalaWeather ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_simple;
		static const UECodeGen_Private::FStructPropertyParams NewProp_temperature;
		static const UECodeGen_Private::FStructPropertyParams NewProp_humidity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pressure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wind;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_simple = { "simple", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, simple), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, temperature), Z_Construct_UScriptStruct_FCoalaTemperature, METADATA_PARAMS(nullptr, 0) }; // 4198487187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_humidity = { "humidity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, humidity), Z_Construct_UScriptStruct_FCoalaHumidity, METADATA_PARAMS(nullptr, 0) }; // 2232065189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, pressure), Z_Construct_UScriptStruct_FCoalaPressure, METADATA_PARAMS(nullptr, 0) }; // 829270451
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_wind = { "wind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, wind), Z_Construct_UScriptStruct_FCoalaWind, METADATA_PARAMS(nullptr, 0) }; // 2432117187
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaWeather, METADATA_PARAMS(nullptr, 0) }; // 1812895348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_simple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_wind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather" },
		{ "Comment", "/** Makes a COALA weather {simple, temperature, humidity, pressure, wind} */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a COALA weather {simple, temperature, humidity, pressure, wind}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "MakeCoalaWeather", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWeather_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics
	{
		struct CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWind_Parms
		{
			float speed;
			float direction;
			FCoalaWind ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWind_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWind_Parms, direction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWind_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaWind, METADATA_PARAMS(nullptr, 0) }; // 2432117187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Weather|Wind" },
		{ "Comment", "/** Makes a COALA wind {value, unit} */" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a COALA wind {value, unit}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, nullptr, "MakeCoalaWind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::CoalaWeatherBlueprintFunctionLibrary_eventMakeCoalaWind_Parms), Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaWeatherBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_NoRegister()
	{
		return UCoalaWeatherBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaHumidity, "BreakCoalaHumidity" }, // 3823995912
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaPressure, "BreakCoalaPressure" }, // 3022824465
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaTemperature, "BreakCoalaTemperature" }, // 2940805317
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWeather, "BreakCoalaWeather" }, // 3313900452
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_BreakCoalaWind, "BreakCoalaWind" }, // 3826657964
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaHumidity, "MakeCoalaHumidity" }, // 21390719
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaPressure, "MakeCoalaPressure" }, // 2835913253
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaTemperature, "MakeCoalaTemperature" }, // 940000828
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWeather, "MakeCoalaWeather" }, // 3948104273
		{ &Z_Construct_UFunction_UCoalaWeatherBlueprintFunctionLibrary_MakeCoalaWind, "MakeCoalaWind" }, // 1162389402
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "CoalaWeather.h" },
		{ "ModuleRelativePath", "Public/CoalaWeather.h" },
		{ "ScriptName", "CoalaLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaWeatherBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::ClassParams = {
		&UCoalaWeatherBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaWeatherBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaWeatherBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaWeatherBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaWeatherBlueprintFunctionLibrary>()
	{
		return UCoalaWeatherBlueprintFunctionLibrary::StaticClass();
	}
	UCoalaWeatherBlueprintFunctionLibrary::UCoalaWeatherBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaWeatherBlueprintFunctionLibrary);
	UCoalaWeatherBlueprintFunctionLibrary::~UCoalaWeatherBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ScriptStructInfo[] = {
		{ FCoalaWind::StaticStruct, Z_Construct_UScriptStruct_FCoalaWind_Statics::NewStructOps, TEXT("CoalaWind"), &Z_Registration_Info_UScriptStruct_CoalaWind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaWind), 2432117187U) },
		{ FCoalaPressure::StaticStruct, Z_Construct_UScriptStruct_FCoalaPressure_Statics::NewStructOps, TEXT("CoalaPressure"), &Z_Registration_Info_UScriptStruct_CoalaPressure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaPressure), 829270451U) },
		{ FCoalaHumidity::StaticStruct, Z_Construct_UScriptStruct_FCoalaHumidity_Statics::NewStructOps, TEXT("CoalaHumidity"), &Z_Registration_Info_UScriptStruct_CoalaHumidity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaHumidity), 2232065189U) },
		{ FCoalaTemperature::StaticStruct, Z_Construct_UScriptStruct_FCoalaTemperature_Statics::NewStructOps, TEXT("CoalaTemperature"), &Z_Registration_Info_UScriptStruct_CoalaTemperature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaTemperature), 4198487187U) },
		{ FCoalaWeather::StaticStruct, Z_Construct_UScriptStruct_FCoalaWeather_Statics::NewStructOps, TEXT("CoalaWeather"), &Z_Registration_Info_UScriptStruct_CoalaWeather, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaWeather), 1812895348U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaWeatherBlueprintFunctionLibrary, UCoalaWeatherBlueprintFunctionLibrary::StaticClass, TEXT("UCoalaWeatherBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UCoalaWeatherBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaWeatherBlueprintFunctionLibrary), 798411925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_1935496213(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWeather_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
