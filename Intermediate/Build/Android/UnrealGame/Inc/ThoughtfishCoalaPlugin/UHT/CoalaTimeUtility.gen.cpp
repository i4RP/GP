// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTimeUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaTimeUtility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTimeUtility();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTimeUtility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaTimeUtility::execGetUnixTimestampNowString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCoalaTimeUtility::GetUnixTimestampNowString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaTimeUtility::execGetUnixTimestampNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UCoalaTimeUtility::GetUnixTimestampNow();
		P_NATIVE_END;
	}
	void UCoalaTimeUtility::StaticRegisterNativesUCoalaTimeUtility()
	{
		UClass* Class = UCoalaTimeUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnixTimestampNow", &UCoalaTimeUtility::execGetUnixTimestampNow },
			{ "GetUnixTimestampNowString", &UCoalaTimeUtility::execGetUnixTimestampNowString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics
	{
		struct CoalaTimeUtility_eventGetUnixTimestampNow_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTimeUtility_eventGetUnixTimestampNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaTimeUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTimeUtility, nullptr, "GetUnixTimestampNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::CoalaTimeUtility_eventGetUnixTimestampNow_Parms), Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics
	{
		struct CoalaTimeUtility_eventGetUnixTimestampNowString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTimeUtility_eventGetUnixTimestampNowString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "ModuleRelativePath", "Public/CoalaTimeUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTimeUtility, nullptr, "GetUnixTimestampNowString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::CoalaTimeUtility_eventGetUnixTimestampNowString_Parms), Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTimeUtility);
	UClass* Z_Construct_UClass_UCoalaTimeUtility_NoRegister()
	{
		return UCoalaTimeUtility::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTimeUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTimeUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTimeUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNow, "GetUnixTimestampNow" }, // 4275160479
		{ &Z_Construct_UFunction_UCoalaTimeUtility_GetUnixTimestampNowString, "GetUnixTimestampNowString" }, // 3292341432
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTimeUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaTimeUtility.h" },
		{ "ModuleRelativePath", "Public/CoalaTimeUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTimeUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTimeUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTimeUtility_Statics::ClassParams = {
		&UCoalaTimeUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTimeUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTimeUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTimeUtility()
	{
		if (!Z_Registration_Info_UClass_UCoalaTimeUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTimeUtility.OuterSingleton, Z_Construct_UClass_UCoalaTimeUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTimeUtility.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTimeUtility>()
	{
		return UCoalaTimeUtility::StaticClass();
	}
	UCoalaTimeUtility::UCoalaTimeUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTimeUtility);
	UCoalaTimeUtility::~UCoalaTimeUtility() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTimeUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTimeUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaTimeUtility, UCoalaTimeUtility::StaticClass, TEXT("UCoalaTimeUtility"), &Z_Registration_Info_UClass_UCoalaTimeUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTimeUtility), 2488104695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTimeUtility_h_1941558235(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTimeUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTimeUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
