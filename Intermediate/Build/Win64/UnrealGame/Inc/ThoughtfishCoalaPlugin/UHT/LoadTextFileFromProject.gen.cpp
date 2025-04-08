// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/LoadTextFileFromProject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadTextFileFromProject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ULoadTextFileFromProject();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ULoadTextFileFromProject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ULoadTextFileFromProject::execLoadTextFileFromProject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pathInContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULoadTextFileFromProject::LoadTextFileFromProject(Z_Param_pathInContentFolder);
		P_NATIVE_END;
	}
	void ULoadTextFileFromProject::StaticRegisterNativesULoadTextFileFromProject()
	{
		UClass* Class = ULoadTextFileFromProject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTextFileFromProject", &ULoadTextFileFromProject::execLoadTextFileFromProject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics
	{
		struct LoadTextFileFromProject_eventLoadTextFileFromProject_Parms
		{
			FString pathInContentFolder;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_pathInContentFolder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::NewProp_pathInContentFolder = { "pathInContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadTextFileFromProject_eventLoadTextFileFromProject_Parms, pathInContentFolder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadTextFileFromProject_eventLoadTextFileFromProject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::NewProp_pathInContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Utility" },
		{ "DisplayName", "Load text file from project(also from Engine/Plugins/Marketplace/ThoughtfishCoalaPlugin/Content/ folder" },
		{ "ModuleRelativePath", "Public/LoadTextFileFromProject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadTextFileFromProject, nullptr, "LoadTextFileFromProject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::LoadTextFileFromProject_eventLoadTextFileFromProject_Parms), Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadTextFileFromProject);
	UClass* Z_Construct_UClass_ULoadTextFileFromProject_NoRegister()
	{
		return ULoadTextFileFromProject::StaticClass();
	}
	struct Z_Construct_UClass_ULoadTextFileFromProject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadTextFileFromProject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadTextFileFromProject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadTextFileFromProject_LoadTextFileFromProject, "LoadTextFileFromProject" }, // 2062961246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadTextFileFromProject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadTextFileFromProject.h" },
		{ "ModuleRelativePath", "Public/LoadTextFileFromProject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadTextFileFromProject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadTextFileFromProject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadTextFileFromProject_Statics::ClassParams = {
		&ULoadTextFileFromProject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoadTextFileFromProject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadTextFileFromProject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadTextFileFromProject()
	{
		if (!Z_Registration_Info_UClass_ULoadTextFileFromProject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadTextFileFromProject.OuterSingleton, Z_Construct_UClass_ULoadTextFileFromProject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadTextFileFromProject.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ULoadTextFileFromProject>()
	{
		return ULoadTextFileFromProject::StaticClass();
	}
	ULoadTextFileFromProject::ULoadTextFileFromProject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadTextFileFromProject);
	ULoadTextFileFromProject::~ULoadTextFileFromProject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_LoadTextFileFromProject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_LoadTextFileFromProject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadTextFileFromProject, ULoadTextFileFromProject::StaticClass, TEXT("ULoadTextFileFromProject"), &Z_Registration_Info_UClass_ULoadTextFileFromProject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadTextFileFromProject), 3111991522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_LoadTextFileFromProject_h_4154308150(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_LoadTextFileFromProject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_LoadTextFileFromProject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
