// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/BluePrintHttpGetRequestTransportation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBluePrintHttpGetRequestTransportation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequestTransportation();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms
		{
			TransportationType transportationType;
			FString response;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_transportationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_transportationType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_transportationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_transportationType = { "transportationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms, transportationType), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(nullptr, 0) }; // 609406224
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_transportationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_transportationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Generate a delegate for the OnGetResult event\n" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
		{ "ToolTip", "Generate a delegate for the OnGetResult event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "OnSuccessTransportation__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSuccessTransportation_DelegateWrapper(const FMulticastScriptDelegate& OnSuccessTransportation, TransportationType transportationType, const FString& response)
{
	struct _Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms
	{
		TransportationType transportationType;
		FString response;
	};
	_Script_ThoughtfishCoalaPlugin_eventOnSuccessTransportation_Parms Parms;
	Parms.transportationType=transportationType;
	Parms.response=response;
	OnSuccessTransportation.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventOnErrorTransportation_Parms
		{
			FString reason;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnErrorTransportation_Parms, reason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::NewProp_reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "OnErrorTransportation__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventOnErrorTransportation_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnErrorTransportation_DelegateWrapper(const FMulticastScriptDelegate& OnErrorTransportation, const FString& reason)
{
	struct _Script_ThoughtfishCoalaPlugin_eventOnErrorTransportation_Parms
	{
		FString reason;
	};
	_Script_ThoughtfishCoalaPlugin_eventOnErrorTransportation_Parms Parms;
	Parms.reason=reason;
	OnErrorTransportation.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UBluePrintHttpGetRequestTransportation::StaticRegisterNativesUBluePrintHttpGetRequestTransportation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBluePrintHttpGetRequestTransportation);
	UClass* Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_NoRegister()
	{
		return UBluePrintHttpGetRequestTransportation::StaticClass();
	}
	struct Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UECodeGen_Private::FBytePropertyParams NewProp_transportationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transportationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_transportationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Coala|Transportation" },
		{ "IncludePath", "BluePrintHttpGetRequestTransportation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluePrintHttpGetRequestTransportation, OnSuccess), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccessTransportation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnSuccess_MetaData)) }; // 4268734987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnError_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluePrintHttpGetRequestTransportation, OnError), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnErrorTransportation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnError_MetaData)) }; // 3647575092
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequestTransportation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType = { "transportationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluePrintHttpGetRequestTransportation, transportationType), Z_Construct_UEnum_ThoughtfishCoalaPlugin_TransportationType, METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType_MetaData)) }; // 609406224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_OnError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::NewProp_transportationType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBluePrintHttpGetRequestTransportation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::ClassParams = {
		&UBluePrintHttpGetRequestTransportation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBluePrintHttpGetRequestTransportation()
	{
		if (!Z_Registration_Info_UClass_UBluePrintHttpGetRequestTransportation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluePrintHttpGetRequestTransportation.OuterSingleton, Z_Construct_UClass_UBluePrintHttpGetRequestTransportation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBluePrintHttpGetRequestTransportation.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UBluePrintHttpGetRequestTransportation>()
	{
		return UBluePrintHttpGetRequestTransportation::StaticClass();
	}
	UBluePrintHttpGetRequestTransportation::UBluePrintHttpGetRequestTransportation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBluePrintHttpGetRequestTransportation);
	UBluePrintHttpGetRequestTransportation::~UBluePrintHttpGetRequestTransportation() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequestTransportation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequestTransportation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBluePrintHttpGetRequestTransportation, UBluePrintHttpGetRequestTransportation::StaticClass, TEXT("UBluePrintHttpGetRequestTransportation"), &Z_Registration_Info_UClass_UBluePrintHttpGetRequestTransportation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluePrintHttpGetRequestTransportation), 2900340090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequestTransportation_h_3122940047(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequestTransportation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequestTransportation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
