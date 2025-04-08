// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaController();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaController_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN;
	static UEnum* PRINT_DEBUG_VARIABLES_TO_SCREEN_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("PRINT_DEBUG_VARIABLES_TO_SCREEN"));
		}
		return Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<PRINT_DEBUG_VARIABLES_TO_SCREEN>()
	{
		return PRINT_DEBUG_VARIABLES_TO_SCREEN_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enumerators[] = {
		{ "PRINT_DEBUG_VARIABLES_TO_SCREEN::GAMEP_FPS", (int64)PRINT_DEBUG_VARIABLES_TO_SCREEN::GAMEP_FPS },
		{ "PRINT_DEBUG_VARIABLES_TO_SCREEN::AREA_EVENTS", (int64)PRINT_DEBUG_VARIABLES_TO_SCREEN::AREA_EVENTS },
		{ "PRINT_DEBUG_VARIABLES_TO_SCREEN::GPS_EVENTS", (int64)PRINT_DEBUG_VARIABLES_TO_SCREEN::GPS_EVENTS },
		{ "PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS", (int64)PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enum_MetaDataParams[] = {
		{ "AREA_EVENTS.Comment", "// FColor::Green\n" },
		{ "AREA_EVENTS.Name", "PRINT_DEBUG_VARIABLES_TO_SCREEN::AREA_EVENTS" },
		{ "AREA_EVENTS.ToolTip", "FColor::Green" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "CLICK_EVENTS.Comment", "// FColor::Red\n" },
		{ "CLICK_EVENTS.Name", "PRINT_DEBUG_VARIABLES_TO_SCREEN::CLICK_EVENTS" },
		{ "CLICK_EVENTS.ToolTip", "FColor::Red" },
		{ "GAMEP_FPS.Name", "PRINT_DEBUG_VARIABLES_TO_SCREEN::GAMEP_FPS" },
		{ "GPS_EVENTS.Comment", "// FColor::Black\n" },
		{ "GPS_EVENTS.Name", "PRINT_DEBUG_VARIABLES_TO_SCREEN::GPS_EVENTS" },
		{ "GPS_EVENTS.ToolTip", "FColor::Black" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"PRINT_DEBUG_VARIABLES_TO_SCREEN",
		"PRINT_DEBUG_VARIABLES_TO_SCREEN",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN()
	{
		if (!Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_PRINT_DEBUG_VARIABLES_TO_SCREEN_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN.InnerSingleton;
	}
	DEFINE_FUNCTION(ACoalaController::execGetElevationScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=ACoalaController::GetElevationScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoalaController::execGetCoalaScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=ACoalaController::GetCoalaScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoalaController::execCleanupCoala)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanupCoala();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoalaController::execInitCoala)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_scale);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_elevationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitCoala(Z_Param_scale,Z_Param_elevationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoalaController::execGpsPositionChanged)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lon);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_lat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GpsPositionChanged(Z_Param_lon,Z_Param_lat);
		P_NATIVE_END;
	}
	void ACoalaController::StaticRegisterNativesACoalaController()
	{
		UClass* Class = ACoalaController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanupCoala", &ACoalaController::execCleanupCoala },
			{ "GetCoalaScale", &ACoalaController::execGetCoalaScale },
			{ "GetElevationScale", &ACoalaController::execGetElevationScale },
			{ "GpsPositionChanged", &ACoalaController::execGpsPositionChanged },
			{ "InitCoala", &ACoalaController::execInitCoala },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "Comment", "// elevationScale to because of conversion from unreal units to meter\n" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
		{ "ToolTip", "elevationScale to because of conversion from unreal units to meter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaController, nullptr, "CleanupCoala", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaController_CleanupCoala()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaController_CleanupCoala_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics
	{
		struct CoalaController_eventGetCoalaScale_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventGetCoalaScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "Comment", "//Scale in Percent (prob. so between 0-1)\n" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
		{ "ToolTip", "Scale in Percent (prob. so between 0-1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaController, nullptr, "GetCoalaScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::CoalaController_eventGetCoalaScale_Parms), Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaController_GetCoalaScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaController_GetCoalaScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics
	{
		struct CoalaController_eventGetElevationScale_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventGetElevationScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaController, nullptr, "GetElevationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::CoalaController_eventGetElevationScale_Parms), Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaController_GetElevationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaController_GetElevationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics
	{
		struct CoalaController_eventGpsPositionChanged_Parms
		{
			double lon;
			double lat;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventGpsPositionChanged_Parms, lon), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventGpsPositionChanged_Parms, lat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::NewProp_lon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::NewProp_lat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|V2|controll" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaController, nullptr, "GpsPositionChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::CoalaController_eventGpsPositionChanged_Parms), Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaController_GpsPositionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaController_GpsPositionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaController_InitCoala_Statics
	{
		struct CoalaController_eventInitCoala_Parms
		{
			double scale;
			double elevationScale;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_scale;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_elevationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_InitCoala_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventInitCoala_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ACoalaController_InitCoala_Statics::NewProp_elevationScale = { "elevationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaController_eventInitCoala_Parms, elevationScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaController_InitCoala_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_InitCoala_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaController_InitCoala_Statics::NewProp_elevationScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaController_InitCoala_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Area Controller" },
		{ "CPP_Default_elevationScale", "100.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaController_InitCoala_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaController, nullptr, "InitCoala", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoalaController_InitCoala_Statics::CoalaController_eventInitCoala_Parms), Z_Construct_UFunction_ACoalaController_InitCoala_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_InitCoala_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaController_InitCoala_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaController_InitCoala_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaController_InitCoala()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaController_InitCoala_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaController);
	UClass* Z_Construct_UClass_ACoalaController_NoRegister()
	{
		return ACoalaController::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_printVariablesToScreen_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_printVariablesToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoalaProjectApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CoalaProjectApiKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoalaController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoalaController_CleanupCoala, "CleanupCoala" }, // 171855094
		{ &Z_Construct_UFunction_ACoalaController_GetCoalaScale, "GetCoalaScale" }, // 2501062980
		{ &Z_Construct_UFunction_ACoalaController_GetElevationScale, "GetElevationScale" }, // 400463351
		{ &Z_Construct_UFunction_ACoalaController_GpsPositionChanged, "GpsPositionChanged" }, // 1422815532
		{ &Z_Construct_UFunction_ACoalaController_InitCoala, "InitCoala" }, // 3422415213
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaController.h" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaController_Statics::NewProp_printVariablesToScreen_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.PRINT_DEBUG_VARIABLES_TO_SCREEN" },
		{ "Category", "Coala|Dev" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoalaController_Statics::NewProp_printVariablesToScreen = { "printVariablesToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaController, printVariablesToScreen), METADATA_PARAMS(Z_Construct_UClass_ACoalaController_Statics::NewProp_printVariablesToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaController_Statics::NewProp_printVariablesToScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaController_Statics::NewProp_CoalaProjectApiKey_MetaData[] = {
		{ "Category", "Coala|setup" },
		{ "Comment", "/** Project API_KEY from https://backend.coala.thoughtfish.de/  */" },
		{ "ModuleRelativePath", "Public/CoalaController.h" },
		{ "ToolTip", "Project API_KEY from https://backend.coala.thoughtfish.de/" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACoalaController_Statics::NewProp_CoalaProjectApiKey = { "CoalaProjectApiKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaController, CoalaProjectApiKey), METADATA_PARAMS(Z_Construct_UClass_ACoalaController_Statics::NewProp_CoalaProjectApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaController_Statics::NewProp_CoalaProjectApiKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoalaController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaController_Statics::NewProp_printVariablesToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaController_Statics::NewProp_CoalaProjectApiKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaController_Statics::ClassParams = {
		&ACoalaController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoalaController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaController()
	{
		if (!Z_Registration_Info_UClass_ACoalaController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaController.OuterSingleton, Z_Construct_UClass_ACoalaController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaController.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaController>()
	{
		return ACoalaController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaController);
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::EnumInfo[] = {
		{ PRINT_DEBUG_VARIABLES_TO_SCREEN_StaticEnum, TEXT("PRINT_DEBUG_VARIABLES_TO_SCREEN"), &Z_Registration_Info_UEnum_PRINT_DEBUG_VARIABLES_TO_SCREEN, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1679263313U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaController, ACoalaController::StaticClass, TEXT("ACoalaController"), &Z_Registration_Info_UClass_ACoalaController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaController), 3046882410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_156138888(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
