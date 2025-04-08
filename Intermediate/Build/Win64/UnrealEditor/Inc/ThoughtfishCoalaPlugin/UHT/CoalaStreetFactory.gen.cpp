// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaStreetFactory.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaStreetRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaStreetFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetFactory();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetFactory_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreetRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateStreetsOnDone_Parms
		{
			UCoalaArea* area;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateStreetsOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaStreetFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateStreetsOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateStreetsOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateStreetsOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateStreetsOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateStreetsOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateStreetsOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegateStreetsOnDone.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCoalaStreetFactory::execCreateStreetsAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaStreetRenderConfig,Z_Param_defaultRenderConfig);
		P_GET_TARRAY(FCoalaStreetRenderConfig,Z_Param_renderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaStreetFactory::CreateStreetsAsync(Z_Param_area,Z_Param_defaultRenderConfig,Z_Param_renderConfig,FCoalaDelegateStreetsOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	void UCoalaStreetFactory::StaticRegisterNativesUCoalaStreetFactory()
	{
		UClass* Class = UCoalaStreetFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStreetsAsync", &UCoalaStreetFactory::execCreateStreetsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics
	{
		struct CoalaStreetFactory_eventCreateStreetsAsync_Parms
		{
			UCoalaArea* area;
			FCoalaStreetRenderConfig defaultRenderConfig;
			TArray<FCoalaStreetRenderConfig> renderConfig;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultRenderConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderConfig_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_renderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetFactory_eventCreateStreetsAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_defaultRenderConfig = { "defaultRenderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetFactory_eventCreateStreetsAsync_Parms, defaultRenderConfig), Z_Construct_UScriptStruct_FCoalaStreetRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2808979177
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_renderConfig_Inner = { "renderConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaStreetRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2808979177
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_renderConfig = { "renderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetFactory_eventCreateStreetsAsync_Parms, renderConfig), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2808979177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetFactory_eventCreateStreetsAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateStreetsOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_onDone_MetaData)) }; // 988512475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_defaultRenderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_renderConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_renderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDone" },
		{ "Category", "Coala|Async|Street" },
		{ "ModuleRelativePath", "Public/CoalaStreetFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaStreetFactory, nullptr, "CreateStreetsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::CoalaStreetFactory_eventCreateStreetsAsync_Parms), Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaStreetFactory);
	UClass* Z_Construct_UClass_UCoalaStreetFactory_NoRegister()
	{
		return UCoalaStreetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaStreetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaStreetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaStreetFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaStreetFactory_CreateStreetsAsync, "CreateStreetsAsync" }, // 3497351210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaStreetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaStreetFactory.h" },
		{ "ModuleRelativePath", "Public/CoalaStreetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaStreetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaStreetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaStreetFactory_Statics::ClassParams = {
		&UCoalaStreetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaStreetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaStreetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaStreetFactory()
	{
		if (!Z_Registration_Info_UClass_UCoalaStreetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaStreetFactory.OuterSingleton, Z_Construct_UClass_UCoalaStreetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaStreetFactory.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaStreetFactory>()
	{
		return UCoalaStreetFactory::StaticClass();
	}
	UCoalaStreetFactory::UCoalaStreetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaStreetFactory);
	UCoalaStreetFactory::~UCoalaStreetFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaStreetFactory, UCoalaStreetFactory::StaticClass, TEXT("UCoalaStreetFactory"), &Z_Registration_Info_UClass_UCoalaStreetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaStreetFactory), 754914695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreetFactory_h_3703825571(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
