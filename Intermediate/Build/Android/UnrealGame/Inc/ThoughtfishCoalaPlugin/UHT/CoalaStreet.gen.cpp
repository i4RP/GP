// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaStreet.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaStreet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreet();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaStreet;
class UScriptStruct* FCoalaStreet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaStreet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaStreet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaStreet, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaStreet"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaStreet.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaStreet>()
{
	return FCoalaStreet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaStreet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaStreet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaStreet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaStreet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaStreet>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaStreet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaStreet",
		sizeof(FCoalaStreet),
		alignof(FCoalaStreet),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaStreet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaStreet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreet()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaStreet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaStreet.InnerSingleton, Z_Construct_UScriptStruct_FCoalaStreet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaStreet.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaStreetBlueprintLibrary::execBreakCoalaStreet)
	{
		P_GET_STRUCT(FCoalaStreet,Z_Param_inStreet);
		P_GET_TARRAY_REF(FCoalaGPSCoordinates,Z_Param_Out_street_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaStreetBlueprintLibrary::BreakCoalaStreet(Z_Param_inStreet,Z_Param_Out_street_points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaStreetBlueprintLibrary::execMakeCoalaStreet)
	{
		P_GET_TARRAY(FCoalaGPSCoordinates,Z_Param_street_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaStreet*)Z_Param__Result=UCoalaStreetBlueprintLibrary::MakeCoalaStreet(Z_Param_street_points);
		P_NATIVE_END;
	}
	void UCoalaStreetBlueprintLibrary::StaticRegisterNativesUCoalaStreetBlueprintLibrary()
	{
		UClass* Class = UCoalaStreetBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaStreet", &UCoalaStreetBlueprintLibrary::execBreakCoalaStreet },
			{ "MakeCoalaStreet", &UCoalaStreetBlueprintLibrary::execMakeCoalaStreet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics
	{
		struct CoalaStreetBlueprintLibrary_eventBreakCoalaStreet_Parms
		{
			FCoalaStreet inStreet;
			TArray<FCoalaGPSCoordinates> street_points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inStreet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_street_points_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_street_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_inStreet = { "inStreet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetBlueprintLibrary_eventBreakCoalaStreet_Parms, inStreet), Z_Construct_UScriptStruct_FCoalaStreet, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_street_points_Inner = { "street_points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_street_points = { "street_points", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetBlueprintLibrary_eventBreakCoalaStreet_Parms, street_points), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_inStreet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_street_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::NewProp_street_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Street" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break coala street" },
		{ "ModuleRelativePath", "Public/CoalaStreet.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaStreetBlueprintLibrary, nullptr, "BreakCoalaStreet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::CoalaStreetBlueprintLibrary_eventBreakCoalaStreet_Parms), Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics
	{
		struct CoalaStreetBlueprintLibrary_eventMakeCoalaStreet_Parms
		{
			TArray<FCoalaGPSCoordinates> street_points;
			FCoalaStreet ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_street_points_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_street_points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_street_points_Inner = { "street_points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_street_points = { "street_points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetBlueprintLibrary_eventMakeCoalaStreet_Parms, street_points), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetBlueprintLibrary_eventMakeCoalaStreet_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaStreet, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_street_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_street_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Street" },
		{ "Comment", "/** Makes a coala streets collection {street_typ, street_data} */" },
		{ "DisplayName", "Make coala street" },
		{ "ModuleRelativePath", "Public/CoalaStreet.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala streets collection {street_typ, street_data}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaStreetBlueprintLibrary, nullptr, "MakeCoalaStreet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::CoalaStreetBlueprintLibrary_eventMakeCoalaStreet_Parms), Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaStreetBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaStreetBlueprintLibrary_NoRegister()
	{
		return UCoalaStreetBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_BreakCoalaStreet, "BreakCoalaStreet" }, // 1514789583
		{ &Z_Construct_UFunction_UCoalaStreetBlueprintLibrary_MakeCoalaStreet, "MakeCoalaStreet" }, // 490021139
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaStreet.h" },
		{ "ModuleRelativePath", "Public/CoalaStreet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaStreetBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::ClassParams = {
		&UCoalaStreetBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaStreetBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaStreetBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaStreetBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaStreetBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaStreetBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaStreetBlueprintLibrary>()
	{
		return UCoalaStreetBlueprintLibrary::StaticClass();
	}
	UCoalaStreetBlueprintLibrary::UCoalaStreetBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaStreetBlueprintLibrary);
	UCoalaStreetBlueprintLibrary::~UCoalaStreetBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ScriptStructInfo[] = {
		{ FCoalaStreet::StaticStruct, Z_Construct_UScriptStruct_FCoalaStreet_Statics::NewStructOps, TEXT("CoalaStreet"), &Z_Registration_Info_UScriptStruct_CoalaStreet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaStreet), 1684612337U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaStreetBlueprintLibrary, UCoalaStreetBlueprintLibrary::StaticClass, TEXT("UCoalaStreetBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaStreetBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaStreetBlueprintLibrary), 2486053460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_4109898255(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
