// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/GeoConverter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoConverter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UGeoConverter();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UGeoConverter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UGeoConverter::exectiley2lat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeoConverter::tiley2lat(Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoConverter::exectilex2long)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeoConverter::tilex2long(Z_Param_x,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoConverter::execlat2tiley)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeoConverter::lat2tiley(Z_Param_lat,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoConverter::execlong2tilex)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lon);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeoConverter::long2tilex(Z_Param_lon,Z_Param_z);
		P_NATIVE_END;
	}
	void UGeoConverter::StaticRegisterNativesUGeoConverter()
	{
		UClass* Class = UGeoConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "lat2tiley", &UGeoConverter::execlat2tiley },
			{ "long2tilex", &UGeoConverter::execlong2tilex },
			{ "tilex2long", &UGeoConverter::exectilex2long },
			{ "tiley2lat", &UGeoConverter::exectiley2lat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics
	{
		struct GeoConverter_eventlat2tiley_Parms
		{
			double lat;
			int32 z;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlat2tiley_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlat2tiley_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlat2tiley_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoConverter, nullptr, "lat2tiley", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::GeoConverter_eventlat2tiley_Parms), Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoConverter_lat2tiley()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoConverter_lat2tiley_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoConverter_long2tilex_Statics
	{
		struct GeoConverter_eventlong2tilex_Parms
		{
			double lon;
			int32 z;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlong2tilex_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlong2tilex_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventlong2tilex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoConverter, nullptr, "long2tilex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::GeoConverter_eventlong2tilex_Parms), Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoConverter_long2tilex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoConverter_long2tilex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoConverter_tilex2long_Statics
	{
		struct GeoConverter_eventtilex2long_Parms
		{
			int32 x;
			int32 z;
			double ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtilex2long_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtilex2long_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtilex2long_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoConverter, nullptr, "tilex2long", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::GeoConverter_eventtilex2long_Parms), Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoConverter_tilex2long()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoConverter_tilex2long_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics
	{
		struct GeoConverter_eventtiley2lat_Parms
		{
			int32 y;
			int32 z;
			double ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtiley2lat_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtiley2lat_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoConverter_eventtiley2lat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoConverter, nullptr, "tiley2lat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::GeoConverter_eventtiley2lat_Parms), Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoConverter_tiley2lat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoConverter_tiley2lat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoConverter);
	UClass* Z_Construct_UClass_UGeoConverter_NoRegister()
	{
		return UGeoConverter::StaticClass();
	}
	struct Z_Construct_UClass_UGeoConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeoConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeoConverter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeoConverter_lat2tiley, "lat2tiley" }, // 2928473138
		{ &Z_Construct_UFunction_UGeoConverter_long2tilex, "long2tilex" }, // 2415510775
		{ &Z_Construct_UFunction_UGeoConverter_tilex2long, "tilex2long" }, // 3284064022
		{ &Z_Construct_UFunction_UGeoConverter_tiley2lat, "tiley2lat" }, // 1066471896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeoConverter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoConverter.h" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeoConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeoConverter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeoConverter_Statics::ClassParams = {
		&UGeoConverter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeoConverter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeoConverter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeoConverter()
	{
		if (!Z_Registration_Info_UClass_UGeoConverter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeoConverter.OuterSingleton, Z_Construct_UClass_UGeoConverter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeoConverter.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UGeoConverter>()
	{
		return UGeoConverter::StaticClass();
	}
	UGeoConverter::UGeoConverter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeoConverter);
	UGeoConverter::~UGeoConverter() {}
	DEFINE_FUNCTION(UCoalaGpsConverterFunctionLibrary::execToScenePosition)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lon);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCoalaGpsConverterFunctionLibrary::ToScenePosition(Z_Param_lon,Z_Param_lat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGpsConverterFunctionLibrary::execWorldPositionToGpsPosition)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_worldPosX);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_worldPosY);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_lon);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition(Z_Param_worldPosX,Z_Param_worldPosY,Z_Param_Out_lon,Z_Param_Out_lat);
		P_NATIVE_END;
	}
	void UCoalaGpsConverterFunctionLibrary::StaticRegisterNativesUCoalaGpsConverterFunctionLibrary()
	{
		UClass* Class = UCoalaGpsConverterFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToScenePosition", &UCoalaGpsConverterFunctionLibrary::execToScenePosition },
			{ "WorldPositionToGpsPosition", &UCoalaGpsConverterFunctionLibrary::execWorldPositionToGpsPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics
	{
		struct CoalaGpsConverterFunctionLibrary_eventToScenePosition_Parms
		{
			double lon;
			double lat;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventToScenePosition_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventToScenePosition_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventToScenePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary, nullptr, "ToScenePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::CoalaGpsConverterFunctionLibrary_eventToScenePosition_Parms), Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics
	{
		struct CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms
		{
			double worldPosX;
			double worldPosY;
			double lon;
			double lat;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_worldPosX;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_worldPosY;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_worldPosX = { "worldPosX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms, worldPosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_worldPosY = { "worldPosY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms, worldPosY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_worldPosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_worldPosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::NewProp_lat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary, nullptr, "WorldPositionToGpsPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::CoalaGpsConverterFunctionLibrary_eventWorldPositionToGpsPosition_Parms), Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaGpsConverterFunctionLibrary);
	UClass* Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_NoRegister()
	{
		return UCoalaGpsConverterFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_ToScenePosition, "ToScenePosition" }, // 1549197096
		{ &Z_Construct_UFunction_UCoalaGpsConverterFunctionLibrary_WorldPositionToGpsPosition, "WorldPositionToGpsPosition" }, // 692004077
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoConverter.h" },
		{ "ModuleRelativePath", "Public/GeoConverter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaGpsConverterFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::ClassParams = {
		&UCoalaGpsConverterFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaGpsConverterFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaGpsConverterFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaGpsConverterFunctionLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaGpsConverterFunctionLibrary>()
	{
		return UCoalaGpsConverterFunctionLibrary::StaticClass();
	}
	UCoalaGpsConverterFunctionLibrary::UCoalaGpsConverterFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaGpsConverterFunctionLibrary);
	UCoalaGpsConverterFunctionLibrary::~UCoalaGpsConverterFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_GeoConverter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_GeoConverter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeoConverter, UGeoConverter::StaticClass, TEXT("UGeoConverter"), &Z_Registration_Info_UClass_UGeoConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoConverter), 2365450671U) },
		{ Z_Construct_UClass_UCoalaGpsConverterFunctionLibrary, UCoalaGpsConverterFunctionLibrary::StaticClass, TEXT("UCoalaGpsConverterFunctionLibrary"), &Z_Registration_Info_UClass_UCoalaGpsConverterFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaGpsConverterFunctionLibrary), 2286708476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_GeoConverter_h_487923699(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_GeoConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_GeoConverter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
