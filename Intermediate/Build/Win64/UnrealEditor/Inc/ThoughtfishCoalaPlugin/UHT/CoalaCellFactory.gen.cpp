// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCellFactory.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCell.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCellRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCellFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaMeshActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCellFactory();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaCellFactory_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCell();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaCellRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms
		{
			ACoalaMeshActor* cellMeshActor;
			UCoalaArea* area;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cellMeshActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::NewProp_cellMeshActor = { "cellMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms, cellMeshActor), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::NewProp_cellMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCellFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateCellFactoryOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateCellFactoryOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateCellFactoryOnDone, ACoalaMeshActor* cellMeshActor, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms
	{
		ACoalaMeshActor* cellMeshActor;
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateCellFactoryOnDone_Parms Parms;
	Parms.cellMeshActor=cellMeshActor;
	Parms.area=area;
	CoalaDelegateCellFactoryOnDone.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCoalaCellFactory::execCreateCellsAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaCellRenderConfig,Z_Param_defaultRenderConfig);
		P_GET_TARRAY(FCoalaCellRenderConfig,Z_Param_renderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaCellFactory::CreateCellsAsync(Z_Param_area,Z_Param_defaultRenderConfig,Z_Param_renderConfig,FCoalaDelegateCellFactoryOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaCellFactory::execCreateCell)
	{
		P_GET_OBJECT(AActor,Z_Param_spawnActor);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaCell,Z_Param_cell);
		P_GET_STRUCT(FCoalaCellRenderConfig,Z_Param_defaultRenderConfig);
		P_GET_TARRAY(FCoalaCellRenderConfig,Z_Param_renderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACoalaMeshActor**)Z_Param__Result=UCoalaCellFactory::CreateCell(Z_Param_spawnActor,Z_Param_area,Z_Param_cell,Z_Param_defaultRenderConfig,Z_Param_renderConfig);
		P_NATIVE_END;
	}
	void UCoalaCellFactory::StaticRegisterNativesUCoalaCellFactory()
	{
		UClass* Class = UCoalaCellFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCell", &UCoalaCellFactory::execCreateCell },
			{ "CreateCellsAsync", &UCoalaCellFactory::execCreateCellsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics
	{
		struct CoalaCellFactory_eventCreateCell_Parms
		{
			AActor* spawnActor;
			UCoalaArea* area;
			FCoalaCell cell;
			FCoalaCellRenderConfig defaultRenderConfig;
			TArray<FCoalaCellRenderConfig> renderConfig;
			ACoalaMeshActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cell;
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultRenderConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderConfig_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_renderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, spawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_cell = { "cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, cell), Z_Construct_UScriptStruct_FCoalaCell, METADATA_PARAMS(nullptr, 0) }; // 3179001797
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_defaultRenderConfig = { "defaultRenderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, defaultRenderConfig), Z_Construct_UScriptStruct_FCoalaCellRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2506499260
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_renderConfig_Inner = { "renderConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaCellRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2506499260
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_renderConfig = { "renderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, renderConfig), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2506499260
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCell_Parms, ReturnValue), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_spawnActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_defaultRenderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_renderConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_renderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|MeshGenerationExcample" },
		{ "ModuleRelativePath", "Public/CoalaCellFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellFactory, nullptr, "CreateCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::CoalaCellFactory_eventCreateCell_Parms), Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellFactory_CreateCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellFactory_CreateCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics
	{
		struct CoalaCellFactory_eventCreateCellsAsync_Parms
		{
			UCoalaArea* area;
			FCoalaCellRenderConfig defaultRenderConfig;
			TArray<FCoalaCellRenderConfig> renderConfig;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultRenderConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderConfig_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_renderConfig;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCellsAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_defaultRenderConfig = { "defaultRenderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCellsAsync_Parms, defaultRenderConfig), Z_Construct_UScriptStruct_FCoalaCellRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2506499260
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_renderConfig_Inner = { "renderConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaCellRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2506499260
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_renderConfig = { "renderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCellsAsync_Parms, renderConfig), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2506499260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCellFactory_eventCreateCellsAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateCellFactoryOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_onDone_MetaData)) }; // 1140873749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_defaultRenderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_renderConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_renderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDone" },
		{ "Category", "Coala|Async|Create cells" },
		{ "ModuleRelativePath", "Public/CoalaCellFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaCellFactory, nullptr, "CreateCellsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::CoalaCellFactory_eventCreateCellsAsync_Parms), Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaCellFactory);
	UClass* Z_Construct_UClass_UCoalaCellFactory_NoRegister()
	{
		return UCoalaCellFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaCellFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaCellFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaCellFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaCellFactory_CreateCell, "CreateCell" }, // 2688130244
		{ &Z_Construct_UFunction_UCoalaCellFactory_CreateCellsAsync, "CreateCellsAsync" }, // 2253200023
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaCellFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaCellFactory.h" },
		{ "ModuleRelativePath", "Public/CoalaCellFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaCellFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaCellFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaCellFactory_Statics::ClassParams = {
		&UCoalaCellFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaCellFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaCellFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaCellFactory()
	{
		if (!Z_Registration_Info_UClass_UCoalaCellFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaCellFactory.OuterSingleton, Z_Construct_UClass_UCoalaCellFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaCellFactory.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaCellFactory>()
	{
		return UCoalaCellFactory::StaticClass();
	}
	UCoalaCellFactory::UCoalaCellFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaCellFactory);
	UCoalaCellFactory::~UCoalaCellFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaCellFactory, UCoalaCellFactory::StaticClass, TEXT("UCoalaCellFactory"), &Z_Registration_Info_UClass_UCoalaCellFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaCellFactory), 4212887469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellFactory_h_3973550534(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCellFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
