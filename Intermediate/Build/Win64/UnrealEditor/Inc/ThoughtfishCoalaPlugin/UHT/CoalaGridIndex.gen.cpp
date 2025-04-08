// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGridIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaGridIndex() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGridIndexShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaGridIndexShadowingFix_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGridIndex();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaGridIndex;
class UScriptStruct* FCoalaGridIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaGridIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaGridIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaGridIndex, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaGridIndex"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaGridIndex.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaGridIndex>()
{
	return FCoalaGridIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaGridIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaGridIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Coala|GridIndex" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaGridIndex, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Coala|GridIndex" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaGridIndex, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewProp_y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaGridIndex",
		sizeof(FCoalaGridIndex),
		alignof(FCoalaGridIndex),
		Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaGridIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaGridIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaGridIndex.InnerSingleton, Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaGridIndex.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaGridIndexShadowingFix::execBreakCoalaGridIndex)
	{
		P_GET_STRUCT(FCoalaGridIndex,Z_Param_InCoalaGridIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaGridIndexShadowingFix::BreakCoalaGridIndex(Z_Param_InCoalaGridIndex,Z_Param_Out_x,Z_Param_Out_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaGridIndexShadowingFix::execMakeCoalaGridIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_STRUCT_REF(FCoalaGridIndex,Z_Param_Out_InCoalaGridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaGridIndexShadowingFix::MakeCoalaGridIndex(Z_Param_x,Z_Param_y,Z_Param_Out_InCoalaGridIndex);
		P_NATIVE_END;
	}
	void UCoalaGridIndexShadowingFix::StaticRegisterNativesUCoalaGridIndexShadowingFix()
	{
		UClass* Class = UCoalaGridIndexShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaGridIndex", &UCoalaGridIndexShadowingFix::execBreakCoalaGridIndex },
			{ "MakeCoalaGridIndex", &UCoalaGridIndexShadowingFix::execMakeCoalaGridIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics
	{
		struct CoalaGridIndexShadowingFix_eventBreakCoalaGridIndex_Parms
		{
			FCoalaGridIndex InCoalaGridIndex;
			int32 x;
			int32 y;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCoalaGridIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_InCoalaGridIndex = { "InCoalaGridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventBreakCoalaGridIndex_Parms, InCoalaGridIndex), Z_Construct_UScriptStruct_FCoalaGridIndex, METADATA_PARAMS(nullptr, 0) }; // 320487432
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventBreakCoalaGridIndex_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventBreakCoalaGridIndex_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_InCoalaGridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|GridIndex" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGridIndexShadowingFix, nullptr, "BreakCoalaGridIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::CoalaGridIndexShadowingFix_eventBreakCoalaGridIndex_Parms), Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics
	{
		struct CoalaGridIndexShadowingFix_eventMakeCoalaGridIndex_Parms
		{
			int32 x;
			int32 y;
			FCoalaGridIndex InCoalaGridIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCoalaGridIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventMakeCoalaGridIndex_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventMakeCoalaGridIndex_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_InCoalaGridIndex = { "InCoalaGridIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaGridIndexShadowingFix_eventMakeCoalaGridIndex_Parms, InCoalaGridIndex), Z_Construct_UScriptStruct_FCoalaGridIndex, METADATA_PARAMS(nullptr, 0) }; // 320487432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::NewProp_InCoalaGridIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|GridIndex" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaGridIndexShadowingFix, nullptr, "MakeCoalaGridIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::CoalaGridIndexShadowingFix_eventMakeCoalaGridIndex_Parms), Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaGridIndexShadowingFix);
	UClass* Z_Construct_UClass_UCoalaGridIndexShadowingFix_NoRegister()
	{
		return UCoalaGridIndexShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaGridIndexShadowingFix_BreakCoalaGridIndex, "BreakCoalaGridIndex" }, // 4256083979
		{ &Z_Construct_UFunction_UCoalaGridIndexShadowingFix_MakeCoalaGridIndex, "MakeCoalaGridIndex" }, // 2915773570
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaGridIndex.h" },
		{ "ModuleRelativePath", "Public/CoalaGridIndex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaGridIndexShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::ClassParams = {
		&UCoalaGridIndexShadowingFix::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaGridIndexShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaGridIndexShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaGridIndexShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaGridIndexShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaGridIndexShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaGridIndexShadowingFix>()
	{
		return UCoalaGridIndexShadowingFix::StaticClass();
	}
	UCoalaGridIndexShadowingFix::UCoalaGridIndexShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaGridIndexShadowingFix);
	UCoalaGridIndexShadowingFix::~UCoalaGridIndexShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ScriptStructInfo[] = {
		{ FCoalaGridIndex::StaticStruct, Z_Construct_UScriptStruct_FCoalaGridIndex_Statics::NewStructOps, TEXT("CoalaGridIndex"), &Z_Registration_Info_UScriptStruct_CoalaGridIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaGridIndex), 320487432U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaGridIndexShadowingFix, UCoalaGridIndexShadowingFix::StaticClass, TEXT("UCoalaGridIndexShadowingFix"), &Z_Registration_Info_UClass_UCoalaGridIndexShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaGridIndexShadowingFix), 2741975048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_792324120(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaGridIndex_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
