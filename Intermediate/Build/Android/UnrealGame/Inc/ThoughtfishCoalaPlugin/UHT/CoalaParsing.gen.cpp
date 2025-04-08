// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaParsing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaParsing() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaParsing();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaParsing_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaParsing::execParseCustomPOISuggestionsResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonRaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCoalaParsing::ParseCustomPOISuggestionsResponse(Z_Param_JsonRaw);
		P_NATIVE_END;
	}
	void UCoalaParsing::StaticRegisterNativesUCoalaParsing()
	{
		UClass* Class = UCoalaParsing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParseCustomPOISuggestionsResponse", &UCoalaParsing::execParseCustomPOISuggestionsResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics
	{
		struct CoalaParsing_eventParseCustomPOISuggestionsResponse_Parms
		{
			FString JsonRaw;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonRaw;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_JsonRaw = { "JsonRaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaParsing_eventParseCustomPOISuggestionsResponse_Parms, JsonRaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaParsing_eventParseCustomPOISuggestionsResponse_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_JsonRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala" },
		{ "ModuleRelativePath", "Public/CoalaParsing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaParsing, nullptr, "ParseCustomPOISuggestionsResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::CoalaParsing_eventParseCustomPOISuggestionsResponse_Parms), Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaParsing);
	UClass* Z_Construct_UClass_UCoalaParsing_NoRegister()
	{
		return UCoalaParsing::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaParsing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaParsing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaParsing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaParsing_ParseCustomPOISuggestionsResponse, "ParseCustomPOISuggestionsResponse" }, // 201227794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaParsing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaParsing.h" },
		{ "ModuleRelativePath", "Public/CoalaParsing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaParsing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaParsing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaParsing_Statics::ClassParams = {
		&UCoalaParsing::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaParsing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaParsing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaParsing()
	{
		if (!Z_Registration_Info_UClass_UCoalaParsing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaParsing.OuterSingleton, Z_Construct_UClass_UCoalaParsing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaParsing.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaParsing>()
	{
		return UCoalaParsing::StaticClass();
	}
	UCoalaParsing::UCoalaParsing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaParsing);
	UCoalaParsing::~UCoalaParsing() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaParsing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaParsing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaParsing, UCoalaParsing::StaticClass, TEXT("UCoalaParsing"), &Z_Registration_Info_UClass_UCoalaParsing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaParsing), 1521893671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaParsing_h_2445705994(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaParsing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaParsing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
