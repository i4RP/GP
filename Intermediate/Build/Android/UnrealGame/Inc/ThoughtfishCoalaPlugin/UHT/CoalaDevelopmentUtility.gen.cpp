// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaDevelopmentUtility.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuilding.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaDevelopmentUtility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaDevelopmentUtility();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaDevelopmentUtility_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuilding();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaDevelopmentUtility::execCompareGPSCoordinates)
	{
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_coords1);
		P_GET_STRUCT(FCoalaGPSCoordinates,Z_Param_coords2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCoalaDevelopmentUtility::CompareGPSCoordinates(Z_Param_coords1,Z_Param_coords2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaDevelopmentUtility::execCoalaBuildingShapeToString)
	{
		P_GET_STRUCT(FCoalaBuilding,Z_Param_building);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaDevelopmentUtility::CoalaBuildingShapeToString(Z_Param_building);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaDevelopmentUtility::execSetActorDisplayNameInWorldOutliner)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_newDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaDevelopmentUtility::SetActorDisplayNameInWorldOutliner(Z_Param_actor,Z_Param_newDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaDevelopmentUtility::execGetGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoalaDevelopmentUtility::GetGUID();
		P_NATIVE_END;
	}
	void UCoalaDevelopmentUtility::StaticRegisterNativesUCoalaDevelopmentUtility()
	{
		UClass* Class = UCoalaDevelopmentUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CoalaBuildingShapeToString", &UCoalaDevelopmentUtility::execCoalaBuildingShapeToString },
			{ "CompareGPSCoordinates", &UCoalaDevelopmentUtility::execCompareGPSCoordinates },
			{ "GetGUID", &UCoalaDevelopmentUtility::execGetGUID },
			{ "SetActorDisplayNameInWorldOutliner", &UCoalaDevelopmentUtility::execSetActorDisplayNameInWorldOutliner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics
	{
		struct CoalaDevelopmentUtility_eventCoalaBuildingShapeToString_Parms
		{
			FCoalaBuilding building;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_building;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventCoalaBuildingShapeToString_Parms, building), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventCoalaBuildingShapeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::NewProp_building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaDevelopmentUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaDevelopmentUtility, nullptr, "CoalaBuildingShapeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::CoalaDevelopmentUtility_eventCoalaBuildingShapeToString_Parms), Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics
	{
		struct CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms
		{
			FCoalaGPSCoordinates coords1;
			FCoalaGPSCoordinates coords2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_coords1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_coords2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_coords1 = { "coords1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms, coords1), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_coords2 = { "coords2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms, coords2), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	void Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms), &Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_coords1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_coords2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaDevelopmentUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaDevelopmentUtility, nullptr, "CompareGPSCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::CoalaDevelopmentUtility_eventCompareGPSCoordinates_Parms), Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics
	{
		struct CoalaDevelopmentUtility_eventGetGUID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventGetGUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaDevelopmentUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaDevelopmentUtility, nullptr, "GetGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::CoalaDevelopmentUtility_eventGetGUID_Parms), Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics
	{
		struct CoalaDevelopmentUtility_eventSetActorDisplayNameInWorldOutliner_Parms
		{
			AActor* actor;
			FString newDisplayName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventSetActorDisplayNameInWorldOutliner_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::NewProp_newDisplayName = { "newDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaDevelopmentUtility_eventSetActorDisplayNameInWorldOutliner_Parms, newDisplayName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::NewProp_newDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaDevelopmentUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaDevelopmentUtility, nullptr, "SetActorDisplayNameInWorldOutliner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::CoalaDevelopmentUtility_eventSetActorDisplayNameInWorldOutliner_Parms), Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaDevelopmentUtility);
	UClass* Z_Construct_UClass_UCoalaDevelopmentUtility_NoRegister()
	{
		return UCoalaDevelopmentUtility::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaDevelopmentUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaDevelopmentUtility_CoalaBuildingShapeToString, "CoalaBuildingShapeToString" }, // 3386727347
		{ &Z_Construct_UFunction_UCoalaDevelopmentUtility_CompareGPSCoordinates, "CompareGPSCoordinates" }, // 3257336225
		{ &Z_Construct_UFunction_UCoalaDevelopmentUtility_GetGUID, "GetGUID" }, // 2790283367
		{ &Z_Construct_UFunction_UCoalaDevelopmentUtility_SetActorDisplayNameInWorldOutliner, "SetActorDisplayNameInWorldOutliner" }, // 1636176864
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaDevelopmentUtility.h" },
		{ "ModuleRelativePath", "Public/CoalaDevelopmentUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaDevelopmentUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::ClassParams = {
		&UCoalaDevelopmentUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaDevelopmentUtility()
	{
		if (!Z_Registration_Info_UClass_UCoalaDevelopmentUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaDevelopmentUtility.OuterSingleton, Z_Construct_UClass_UCoalaDevelopmentUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaDevelopmentUtility.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaDevelopmentUtility>()
	{
		return UCoalaDevelopmentUtility::StaticClass();
	}
	UCoalaDevelopmentUtility::UCoalaDevelopmentUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaDevelopmentUtility);
	UCoalaDevelopmentUtility::~UCoalaDevelopmentUtility() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDevelopmentUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDevelopmentUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaDevelopmentUtility, UCoalaDevelopmentUtility::StaticClass, TEXT("UCoalaDevelopmentUtility"), &Z_Registration_Info_UClass_UCoalaDevelopmentUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaDevelopmentUtility), 1598861851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDevelopmentUtility_h_1330135137(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDevelopmentUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaDevelopmentUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
