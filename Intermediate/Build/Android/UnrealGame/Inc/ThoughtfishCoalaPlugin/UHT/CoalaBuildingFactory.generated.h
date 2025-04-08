// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaBuildingFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACoalaMeshActor;
class UCoalaArea;
class UMaterialInterface;
struct FCoalaBuilding;
struct FCoalaBuildingRenderConfig;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaBuildingFactory_generated_h
#error "CoalaBuildingFactory.generated.h already included, missing '#pragma once' in CoalaBuildingFactory.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaBuildingFactory_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_12_DELEGATE \
THOUGHTFISHCOALAPLUGIN_API void FCoalaDelegateBuildingsFactoryOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegateBuildingsFactoryOnDone, UCoalaArea* area);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_13_DELEGATE \
THOUGHTFISHCOALAPLUGIN_API void FCoalaDelegateBuildingsFactoryOnBuildingCreated_DelegateWrapper(const FScriptDelegate& CoalaDelegateBuildingsFactoryOnBuildingCreated, ACoalaMeshActor* cellMeshActor, UCoalaArea* area);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBuildingsAsync); \
	DECLARE_FUNCTION(execCreateBuilding);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBuildingsAsync); \
	DECLARE_FUNCTION(execCreateBuilding);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaBuildingFactory(); \
	friend struct Z_Construct_UClass_UCoalaBuildingFactory_Statics; \
public: \
	DECLARE_CLASS(UCoalaBuildingFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaBuildingFactory)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaBuildingFactory(); \
	friend struct Z_Construct_UClass_UCoalaBuildingFactory_Statics; \
public: \
	DECLARE_CLASS(UCoalaBuildingFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaBuildingFactory)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaBuildingFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaBuildingFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaBuildingFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaBuildingFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaBuildingFactory(UCoalaBuildingFactory&&); \
	NO_API UCoalaBuildingFactory(const UCoalaBuildingFactory&); \
public: \
	NO_API virtual ~UCoalaBuildingFactory();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaBuildingFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaBuildingFactory(UCoalaBuildingFactory&&); \
	NO_API UCoalaBuildingFactory(const UCoalaBuildingFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaBuildingFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaBuildingFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaBuildingFactory) \
	NO_API virtual ~UCoalaBuildingFactory();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaBuildingFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBuildingFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
