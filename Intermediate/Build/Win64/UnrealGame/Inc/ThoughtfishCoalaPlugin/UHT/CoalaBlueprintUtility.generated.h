// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaBlueprintUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCoalaArea;
struct FCoalaCell;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaBlueprintUtility_generated_h
#error "CoalaBlueprintUtility.generated.h already included, missing '#pragma once' in CoalaBlueprintUtility.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaBlueprintUtility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetAppVersion); \
	DECLARE_FUNCTION(execDistanceOfGpsPositions); \
	DECLARE_FUNCTION(execCenterOfCell); \
	DECLARE_FUNCTION(execGetTerrainPositionWithoutArea); \
	DECLARE_FUNCTION(execGetTerrainPosition); \
	DECLARE_FUNCTION(execSetMaximumLoopIterationCounter);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetAppVersion); \
	DECLARE_FUNCTION(execDistanceOfGpsPositions); \
	DECLARE_FUNCTION(execCenterOfCell); \
	DECLARE_FUNCTION(execGetTerrainPositionWithoutArea); \
	DECLARE_FUNCTION(execGetTerrainPosition); \
	DECLARE_FUNCTION(execSetMaximumLoopIterationCounter);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaBlueprintUtility(); \
	friend struct Z_Construct_UClass_UCoalaBlueprintUtility_Statics; \
public: \
	DECLARE_CLASS(UCoalaBlueprintUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaBlueprintUtility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaBlueprintUtility(); \
	friend struct Z_Construct_UClass_UCoalaBlueprintUtility_Statics; \
public: \
	DECLARE_CLASS(UCoalaBlueprintUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaBlueprintUtility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaBlueprintUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaBlueprintUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaBlueprintUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaBlueprintUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaBlueprintUtility(UCoalaBlueprintUtility&&); \
	NO_API UCoalaBlueprintUtility(const UCoalaBlueprintUtility&); \
public: \
	NO_API virtual ~UCoalaBlueprintUtility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaBlueprintUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaBlueprintUtility(UCoalaBlueprintUtility&&); \
	NO_API UCoalaBlueprintUtility(const UCoalaBlueprintUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaBlueprintUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaBlueprintUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaBlueprintUtility) \
	NO_API virtual ~UCoalaBlueprintUtility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaBlueprintUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaBlueprintUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
