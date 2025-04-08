// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaWaterFactory.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaWaterRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaWaterFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaMeshActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterFactory();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaWaterFactory_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaWaterRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnWaterMeshDone_Parms
		{
			ACoalaMeshActor* waterMeshActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_waterMeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::NewProp_waterMeshActor = { "waterMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnWaterMeshDone_Parms, waterMeshActor), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::NewProp_waterMeshActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaWaterFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnWaterMeshDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateWaterFactoryOnWaterMeshDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateWaterFactoryOnWaterMeshDone, ACoalaMeshActor* waterMeshActor)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnWaterMeshDone_Parms
	{
		ACoalaMeshActor* waterMeshActor;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnWaterMeshDone_Parms Parms;
	Parms.waterMeshActor=waterMeshActor;
	CoalaDelegateWaterFactoryOnWaterMeshDone.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnDone_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaWaterFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateWaterFactoryOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateWaterFactoryOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateWaterFactoryOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateWaterFactoryOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegateWaterFactoryOnDone.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCoalaWaterFactory::execCreateWaterAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaWaterRenderConfig,Z_Param_renderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onWaterCreated);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaWaterFactory::CreateWaterAsync(Z_Param_area,Z_Param_renderConfig,FCoalaDelegateWaterFactoryOnWaterMeshDone(Z_Param_Out_onWaterCreated),FCoalaDelegateWaterFactoryOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	void UCoalaWaterFactory::StaticRegisterNativesUCoalaWaterFactory()
	{
		UClass* Class = UCoalaWaterFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWaterAsync", &UCoalaWaterFactory::execCreateWaterAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics
	{
		struct CoalaWaterFactory_eventCreateWaterAsync_Parms
		{
			UCoalaArea* area;
			FCoalaWaterRenderConfig renderConfig;
			FScriptDelegate onWaterCreated;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onWaterCreated_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onWaterCreated;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterFactory_eventCreateWaterAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_renderConfig = { "renderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterFactory_eventCreateWaterAsync_Parms, renderConfig), Z_Construct_UScriptStruct_FCoalaWaterRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 1822476822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onWaterCreated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onWaterCreated = { "onWaterCreated", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterFactory_eventCreateWaterAsync_Parms, onWaterCreated), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnWaterMeshDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onWaterCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onWaterCreated_MetaData)) }; // 2375772455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaWaterFactory_eventCreateWaterAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateWaterFactoryOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onDone_MetaData)) }; // 2580874463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_renderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onWaterCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onWaterCreated,onDone" },
		{ "Category", "Coala|Water" },
		{ "ModuleRelativePath", "Public/CoalaWaterFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaWaterFactory, nullptr, "CreateWaterAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::CoalaWaterFactory_eventCreateWaterAsync_Parms), Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaWaterFactory);
	UClass* Z_Construct_UClass_UCoalaWaterFactory_NoRegister()
	{
		return UCoalaWaterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaWaterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaWaterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaWaterFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaWaterFactory_CreateWaterAsync, "CreateWaterAsync" }, // 867248118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaWaterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaWaterFactory.h" },
		{ "ModuleRelativePath", "Public/CoalaWaterFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaWaterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaWaterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaWaterFactory_Statics::ClassParams = {
		&UCoalaWaterFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaWaterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaWaterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaWaterFactory()
	{
		if (!Z_Registration_Info_UClass_UCoalaWaterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaWaterFactory.OuterSingleton, Z_Construct_UClass_UCoalaWaterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaWaterFactory.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaWaterFactory>()
	{
		return UCoalaWaterFactory::StaticClass();
	}
	UCoalaWaterFactory::UCoalaWaterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaWaterFactory);
	UCoalaWaterFactory::~UCoalaWaterFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaWaterFactory, UCoalaWaterFactory::StaticClass, TEXT("UCoalaWaterFactory"), &Z_Registration_Info_UClass_UCoalaWaterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaWaterFactory), 736433263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterFactory_h_4041904891(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaWaterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
