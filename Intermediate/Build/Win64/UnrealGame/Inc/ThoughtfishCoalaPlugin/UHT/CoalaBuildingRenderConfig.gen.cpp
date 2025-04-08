// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaBuildingRenderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaBuildingRenderConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING;
	static UEnum* OPTIONS_MESH_CREATION_BUILDING_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("OPTIONS_MESH_CREATION_BUILDING"));
		}
		return Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<OPTIONS_MESH_CREATION_BUILDING>()
	{
		return OPTIONS_MESH_CREATION_BUILDING_StaticEnum();
	}
	struct Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enumerators[] = {
		{ "OPTIONS_MESH_CREATION_BUILDING::NONE", (int64)OPTIONS_MESH_CREATION_BUILDING::NONE },
		{ "OPTIONS_MESH_CREATION_BUILDING::FLOOR", (int64)OPTIONS_MESH_CREATION_BUILDING::FLOOR },
		{ "OPTIONS_MESH_CREATION_BUILDING::FOUNDATION", (int64)OPTIONS_MESH_CREATION_BUILDING::FOUNDATION },
		{ "OPTIONS_MESH_CREATION_BUILDING::WALLS", (int64)OPTIONS_MESH_CREATION_BUILDING::WALLS },
		{ "OPTIONS_MESH_CREATION_BUILDING::ROOF", (int64)OPTIONS_MESH_CREATION_BUILDING::ROOF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING" },
		{ "BlueprintType", "true" },
		{ "FLOOR.Name", "OPTIONS_MESH_CREATION_BUILDING::FLOOR" },
		{ "FOUNDATION.Name", "OPTIONS_MESH_CREATION_BUILDING::FOUNDATION" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
		{ "NONE.Name", "OPTIONS_MESH_CREATION_BUILDING::NONE" },
		{ "ROOF.Name", "OPTIONS_MESH_CREATION_BUILDING::ROOF" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "WALLS.Name", "OPTIONS_MESH_CREATION_BUILDING::WALLS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		"OPTIONS_MESH_CREATION_BUILDING",
		"OPTIONS_MESH_CREATION_BUILDING",
		Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING()
	{
		if (!Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.InnerSingleton, Z_Construct_UEnum_ThoughtfishCoalaPlugin_OPTIONS_MESH_CREATION_BUILDING_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig;
class UScriptStruct* FCoalaBuildingRenderConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaBuildingRenderConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaBuildingRenderConfig>()
{
	return FCoalaBuildingRenderConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_createMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_createMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialFloor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialFoundation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialFoundation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialRoof_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialRoof;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mergeMeshes_MetaData[];
#endif
		static void NewProp_mergeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mergeMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generateUVs_MetaData[];
#endif
		static void NewProp_generateUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightPerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightPerLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_generateCollisions_MetaData[];
#endif
		static void NewProp_generateCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_generateCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultBuildingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_defaultBuildingLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clampToDefaultBuildingLevel_MetaData[];
#endif
		static void NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clampToDefaultBuildingLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_limitMaxBuildingLevelTo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_limitMaxBuildingLevelTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaBuildingRenderConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING" },
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_createMeshes = { "createMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, createMeshes), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFloor_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFloor = { "materialFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, materialFloor), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation = { "materialFoundation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, materialFoundation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialWall_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialWall = { "materialWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, materialWall), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialRoof_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialRoof = { "materialRoof", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, materialRoof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialRoof_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialRoof_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit(void* Obj)
	{
		((FCoalaBuildingRenderConfig*)Obj)->mergeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes = { "mergeMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaBuildingRenderConfig), &Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((FCoalaBuildingRenderConfig*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaBuildingRenderConfig), &Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel = { "heightPerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, heightPerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit(void* Obj)
	{
		((FCoalaBuildingRenderConfig*)Obj)->generateCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions = { "generateCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaBuildingRenderConfig), &Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel = { "defaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, defaultBuildingLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj)
	{
		((FCoalaBuildingRenderConfig*)Obj)->clampToDefaultBuildingLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel = { "clampToDefaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoalaBuildingRenderConfig), &Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo_MetaData[] = {
		{ "Category", "Coala|Config|Building" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo = { "limitMaxBuildingLevelTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaBuildingRenderConfig, limitMaxBuildingLevelTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_createMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_materialRoof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaBuildingRenderConfig",
		sizeof(FCoalaBuildingRenderConfig),
		alignof(FCoalaBuildingRenderConfig),
		Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UCoalaBuildingRenderConfigBlueprintLibrary::execBreakCoalaBuildingRenderConfig)
	{
		P_GET_STRUCT(FCoalaBuildingRenderConfig,Z_Param_inBuildingRenderConfig);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_createMeshes);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_materialFloor);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_materialFoundation);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_materialWall);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_materialRoof);
		P_GET_UBOOL_REF(Z_Param_Out_generateUVs);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_heightPerLevel);
		P_GET_UBOOL_REF(Z_Param_Out_generateCollisions);
		P_GET_UBOOL_REF(Z_Param_Out_mergeMeshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_defaultBuildingLevel);
		P_GET_UBOOL(Z_Param_clampToDefaultBuildingLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_limitMaxBuildingLevelTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaBuildingRenderConfigBlueprintLibrary::BreakCoalaBuildingRenderConfig(Z_Param_inBuildingRenderConfig,Z_Param_Out_createMeshes,Z_Param_Out_materialFloor,Z_Param_Out_materialFoundation,Z_Param_Out_materialWall,Z_Param_Out_materialRoof,Z_Param_Out_generateUVs,Z_Param_Out_heightPerLevel,Z_Param_Out_generateCollisions,Z_Param_Out_mergeMeshes,Z_Param_defaultBuildingLevel,Z_Param_clampToDefaultBuildingLevel,Z_Param_limitMaxBuildingLevelTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaBuildingRenderConfigBlueprintLibrary::execMakeCoalaBuildingRenderConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_createMeshes);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialFloor);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialFoundation);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialWall);
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialRoof);
		P_GET_UBOOL(Z_Param_generateUVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_heightPerLevel);
		P_GET_UBOOL(Z_Param_generateCollisions);
		P_GET_PROPERTY(FIntProperty,Z_Param_defaultBuildingLevel);
		P_GET_UBOOL(Z_Param_clampToDefaultBuildingLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_limitMaxBuildingLevelTo);
		P_GET_UBOOL(Z_Param_mergeMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaBuildingRenderConfig*)Z_Param__Result=UCoalaBuildingRenderConfigBlueprintLibrary::MakeCoalaBuildingRenderConfig(Z_Param_createMeshes,Z_Param_materialFloor,Z_Param_materialFoundation,Z_Param_materialWall,Z_Param_materialRoof,Z_Param_generateUVs,Z_Param_heightPerLevel,Z_Param_generateCollisions,Z_Param_defaultBuildingLevel,Z_Param_clampToDefaultBuildingLevel,Z_Param_limitMaxBuildingLevelTo,Z_Param_mergeMeshes);
		P_NATIVE_END;
	}
	void UCoalaBuildingRenderConfigBlueprintLibrary::StaticRegisterNativesUCoalaBuildingRenderConfigBlueprintLibrary()
	{
		UClass* Class = UCoalaBuildingRenderConfigBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakCoalaBuildingRenderConfig", &UCoalaBuildingRenderConfigBlueprintLibrary::execBreakCoalaBuildingRenderConfig },
			{ "MakeCoalaBuildingRenderConfig", &UCoalaBuildingRenderConfigBlueprintLibrary::execMakeCoalaBuildingRenderConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics
	{
		struct CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms
		{
			FCoalaBuildingRenderConfig inBuildingRenderConfig;
			int32 createMeshes;
			UMaterialInterface* materialFloor;
			UMaterialInterface* materialFoundation;
			UMaterialInterface* materialWall;
			UMaterialInterface* materialRoof;
			bool generateUVs;
			float heightPerLevel;
			bool generateCollisions;
			bool mergeMeshes;
			int32 defaultBuildingLevel;
			bool clampToDefaultBuildingLevel;
			int32 limitMaxBuildingLevelTo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inBuildingRenderConfig;
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
		static void NewProp_mergeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mergeMeshes;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_defaultBuildingLevel;
		static void NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clampToDefaultBuildingLevel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_limitMaxBuildingLevelTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_inBuildingRenderConfig = { "inBuildingRenderConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, inBuildingRenderConfig), Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2672841102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_createMeshes = { "createMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, createMeshes), METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialFloor = { "materialFloor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, materialFloor), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation = { "materialFoundation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, materialFoundation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialWall = { "materialWall", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, materialWall), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialRoof = { "materialRoof", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, materialRoof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel = { "heightPerLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, heightPerLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms*)Obj)->generateCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions = { "generateCollisions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms*)Obj)->mergeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes = { "mergeMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel = { "defaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, defaultBuildingLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms*)Obj)->clampToDefaultBuildingLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel = { "clampToDefaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo = { "limitMaxBuildingLevelTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms, limitMaxBuildingLevelTo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_inBuildingRenderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_createMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_materialRoof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Config|Building render config" },
		{ "Comment", "/** Breaks a coala gps coordinates apart into lon, lat. */" },
		{ "DisplayName", "Break building render config" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks a coala gps coordinates apart into lon, lat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary, nullptr, "BreakCoalaBuildingRenderConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::CoalaBuildingRenderConfigBlueprintLibrary_eventBreakCoalaBuildingRenderConfig_Parms), Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics
	{
		struct CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms
		{
			int32 createMeshes;
			UMaterialInterface* materialFloor;
			UMaterialInterface* materialFoundation;
			UMaterialInterface* materialWall;
			UMaterialInterface* materialRoof;
			bool generateUVs;
			float heightPerLevel;
			bool generateCollisions;
			int32 defaultBuildingLevel;
			bool clampToDefaultBuildingLevel;
			int32 limitMaxBuildingLevelTo;
			bool mergeMeshes;
			FCoalaBuildingRenderConfig ReturnValue;
		};
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_defaultBuildingLevel;
		static void NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clampToDefaultBuildingLevel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_limitMaxBuildingLevelTo;
		static void NewProp_mergeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mergeMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.OPTIONS_MESH_CREATION_BUILDING" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_createMeshes = { "createMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, createMeshes), METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_createMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialFloor = { "materialFloor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, materialFloor), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation = { "materialFoundation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, materialFoundation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialWall = { "materialWall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, materialWall), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialRoof = { "materialRoof", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, materialRoof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms*)Obj)->generateUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateUVs = { "generateUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel = { "heightPerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, heightPerLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms*)Obj)->generateCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions = { "generateCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel = { "defaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, defaultBuildingLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms*)Obj)->clampToDefaultBuildingLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel = { "clampToDefaultBuildingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo = { "limitMaxBuildingLevelTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, limitMaxBuildingLevelTo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit(void* Obj)
	{
		((CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms*)Obj)->mergeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes = { "mergeMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms), &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig, METADATA_PARAMS(nullptr, 0) }; // 2672841102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_createMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialFoundation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_materialRoof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_heightPerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_generateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_defaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_clampToDefaultBuildingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_limitMaxBuildingLevelTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_mergeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Config|Building render config" },
		{ "Comment", "/** Makes a coala gps coordinates {lon, lat} */" },
		{ "CPP_Default_clampToDefaultBuildingLevel", "false" },
		{ "CPP_Default_defaultBuildingLevel", "1" },
		{ "CPP_Default_generateCollisions", "false" },
		{ "CPP_Default_generateUVs", "false" },
		{ "CPP_Default_heightPerLevel", "500.000000" },
		{ "CPP_Default_limitMaxBuildingLevelTo", "0" },
		{ "CPP_Default_materialFloor", "None" },
		{ "CPP_Default_materialFoundation", "None" },
		{ "CPP_Default_materialRoof", "None" },
		{ "CPP_Default_materialWall", "None" },
		{ "CPP_Default_mergeMeshes", "true" },
		{ "DisplayName", "Make building render config" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Makes a coala gps coordinates {lon, lat}" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary, nullptr, "MakeCoalaBuildingRenderConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::CoalaBuildingRenderConfigBlueprintLibrary_eventMakeCoalaBuildingRenderConfig_Parms), Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaBuildingRenderConfigBlueprintLibrary);
	UClass* Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_NoRegister()
	{
		return UCoalaBuildingRenderConfigBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_BreakCoalaBuildingRenderConfig, "BreakCoalaBuildingRenderConfig" }, // 543212972
		{ &Z_Construct_UFunction_UCoalaBuildingRenderConfigBlueprintLibrary_MakeCoalaBuildingRenderConfig, "MakeCoalaBuildingRenderConfig" }, // 4075477112
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaBuildingRenderConfig.h" },
		{ "ModuleRelativePath", "Public/CoalaBuildingRenderConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaBuildingRenderConfigBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::ClassParams = {
		&UCoalaBuildingRenderConfigBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoalaBuildingRenderConfigBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaBuildingRenderConfigBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaBuildingRenderConfigBlueprintLibrary.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaBuildingRenderConfigBlueprintLibrary>()
	{
		return UCoalaBuildingRenderConfigBlueprintLibrary::StaticClass();
	}
	UCoalaBuildingRenderConfigBlueprintLibrary::UCoalaBuildingRenderConfigBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaBuildingRenderConfigBlueprintLibrary);
	UCoalaBuildingRenderConfigBlueprintLibrary::~UCoalaBuildingRenderConfigBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::EnumInfo[] = {
		{ OPTIONS_MESH_CREATION_BUILDING_StaticEnum, TEXT("OPTIONS_MESH_CREATION_BUILDING"), &Z_Registration_Info_UEnum_OPTIONS_MESH_CREATION_BUILDING, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4237716918U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ScriptStructInfo[] = {
		{ FCoalaBuildingRenderConfig::StaticStruct, Z_Construct_UScriptStruct_FCoalaBuildingRenderConfig_Statics::NewStructOps, TEXT("CoalaBuildingRenderConfig"), &Z_Registration_Info_UScriptStruct_CoalaBuildingRenderConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaBuildingRenderConfig), 2672841102U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaBuildingRenderConfigBlueprintLibrary, UCoalaBuildingRenderConfigBlueprintLibrary::StaticClass, TEXT("UCoalaBuildingRenderConfigBlueprintLibrary"), &Z_Registration_Info_UClass_UCoalaBuildingRenderConfigBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaBuildingRenderConfigBlueprintLibrary), 2195617042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_147581901(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingRenderConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
