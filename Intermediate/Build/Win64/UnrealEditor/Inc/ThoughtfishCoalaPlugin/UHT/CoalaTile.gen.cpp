// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTile.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTileBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTileBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaTile;
class UScriptStruct* FCoalaTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaTile, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaTile"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaTile.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaTile>()
{
	return FCoalaTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Coala|Tile" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTile, z), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Coala|Tile" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTile, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Coala|Tile" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaTile, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaTile_Statics::NewProp_y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaTile",
		sizeof(FCoalaTile),
		alignof(FCoalaTile),
		Z_Construct_UScriptStruct_FCoalaTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaTile.InnerSingleton, Z_Construct_UScriptStruct_FCoalaTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaTile.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaTileBlueprintLibrary::execCreateTileFromGpsCoordinates)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_zoom);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lon);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaTile*)Z_Param__Result=UCoalaTileBlueprintLibrary::CreateTileFromGpsCoordinates(Z_Param_zoom,Z_Param_lon,Z_Param_lat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTileBlueprintLibrary::execCreateTileFromGpsCoordinates_withGps)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_zoom);
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_gpsCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaTile*)Z_Param__Result=UCoalaTileBlueprintLibrary::CreateTileFromGpsCoordinates_withGps(Z_Param_zoom,Z_Param_gpsCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTileBlueprintLibrary::execBreakCoalaTile)
	{
		P_GET_STRUCT(FCoalaTile,Z_Param_inCoalaTile);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_indexX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_indexY);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTileBlueprintLibrary::BreakCoalaTile(Z_Param_inCoalaTile,Z_Param_Out_indexX,Z_Param_Out_indexY,Z_Param_Out_zoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTileBlueprintLibrary::execMakeCoalaTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indexX);
		P_GET_PROPERTY(FIntProperty,Z_Param_indexY);
		P_GET_PROPERTY(FByteProperty,Z_Param_zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaTile*)Z_Param__Result=UCoalaTileBlueprintLibrary::MakeCoalaTile(Z_Param_indexX,Z_Param_indexY,Z_Param_zoom);
		P_NATIVE_END;
	}
	void UCoalaTileBlueprintLibrary::StaticRegisterNativesUCoalaTileBlueprintLibrary()
	{
		UClass* Class = UCoalaTileBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaTile", &UCoalaTileBlueprintLibrary::execBreakCoalaTile },
			{ "CreateTileFromGpsCoordinates", &UCoalaTileBlueprintLibrary::execCreateTileFromGpsCoordinates },
			{ "CreateTileFromGpsCoordinates_withGps", &UCoalaTileBlueprintLibrary::execCreateTileFromGpsCoordinates_withGps },
			{ "MakeCoalaTile", &UCoalaTileBlueprintLibrary::execMakeCoalaTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics
	{
		struct CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms
		{
			FCoalaTile inCoalaTile;
			int32 indexX;
			int32 indexY;
			uint8 zoom;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inCoalaTile;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_inCoalaTile = { "inCoalaTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms, inCoalaTile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_indexX = { "indexX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms, indexX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_indexY = { "indexY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms, indexY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_inCoalaTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_indexX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_indexY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::NewProp_zoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Tile" },
		{ "Comment", "/** Breaks a coala tile  apart into {index x,index y, zoom}. */" },
		{ "DisplayName", "Break Tile" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala tile  apart into {index x,index y, zoom}." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTileBlueprintLibrary, nullptr, "BreakCoalaTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::CoalaTileBlueprintLibrary_eventBreakCoalaTile_Parms), Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics
	{
		struct CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms
		{
			uint8 zoom;
			double lon;
			double lat;
			FCoalaTile ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Factory Functions" },
		{ "DisplayName", "Create Tile From Gps Coordinates" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTileBlueprintLibrary, nullptr, "CreateTileFromGpsCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_Parms), Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics
	{
		struct CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_withGps_Parms
		{
			uint8 zoom;
			FCoalaGPSCoordinates gpsCoordinates;
			FCoalaTile ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gpsCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_withGps_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_gpsCoordinates = { "gpsCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_withGps_Parms, gpsCoordinates), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_withGps_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_gpsCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Factory Functions" },
		{ "DisplayName", "Create Tile From Gps Coordinates" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTileBlueprintLibrary, nullptr, "CreateTileFromGpsCoordinates_withGps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::CoalaTileBlueprintLibrary_eventCreateTileFromGpsCoordinates_withGps_Parms), Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics
	{
		struct CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms
		{
			int32 indexX;
			int32 indexY;
			uint8 zoom;
			FCoalaTile ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_zoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_indexX = { "indexX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms, indexX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_indexY = { "indexY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms, indexY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_zoom = { "zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms, zoom), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_indexX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_indexY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Tile" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "DisplayName", "Make Tile" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTileBlueprintLibrary, nullptr, "MakeCoalaTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::CoalaTileBlueprintLibrary_eventMakeCoalaTile_Parms), Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTileBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaTileBlueprintLibrary_NoRegister()
	{
		return UCoalaTileBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTileBlueprintLibrary_BreakCoalaTile, "BreakCoalaTile" }, // 555031578
		{ &Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates, "CreateTileFromGpsCoordinates" }, // 1135777256
		{ &Z_Construct_UFunction_UCoalaTileBlueprintLibrary_CreateTileFromGpsCoordinates_withGps, "CreateTileFromGpsCoordinates_withGps" }, // 4264784145
		{ &Z_Construct_UFunction_UCoalaTileBlueprintLibrary_MakeCoalaTile, "MakeCoalaTile" }, // 1367919919
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTile.h" },
		{ "ModuleRelativePath", "Public/CoalaTile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTileBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::ClassParams = {
		&UCoalaTileBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTileBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaTileBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTileBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaTileBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTileBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTileBlueprintLibrary>()
	{
		return UCoalaTileBlueprintLibrary::StaticClass();
	}
	UCoalaTileBlueprintLibrary::UCoalaTileBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTileBlueprintLibrary);
	UCoalaTileBlueprintLibrary::~UCoalaTileBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ScriptStructInfo[] = {
		{ FCoalaTile::StaticStruct, Z_Construct_UScriptStruct_FCoalaTile_Statics::NewStructOps, TEXT("CoalaTile"), &Z_Registration_Info_UScriptStruct_CoalaTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaTile), 27221586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTileBlueprintLibrary, UCoalaTileBlueprintLibrary::StaticClass, TEXT("UCoalaTileBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaTileBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTileBlueprintLibrary), 1134706392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_2946521569(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
