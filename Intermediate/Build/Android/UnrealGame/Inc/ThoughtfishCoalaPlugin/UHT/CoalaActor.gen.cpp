// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ACoalaActor::execGetAllCoalaMeshActorChildren)
	{
		P_GET_OBJECT(ACoalaActor,Z_Param_RefObjekt);
		P_GET_TARRAY_REF(ACoalaMeshActor*,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		ACoalaActor::GetAllCoalaMeshActorChildren(Z_Param_RefObjekt,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	void ACoalaActor::StaticRegisterNativesACoalaActor()
	{
		UClass* Class = ACoalaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllCoalaMeshActorChildren", &ACoalaActor::execGetAllCoalaMeshActorChildren },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics
	{
		struct CoalaActor_eventGetAllCoalaMeshActorChildren_Parms
		{
			ACoalaActor* RefObjekt;
			TArray<ACoalaMeshActor*> Values;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefObjekt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_RefObjekt = { "RefObjekt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaActor_eventGetAllCoalaMeshActorChildren_Parms, RefObjekt), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaActor_eventGetAllCoalaMeshActorChildren_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_RefObjekt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Actor" },
		{ "ModuleRelativePath", "Public/CoalaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaActor, nullptr, "GetAllCoalaMeshActorChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::CoalaActor_eventGetAllCoalaMeshActorChildren_Parms), Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaActor);
	UClass* Z_Construct_UClass_ACoalaActor_NoRegister()
	{
		return ACoalaActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoalaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoalaActor_GetAllCoalaMeshActorChildren, "GetAllCoalaMeshActorChildren" }, // 902161947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaActor.h" },
		{ "ModuleRelativePath", "Public/CoalaActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaActor_Statics::ClassParams = {
		&ACoalaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaActor()
	{
		if (!Z_Registration_Info_UClass_ACoalaActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaActor.OuterSingleton, Z_Construct_UClass_ACoalaActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaActor.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaActor>()
	{
		return ACoalaActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaActor);
	ACoalaActor::~ACoalaActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaActor, ACoalaActor::StaticClass, TEXT("ACoalaActor"), &Z_Registration_Info_UClass_ACoalaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaActor), 3634973222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaActor_h_3096324247(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
