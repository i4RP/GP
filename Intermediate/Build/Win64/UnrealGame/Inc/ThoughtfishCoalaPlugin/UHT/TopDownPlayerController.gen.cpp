// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/TopDownPlayerController.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ATopDownPlayerController();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ATopDownPlayerController::execGetGpsHitLocationUnderCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaGPSCoordinates*)Z_Param__Result=P_THIS->GetGpsHitLocationUnderCursor();
		P_NATIVE_END;
	}
	void ATopDownPlayerController::StaticRegisterNativesATopDownPlayerController()
	{
		UClass* Class = ATopDownPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGpsHitLocationUnderCursor", &ATopDownPlayerController::execGetGpsHitLocationUnderCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics
	{
		struct TopDownPlayerController_eventGetGpsHitLocationUnderCursor_Parms
		{
			FCoalaGPSCoordinates ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TopDownPlayerController_eventGetGpsHitLocationUnderCursor_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|PlayerController" },
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownPlayerController, nullptr, "GetGpsHitLocationUnderCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::TopDownPlayerController_eventGetGpsHitLocationUnderCursor_Parms), Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPlayerController);
	UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister()
	{
		return ATopDownPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownPlayerController_GetGpsHitLocationUnderCursor, "GetGpsHitLocationUnderCursor" }, // 1956503167
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TopDownPlayerController.h" },
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams = {
		&ATopDownPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton, Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ATopDownPlayerController>()
	{
		return ATopDownPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPlayerController);
	ATopDownPlayerController::~ATopDownPlayerController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TopDownPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TopDownPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPlayerController, ATopDownPlayerController::StaticClass, TEXT("ATopDownPlayerController"), &Z_Registration_Info_UClass_ATopDownPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPlayerController), 3822581250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TopDownPlayerController_h_3224833274(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TopDownPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TopDownPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
