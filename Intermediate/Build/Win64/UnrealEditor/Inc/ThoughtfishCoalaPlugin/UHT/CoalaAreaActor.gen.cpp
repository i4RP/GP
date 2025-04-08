// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaAreaActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaAreaActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaAreaActor();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaAreaActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaMeshActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAreaActorShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaAreaActorShadowingFix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void ACoalaAreaActor::StaticRegisterNativesACoalaAreaActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaAreaActor);
	UClass* Z_Construct_UClass_ACoalaAreaActor_NoRegister()
	{
		return ACoalaAreaActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaAreaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_markedForDestruction_MetaData[];
#endif
		static void NewProp_markedForDestruction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_markedForDestruction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shutdown_MetaData[];
#endif
		static void NewProp_shutdown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shutdown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaAreaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaAreaActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaAreaActor.h" },
		{ "ModuleRelativePath", "Public/CoalaAreaActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction_MetaData[] = {
		{ "Category", "Coala" },
		{ "ModuleRelativePath", "Public/CoalaAreaActor.h" },
	};
#endif
	void Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction_SetBit(void* Obj)
	{
		((ACoalaAreaActor*)Obj)->markedForDestruction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction = { "markedForDestruction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACoalaAreaActor), &Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown_MetaData[] = {
		{ "Category", "Coala" },
		{ "ModuleRelativePath", "Public/CoalaAreaActor.h" },
	};
#endif
	void Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown_SetBit(void* Obj)
	{
		((ACoalaAreaActor*)Obj)->shutdown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown = { "shutdown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACoalaAreaActor), &Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoalaAreaActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_markedForDestruction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaAreaActor_Statics::NewProp_shutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaAreaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaAreaActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaAreaActor_Statics::ClassParams = {
		&ACoalaAreaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoalaAreaActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaAreaActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaAreaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaAreaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaAreaActor()
	{
		if (!Z_Registration_Info_UClass_ACoalaAreaActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaAreaActor.OuterSingleton, Z_Construct_UClass_ACoalaAreaActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaAreaActor.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaAreaActor>()
	{
		return ACoalaAreaActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaAreaActor);
	DEFINE_FUNCTION(UCoalaAreaActorShadowingFix::execBreakSceneObject)
	{
		P_GET_OBJECT(ACoalaAreaActor,Z_Param_Area);
		P_GET_OBJECT_REF(ACoalaMeshActor,Z_Param_Out_RefAreaDimensions);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllCells);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllWaters);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllBuildings);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllPOIs);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllStreets);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllCrimes);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllCrimePins);
		P_GET_OBJECT_REF(ACoalaActor,Z_Param_Out_RefAllHeatMapTokens);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaAreaActorShadowingFix::BreakSceneObject(Z_Param_Area,Z_Param_Out_RefAreaDimensions,Z_Param_Out_RefAllCells,Z_Param_Out_RefAllWaters,Z_Param_Out_RefAllBuildings,Z_Param_Out_RefAllPOIs,Z_Param_Out_RefAllStreets,Z_Param_Out_RefAllCrimes,Z_Param_Out_RefAllCrimePins,Z_Param_Out_RefAllHeatMapTokens);
		P_NATIVE_END;
	}
	void UCoalaAreaActorShadowingFix::StaticRegisterNativesUCoalaAreaActorShadowingFix()
	{
		UClass* Class = UCoalaAreaActorShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakSceneObject", &UCoalaAreaActorShadowingFix::execBreakSceneObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics
	{
		struct CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms
		{
			ACoalaAreaActor* Area;
			ACoalaMeshActor* RefAreaDimensions;
			ACoalaActor* RefAllCells;
			ACoalaActor* RefAllWaters;
			ACoalaActor* RefAllBuildings;
			ACoalaActor* RefAllPOIs;
			ACoalaActor* RefAllStreets;
			ACoalaActor* RefAllCrimes;
			ACoalaActor* RefAllCrimePins;
			ACoalaActor* RefAllHeatMapTokens;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAreaDimensions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllCells;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllWaters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllBuildings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllPOIs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllStreets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllCrimes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllCrimePins;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefAllHeatMapTokens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, Area), Z_Construct_UClass_ACoalaAreaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAreaDimensions = { "RefAreaDimensions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAreaDimensions), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCells = { "RefAllCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllCells), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllWaters = { "RefAllWaters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllWaters), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllBuildings = { "RefAllBuildings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllBuildings), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllPOIs = { "RefAllPOIs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllPOIs), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllStreets = { "RefAllStreets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllStreets), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCrimes = { "RefAllCrimes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllCrimes), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCrimePins = { "RefAllCrimePins", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllCrimePins), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllHeatMapTokens = { "RefAllHeatMapTokens", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms, RefAllHeatMapTokens), Z_Construct_UClass_ACoalaActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAreaDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllWaters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllBuildings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllPOIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllStreets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCrimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllCrimePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::NewProp_RefAllHeatMapTokens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Actor" },
		{ "ModuleRelativePath", "Public/CoalaAreaActor.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaAreaActorShadowingFix, nullptr, "BreakSceneObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::CoalaAreaActorShadowingFix_eventBreakSceneObject_Parms), Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaAreaActorShadowingFix);
	UClass* Z_Construct_UClass_UCoalaAreaActorShadowingFix_NoRegister()
	{
		return UCoalaAreaActorShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaAreaActorShadowingFix_BreakSceneObject, "BreakSceneObject" }, // 3261455132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaAreaActor.h" },
		{ "ModuleRelativePath", "Public/CoalaAreaActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaAreaActorShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::ClassParams = {
		&UCoalaAreaActorShadowingFix::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaAreaActorShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaAreaActorShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaAreaActorShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaAreaActorShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaAreaActorShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaAreaActorShadowingFix>()
	{
		return UCoalaAreaActorShadowingFix::StaticClass();
	}
	UCoalaAreaActorShadowingFix::UCoalaAreaActorShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaAreaActorShadowingFix);
	UCoalaAreaActorShadowingFix::~UCoalaAreaActorShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaAreaActor, ACoalaAreaActor::StaticClass, TEXT("ACoalaAreaActor"), &Z_Registration_Info_UClass_ACoalaAreaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaAreaActor), 1034079996U) },
		{ Z_Construct_UClass_UCoalaAreaActorShadowingFix, UCoalaAreaActorShadowingFix::StaticClass, TEXT("UCoalaAreaActorShadowingFix"), &Z_Registration_Info_UClass_UCoalaAreaActorShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaAreaActorShadowingFix), 3602851830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaActor_h_1075525616(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaAreaActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
