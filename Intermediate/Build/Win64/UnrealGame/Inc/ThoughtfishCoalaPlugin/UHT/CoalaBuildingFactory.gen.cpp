// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuildingFactory.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuilding.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuildingRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaBuildingFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaMeshActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingFactory();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingFactory_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuilding();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnDone_Parms
		{
			UCoalaArea* area;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnDone_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaBuildingFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateBuildingsFactoryOnDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnDone_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateBuildingsFactoryOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateBuildingsFactoryOnDone, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnDone_Parms
	{
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnDone_Parms Parms;
	Parms.area=area;
	CoalaDelegateBuildingsFactoryOnDone.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::NewProp_cellMeshActor = { "cellMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms, cellMeshActor), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::NewProp_cellMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::NewProp_area,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaBuildingFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateBuildingsFactoryOnBuildingCreated_DelegateWrapper(const FScriptDelegate& CoalaDelegateBuildingsFactoryOnBuildingCreated, ACoalaMeshActor* cellMeshActor, UCoalaArea* area)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms
	{
		ACoalaMeshActor* cellMeshActor;
		UCoalaArea* area;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateBuildingsFactoryOnBuildingCreated_Parms Parms;
	Parms.cellMeshActor=cellMeshActor;
	Parms.area=area;
	CoalaDelegateBuildingsFactoryOnBuildingCreated.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCoalaBuildingFactory::execCreateBuildingsAsync)
	{
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaBuildingRenderConfig,Z_Param_renderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onBuildingCreated);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBuildingFactory::CreateBuildingsAsync(Z_Param_area,Z_Param_renderConfig,FCoalaDelegateBuildingsFactoryOnBuildingCreated(Z_Param_Out_onBuildingCreated),FCoalaDelegateBuildingsFactoryOnDone(Z_Param_Out_onDone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBuildingFactory::execCreateBuilding)
	{
		P_GET_OBJECT(AActor,Z_Param_spawnActor);
		P_GET_OBJECT(UCoalaArea,Z_Param_area);
		P_GET_STRUCT(FCoalaBuilding,Z_Param_building);
		P_GET_PROPERTY(FIntProperty,Z_Param_createMeshes);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialFloor);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialFoundation);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialWall);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialRoof);
		P_GET_UBOOL(Z_Param_generateUVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_heightPerLevel);
		P_GET_UBOOL(Z_Param_generateCollisions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACoalaMeshActor**)Z_Param__Result=UCoalaBuildingFactory::CreateBuilding(Z_Param_spawnActor,Z_Param_area,Z_Param_building,Z_Param_createMeshes,Z_Param_materialFloor,Z_Param_materialFoundation,Z_Param_materialWall,Z_Param_materialRoof,Z_Param_generateUVs,Z_Param_heightPerLevel,Z_Param_generateCollisions);
		P_NATIVE_END;
	}
	void UCoalaBuildingFactory::StaticRegisterNativesUCoalaBuildingFactory()
	{
		UClass* Class = UCoalaBuildingFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBuilding", &UCoalaBuildingFactory::execCreateBuilding },
			{ "CreateBuildingsAsync", &UCoalaBuildingFactory::execCreateBuildingsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics
	{
		struct CoalaBuildingFactory_eventCreateBuilding_Parms
		{
			AActor* spawnActor;
			UCoalaArea* area;
			FCoalaBuilding building;
			int32 createMeshes;
			UMaterialInterface* materialFloor;
			UMaterialInterface* materialFoundation;
			UMaterialInterface* materialWall;
			UMaterialInterface* materialRoof;
			bool generateUVs;
			float heightPerLevel;
			bool generateCollisions;
			ACoalaMeshActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_building;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_createMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_createMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialFloor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialFoundation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialWall;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialRoof;
		static void NewProp_generateUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateUVs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightPerLevel;
		static void NewProp_generateCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateCollisions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, spawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, building), Z_Construct_UScriptStruct_FCoalaBuilding, METADATA_PARAMS(nullptr, 0) }; // 3918306864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_createMeshes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_createMeshes = { "createMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, createMeshes), METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_createMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_createMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialFloor = { "materialFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, materialFloor), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialFoundation = { "materialFoundation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, materialFoundation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialWall = { "materialWall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, materialWall), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialRoof = { "materialRoof", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, materialRoof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((CoalaBuildingFactory_eventCreateBuilding_Parms*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingFactory_eventCreateBuilding_Parms), &Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_heightPerLevel = { "heightPerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, heightPerLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateCollisions_SetBit(void* Obj)
	{
		((CoalaBuildingFactory_eventCreateBuilding_Parms*)Obj)->generateCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateCollisions = { "generateCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingFactory_eventCreateBuilding_Parms), &Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuilding_Parms, ReturnValue), Z_Construct_UClass_ACoalaMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_spawnActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_createMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialFoundation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_materialRoof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_heightPerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_generateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Building" },
		{ "CPP_Default_generateCollisions", "false" },
		{ "CPP_Default_generateUVs", "false" },
		{ "CPP_Default_heightPerLevel", "500.000000" },
		{ "CPP_Default_materialFloor", "None" },
		{ "CPP_Default_materialFoundation", "None" },
		{ "CPP_Default_materialRoof", "None" },
		{ "CPP_Default_materialWall", "None" },
		{ "ModuleRelativePath", "Public/CoalaBuildingFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingFactory, nullptr, "CreateBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::CoalaBuildingFactory_eventCreateBuilding_Parms), Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics
	{
		struct CoalaBuildingFactory_eventCreateBuildingsAsync_Parms
		{
			UCoalaArea* area;
			FCoalaBuildingRenderConfig renderConfig;
			FScriptDelegate onBuildingCreated;
			FScriptDelegate onDone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_area;
		static const UECodeGen_Private::FStructPropertyParams NewProp_renderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onBuildingCreated_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onBuildingCreated;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuildingsAsync_Parms, area), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_renderConfig = { "renderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuildingsAsync_Parms, renderConfig), Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2672841102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onBuildingCreated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onBuildingCreated = { "onBuildingCreated", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuildingsAsync_Parms, onBuildingCreated), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnBuildingCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onBuildingCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onBuildingCreated_MetaData)) }; // 2061447441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onDone = { "onDone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingFactory_eventCreateBuildingsAsync_Parms, onDone), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateBuildingsFactoryOnDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onDone_MetaData)) }; // 3323217374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_renderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onBuildingCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::NewProp_onDone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onDone,onBuildingCreated" },
		{ "Category", "Coala|Async|Create buildings" },
		{ "ModuleRelativePath", "Public/CoalaBuildingFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingFactory, nullptr, "CreateBuildingsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::CoalaBuildingFactory_eventCreateBuildingsAsync_Parms), Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaBuildingFactory);
	UClass* Z_Construct_UClass_UCoalaBuildingFactory_NoRegister()
	{
		return UCoalaBuildingFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaBuildingFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaBuildingFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaBuildingFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuilding, "CreateBuilding" }, // 3040711276
		{ &Z_Construct_UFunction_UCoalaBuildingFactory_CreateBuildingsAsync, "CreateBuildingsAsync" }, // 3980860846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaBuildingFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaBuildingFactory.h" },
		{ "ModuleRelativePath", "Public/CoalaBuildingFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaBuildingFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaBuildingFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaBuildingFactory_Statics::ClassParams = {
		&UCoalaBuildingFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaBuildingFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaBuildingFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaBuildingFactory()
	{
		if (!Z_Registration_Info_UClass_UCoalaBuildingFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaBuildingFactory.OuterSingleton, Z_Construct_UClass_UCoalaBuildingFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaBuildingFactory.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaBuildingFactory>()
	{
		return UCoalaBuildingFactory::StaticClass();
	}
	UCoalaBuildingFactory::UCoalaBuildingFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaBuildingFactory);
	UCoalaBuildingFactory::~UCoalaBuildingFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaBuildingFactory, UCoalaBuildingFactory::StaticClass, TEXT("UCoalaBuildingFactory"), &Z_Registration_Info_UClass_UCoalaBuildingFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaBuildingFactory), 4171686041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_541997962(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
