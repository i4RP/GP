// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/Agency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgency() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UAgency();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UAgency_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAgencyShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAgencyShadowingFix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UAgency::StaticRegisterNativesUAgency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgency);
	UClass* Z_Construct_UClass_UAgency_NoRegister()
	{
		return UAgency::StaticClass();
	}
	struct Z_Construct_UClass_UAgency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fareURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fareURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "IncludePath", "Agency.h" },
		{ "ModuleRelativePath", "Public/Agency.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgency_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Coala|Transportation|Agency" },
		{ "ModuleRelativePath", "Public/Agency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAgency_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAgency, name), METADATA_PARAMS(Z_Construct_UClass_UAgency_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgency_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgency_Statics::NewProp_url_MetaData[] = {
		{ "Category", "Coala|Transportation|Agency" },
		{ "ModuleRelativePath", "Public/Agency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAgency_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAgency, url), METADATA_PARAMS(Z_Construct_UClass_UAgency_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgency_Statics::NewProp_url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgency_Statics::NewProp_fareURL_MetaData[] = {
		{ "Category", "Coala|Transportation|Agency" },
		{ "ModuleRelativePath", "Public/Agency.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAgency_Statics::NewProp_fareURL = { "fareURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAgency, fareURL), METADATA_PARAMS(Z_Construct_UClass_UAgency_Statics::NewProp_fareURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAgency_Statics::NewProp_fareURL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgency_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgency_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgency_Statics::NewProp_fareURL,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgency_Statics::ClassParams = {
		&UAgency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAgency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAgency_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAgency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgency()
	{
		if (!Z_Registration_Info_UClass_UAgency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgency.OuterSingleton, Z_Construct_UClass_UAgency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAgency.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UAgency>()
	{
		return UAgency::StaticClass();
	}
	UAgency::UAgency(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgency);
	UAgency::~UAgency() {}
	DEFINE_FUNCTION(UCoalaAgencyShadowingFix::execBreakAgency)
	{
		P_GET_OBJECT(UAgency,Z_Param_InAgency);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAgencyShadowingFix::BreakAgency(Z_Param_InAgency,Z_Param_Out_name,Z_Param_Out_url);
		P_NATIVE_END;
	}
	void UCoalaAgencyShadowingFix::StaticRegisterNativesUCoalaAgencyShadowingFix()
	{
		UClass* Class = UCoalaAgencyShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakAgency", &UCoalaAgencyShadowingFix::execBreakAgency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics
	{
		struct CoalaAgencyShadowingFix_eventBreakAgency_Parms
		{
			UAgency* InAgency;
			FString name;
			FString url;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAgency;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_InAgency = { "InAgency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAgencyShadowingFix_eventBreakAgency_Parms, InAgency), Z_Construct_UClass_UAgency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAgencyShadowingFix_eventBreakAgency_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAgencyShadowingFix_eventBreakAgency_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_InAgency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation|Agency" },
		{ "ModuleRelativePath", "Public/Agency.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAgencyShadowingFix, nullptr, "BreakAgency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::CoalaAgencyShadowingFix_eventBreakAgency_Parms), Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaAgencyShadowingFix);
	UClass* Z_Construct_UClass_UCoalaAgencyShadowingFix_NoRegister()
	{
		return UCoalaAgencyShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaAgencyShadowingFix_BreakAgency, "BreakAgency" }, // 3193444115
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Agency.h" },
		{ "ModuleRelativePath", "Public/Agency.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaAgencyShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::ClassParams = {
		&UCoalaAgencyShadowingFix::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaAgencyShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaAgencyShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaAgencyShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaAgencyShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaAgencyShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaAgencyShadowingFix>()
	{
		return UCoalaAgencyShadowingFix::StaticClass();
	}
	UCoalaAgencyShadowingFix::UCoalaAgencyShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaAgencyShadowingFix);
	UCoalaAgencyShadowingFix::~UCoalaAgencyShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Agency_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Agency_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAgency, UAgency::StaticClass, TEXT("UAgency"), &Z_Registration_Info_UClass_UAgency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgency), 1160870923U) },
		{ Z_Construct_UClass_UCoalaAgencyShadowingFix, UCoalaAgencyShadowingFix::StaticClass, TEXT("UCoalaAgencyShadowingFix"), &Z_Registration_Info_UClass_UCoalaAgencyShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaAgencyShadowingFix), 1884773204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Agency_h_3210423252(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Agency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Agency_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
