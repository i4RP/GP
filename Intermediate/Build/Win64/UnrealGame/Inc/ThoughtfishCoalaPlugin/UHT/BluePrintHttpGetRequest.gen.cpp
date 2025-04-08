// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/BluePrintHttpGetRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBluePrintHttpGetRequest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequest();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventOnSuccess_Parms
		{
			FString response;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnSuccess_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Generate a delegate for the OnGetResult event\n" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
		{ "ToolTip", "Generate a delegate for the OnGetResult event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "OnSuccess__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventOnSuccess_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnSuccess, const FString& response)
{
	struct _Script_ThoughtfishCoalaPlugin_eventOnSuccess_Parms
	{
		FString response;
	};
	_Script_ThoughtfishCoalaPlugin_eventOnSuccess_Parms Parms;
	Parms.response=response;
	OnSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventOnError_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnError_Parms, reason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::NewProp_reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "OnError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventOnError_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnError_DelegateWrapper(const FMulticastScriptDelegate& OnError, const FString& reason)
{
	struct _Script_ThoughtfishCoalaPlugin_eventOnError_Parms
	{
		FString reason;
	};
	_Script_ThoughtfishCoalaPlugin_eventOnError_Parms Parms;
	Parms.reason=reason;
	OnError.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBluePrintHttpGetRequest::execStartRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBluePrintHttpGetRequest**)Z_Param__Result=UBluePrintHttpGetRequest::StartRequest(Z_Param_url);
		P_NATIVE_END;
	}
	void UBluePrintHttpGetRequest::StaticRegisterNativesUBluePrintHttpGetRequest()
	{
		UClass* Class = UBluePrintHttpGetRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartRequest", &UBluePrintHttpGetRequest::execStartRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics
	{
		struct BluePrintHttpGetRequest_eventStartRequest_Parms
		{
			FString url;
			UBluePrintHttpGetRequest* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BluePrintHttpGetRequest_eventStartRequest_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_url_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BluePrintHttpGetRequest_eventStartRequest_Parms, ReturnValue), Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|http" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBluePrintHttpGetRequest, nullptr, "StartRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::BluePrintHttpGetRequest_eventStartRequest_Parms), Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBluePrintHttpGetRequest);
	UClass* Z_Construct_UClass_UBluePrintHttpGetRequest_NoRegister()
	{
		return UBluePrintHttpGetRequest::StaticClass();
	}
	struct Z_Construct_UClass_UBluePrintHttpGetRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBluePrintHttpGetRequest_StartRequest, "StartRequest" }, // 3970045301
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Coala|http" },
		{ "IncludePath", "BluePrintHttpGetRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "Coala|http" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluePrintHttpGetRequest, OnSuccess), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnSuccess_MetaData)) }; // 1928954322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnError_MetaData[] = {
		{ "Category", "Coala|http" },
		{ "ModuleRelativePath", "Public/BluePrintHttpGetRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBluePrintHttpGetRequest, OnError), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnError_MetaData)) }; // 4018403719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBluePrintHttpGetRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::ClassParams = {
		&UBluePrintHttpGetRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBluePrintHttpGetRequest()
	{
		if (!Z_Registration_Info_UClass_UBluePrintHttpGetRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluePrintHttpGetRequest.OuterSingleton, Z_Construct_UClass_UBluePrintHttpGetRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBluePrintHttpGetRequest.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UBluePrintHttpGetRequest>()
	{
		return UBluePrintHttpGetRequest::StaticClass();
	}
	UBluePrintHttpGetRequest::UBluePrintHttpGetRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBluePrintHttpGetRequest);
	UBluePrintHttpGetRequest::~UBluePrintHttpGetRequest() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBluePrintHttpGetRequest, UBluePrintHttpGetRequest::StaticClass, TEXT("UBluePrintHttpGetRequest"), &Z_Registration_Info_UClass_UBluePrintHttpGetRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluePrintHttpGetRequest), 4203700877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequest_h_2701756592(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_BluePrintHttpGetRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
