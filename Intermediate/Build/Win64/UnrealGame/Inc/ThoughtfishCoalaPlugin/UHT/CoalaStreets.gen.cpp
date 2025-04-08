// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaStreets.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaStreet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaStreets() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetsBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreet();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreets();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaStreets;
class UScriptStruct* FCoalaStreets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaStreets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaStreets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaStreets, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaStreets"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaStreets.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaStreets>()
{
	return FCoalaStreets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaStreets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaStreets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaStreets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaStreets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaStreets>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaStreets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaStreets",
		sizeof(FCoalaStreets),
		alignof(FCoalaStreets),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaStreets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaStreets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaStreets()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaStreets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaStreets.InnerSingleton, Z_Construct_UScriptStruct_FCoalaStreets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaStreets.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaStreetsBlueprintLibrary::execBreakCoalaStreets)
	{
		P_GET_STRUCT(FCoalaStreets,Z_Param_inStreets);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_street_typ);
		P_GET_TARRAY_REF(FCoalaStreet,Z_Param_Out_street_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaStreetsBlueprintLibrary::BreakCoalaStreets(Z_Param_inStreets,Z_Param_Out_street_typ,Z_Param_Out_street_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaStreetsBlueprintLibrary::execMakeCoalaStreets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_street_typ);
		P_GET_TARRAY(FCoalaStreet,Z_Param_street_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaStreets*)Z_Param__Result=UCoalaStreetsBlueprintLibrary::MakeCoalaStreets(Z_Param_street_typ,Z_Param_street_data);
		P_NATIVE_END;
	}
	void UCoalaStreetsBlueprintLibrary::StaticRegisterNativesUCoalaStreetsBlueprintLibrary()
	{
		UClass* Class = UCoalaStreetsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaStreets", &UCoalaStreetsBlueprintLibrary::execBreakCoalaStreets },
			{ "MakeCoalaStreets", &UCoalaStreetsBlueprintLibrary::execMakeCoalaStreets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics
	{
		struct CoalaStreetsBlueprintLibrary_eventBreakCoalaStreets_Parms
		{
			FCoalaStreets inStreets;
			FString street_typ;
			TArray<FCoalaStreet> street_data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inStreets;
		static const UECodeGen_Private::FStrPropertyParams NewProp_street_typ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_street_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_street_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_inStreets = { "inStreets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventBreakCoalaStreets_Parms, inStreets), Z_Construct_UScriptStruct_FCoalaStreets, METADATA_PARAMS(nullptr, 0) }; // 1018305582
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_typ = { "street_typ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventBreakCoalaStreets_Parms, street_typ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_data_Inner = { "street_data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaStreet, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_data = { "street_data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventBreakCoalaStreets_Parms, street_data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_inStreets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_typ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::NewProp_street_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Streets" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break street wrapper" },
		{ "ModuleRelativePath", "Public/CoalaStreets.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaStreetsBlueprintLibrary, nullptr, "BreakCoalaStreets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::CoalaStreetsBlueprintLibrary_eventBreakCoalaStreets_Parms), Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics
	{
		struct CoalaStreetsBlueprintLibrary_eventMakeCoalaStreets_Parms
		{
			FString street_typ;
			TArray<FCoalaStreet> street_data;
			FCoalaStreets ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_street_typ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_street_data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_street_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_typ = { "street_typ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventMakeCoalaStreets_Parms, street_typ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_data_Inner = { "street_data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaStreet, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_data = { "street_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventMakeCoalaStreets_Parms, street_data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1684612337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaStreetsBlueprintLibrary_eventMakeCoalaStreets_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaStreets, METADATA_PARAMS(nullptr, 0) }; // 1018305582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_typ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_street_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Variables|Streets" },
		{ "Comment", "/** Makes a coala streets collection {street_typ, street_data} */" },
		{ "DisplayName", "Make street wrapper" },
		{ "ModuleRelativePath", "Public/CoalaStreets.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala streets collection {street_typ, street_data}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaStreetsBlueprintLibrary, nullptr, "MakeCoalaStreets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::CoalaStreetsBlueprintLibrary_eventMakeCoalaStreets_Parms), Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaStreetsBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_NoRegister()
	{
		return UCoalaStreetsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_BreakCoalaStreets, "BreakCoalaStreets" }, // 2974135638
		{ &Z_Construct_UFunction_UCoalaStreetsBlueprintLibrary_MakeCoalaStreets, "MakeCoalaStreets" }, // 3145755130
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaStreets.h" },
		{ "ModuleRelativePath", "Public/CoalaStreets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaStreetsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::ClassParams = {
		&UCoalaStreetsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaStreetsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaStreetsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaStreetsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaStreetsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaStreetsBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaStreetsBlueprintLibrary>()
	{
		return UCoalaStreetsBlueprintLibrary::StaticClass();
	}
	UCoalaStreetsBlueprintLibrary::UCoalaStreetsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaStreetsBlueprintLibrary);
	UCoalaStreetsBlueprintLibrary::~UCoalaStreetsBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ScriptStructInfo[] = {
		{ FCoalaStreets::StaticStruct, Z_Construct_UScriptStruct_FCoalaStreets_Statics::NewStructOps, TEXT("CoalaStreets"), &Z_Registration_Info_UScriptStruct_CoalaStreets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaStreets), 1018305582U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaStreetsBlueprintLibrary, UCoalaStreetsBlueprintLibrary::StaticClass, TEXT("UCoalaStreetsBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaStreetsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaStreetsBlueprintLibrary), 3443020136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_1310229822(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaStreets_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
