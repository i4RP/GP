// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACoalaActor;
class ACoalaAreaActor;
class UCoalaArea;
struct FCoalaBounds;
struct FCoalaBuilding;
struct FCoalaCell;
struct FCoalaCrime;
struct FCoalaCustomPOI;
struct FCoalaElevation;
struct FCoalaPOI;
struct FCoalaStreets;
struct FCoalaTile;
struct FCoalaWater;
struct FCoalaWeather;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaArea_generated_h
#error "CoalaArea.generated.h already included, missing '#pragma once' in CoalaArea.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaArea_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_22_DELEGATE \
THOUGHTFISHCOALAPLUGIN_API void FCoalaDelegateCoalaArea_OnDestroy_DelegateWrapper(const FScriptDelegate& CoalaDelegateCoalaArea_OnDestroy, FCoalaTile tile);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCoordinatesAreInAreaBounds); \
	DECLARE_FUNCTION(execClearAllCustomPOIs); \
	DECLARE_FUNCTION(execLoadCoalaAreaFromLocalDump); \
	DECLARE_FUNCTION(execLoadCoalaAreaFromResponse);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCoordinatesAreInAreaBounds); \
	DECLARE_FUNCTION(execClearAllCustomPOIs); \
	DECLARE_FUNCTION(execLoadCoalaAreaFromLocalDump); \
	DECLARE_FUNCTION(execLoadCoalaAreaFromResponse);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaArea(); \
	friend struct Z_Construct_UClass_UCoalaArea_Statics; \
public: \
	DECLARE_CLASS(UCoalaArea, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaArea)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaArea(); \
	friend struct Z_Construct_UClass_UCoalaArea_Statics; \
public: \
	DECLARE_CLASS(UCoalaArea, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaArea)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaArea(UCoalaArea&&); \
	NO_API UCoalaArea(const UCoalaArea&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaArea(UCoalaArea&&); \
	NO_API UCoalaArea(const UCoalaArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoalaArea)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaArea>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindOnDestroy); \
	DECLARE_FUNCTION(execAddAttachedActorToCrimePins); \
	DECLARE_FUNCTION(execRemoveAttachedActorToHeatMap); \
	DECLARE_FUNCTION(execAddAttachedActorToHeatMap); \
	DECLARE_FUNCTION(execSetSceneObjectRefForHeatMap); \
	DECLARE_FUNCTION(execSetSceneObjectRefForCrimePins); \
	DECLARE_FUNCTION(execSetSceneObjectRefForCrime); \
	DECLARE_FUNCTION(execCompareArea); \
	DECLARE_FUNCTION(execBreakCoalaArea);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindOnDestroy); \
	DECLARE_FUNCTION(execAddAttachedActorToCrimePins); \
	DECLARE_FUNCTION(execRemoveAttachedActorToHeatMap); \
	DECLARE_FUNCTION(execAddAttachedActorToHeatMap); \
	DECLARE_FUNCTION(execSetSceneObjectRefForHeatMap); \
	DECLARE_FUNCTION(execSetSceneObjectRefForCrimePins); \
	DECLARE_FUNCTION(execSetSceneObjectRefForCrime); \
	DECLARE_FUNCTION(execCompareArea); \
	DECLARE_FUNCTION(execBreakCoalaArea);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaAreaShadowingFix(); \
	friend struct Z_Construct_UClass_UCoalaAreaShadowingFix_Statics; \
public: \
	DECLARE_CLASS(UCoalaAreaShadowingFix, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaAreaShadowingFix)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaAreaShadowingFix(); \
	friend struct Z_Construct_UClass_UCoalaAreaShadowingFix_Statics; \
public: \
	DECLARE_CLASS(UCoalaAreaShadowingFix, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaAreaShadowingFix)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaAreaShadowingFix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaAreaShadowingFix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaAreaShadowingFix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaAreaShadowingFix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaAreaShadowingFix(UCoalaAreaShadowingFix&&); \
	NO_API UCoalaAreaShadowingFix(const UCoalaAreaShadowingFix&); \
public: \
	NO_API virtual ~UCoalaAreaShadowingFix();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaAreaShadowingFix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaAreaShadowingFix(UCoalaAreaShadowingFix&&); \
	NO_API UCoalaAreaShadowingFix(const UCoalaAreaShadowingFix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaAreaShadowingFix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaAreaShadowingFix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaAreaShadowingFix) \
	NO_API virtual ~UCoalaAreaShadowingFix();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_100_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaAreaShadowingFix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
