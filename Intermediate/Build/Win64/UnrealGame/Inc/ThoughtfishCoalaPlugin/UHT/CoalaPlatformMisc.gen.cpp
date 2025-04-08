// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlatformMisc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPlatformMisc() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlatformMisc();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlatformMisc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaPlatformMisc::execGetDeviceIdForCurrentPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaPlatformMisc::GetDeviceIdForCurrentPlatform();
		P_NATIVE_END;
	}
	void UCoalaPlatformMisc::StaticRegisterNativesUCoalaPlatformMisc()
	{
		UClass* Class = UCoalaPlatformMisc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceIdForCurrentPlatform", &UCoalaPlatformMisc::execGetDeviceIdForCurrentPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics
	{
		struct CoalaPlatformMisc_eventGetDeviceIdForCurrentPlatform_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlatformMisc_eventGetDeviceIdForCurrentPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaPlatformMisc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlatformMisc, nullptr, "GetDeviceIdForCurrentPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::CoalaPlatformMisc_eventGetDeviceIdForCurrentPlatform_Parms), Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaPlatformMisc);
	UClass* Z_Construct_UClass_UCoalaPlatformMisc_NoRegister()
	{
		return UCoalaPlatformMisc::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaPlatformMisc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaPlatformMisc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaPlatformMisc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaPlatformMisc_GetDeviceIdForCurrentPlatform, "GetDeviceIdForCurrentPlatform" }, // 4131950797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlatformMisc_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaPlatformMisc.h" },
		{ "ModuleRelativePath", "Public/CoalaPlatformMisc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaPlatformMisc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaPlatformMisc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaPlatformMisc_Statics::ClassParams = {
		&UCoalaPlatformMisc::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaPlatformMisc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlatformMisc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaPlatformMisc()
	{
		if (!Z_Registration_Info_UClass_UCoalaPlatformMisc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaPlatformMisc.OuterSingleton, Z_Construct_UClass_UCoalaPlatformMisc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaPlatformMisc.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaPlatformMisc>()
	{
		return UCoalaPlatformMisc::StaticClass();
	}
	UCoalaPlatformMisc::UCoalaPlatformMisc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaPlatformMisc);
	UCoalaPlatformMisc::~UCoalaPlatformMisc() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlatformMisc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlatformMisc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaPlatformMisc, UCoalaPlatformMisc::StaticClass, TEXT("UCoalaPlatformMisc"), &Z_Registration_Info_UClass_UCoalaPlatformMisc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaPlatformMisc), 4036838157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlatformMisc_h_1588986075(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlatformMisc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlatformMisc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
