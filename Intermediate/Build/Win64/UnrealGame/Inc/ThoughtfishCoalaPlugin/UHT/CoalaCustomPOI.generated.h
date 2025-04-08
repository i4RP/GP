// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaCustomPOI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UObject;
class ACoalaCustomPOIActor;
class UCoalaArea;
struct FCoalaCustomPOI;
struct FCoalaGPSCoordinates;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaCustomPOI_generated_h
#error "CoalaCustomPOI.generated.h already included, missing '#pragma once' in CoalaCustomPOI.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaCustomPOI_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_11_DELEGATE \
THOUGHTFISHCOALAPLUGIN_API void FCoalaDelegatePlaceCustomPoisOnDone_DelegateWrapper(const FScriptDelegate& CoalaDelegatePlaceCustomPoisOnDone, UCoalaArea* area);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_12_DELEGATE \
THOUGHTFISHCOALAPLUGIN_API void FCoalaDelegatOnCustomPoiPlaced_DelegateWrapper(const FScriptDelegate& CoalaDelegatOnCustomPoiPlaced, ACoalaCustomPOIActor* customPoiActor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoalaCustomPOI_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCoalaPOI Super;


template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<struct FCoalaCustomPOI>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaceCustomPoisAsync); \
	DECLARE_FUNCTION(execBreakCoalaCustomPOI); \
	DECLARE_FUNCTION(execMakeCoalaCustomPOI);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceCustomPoisAsync); \
	DECLARE_FUNCTION(execBreakCoalaCustomPOI); \
	DECLARE_FUNCTION(execMakeCoalaCustomPOI);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaCustomPoiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCoalaCustomPoiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaCustomPoiBlueprintLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaCustomPoiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCoalaCustomPoiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCoalaCustomPoiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaCustomPoiBlueprintLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaCustomPoiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaCustomPoiBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaCustomPoiBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaCustomPoiBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaCustomPoiBlueprintLibrary(UCoalaCustomPoiBlueprintLibrary&&); \
	NO_API UCoalaCustomPoiBlueprintLibrary(const UCoalaCustomPoiBlueprintLibrary&); \
public: \
	NO_API virtual ~UCoalaCustomPoiBlueprintLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaCustomPoiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaCustomPoiBlueprintLibrary(UCoalaCustomPoiBlueprintLibrary&&); \
	NO_API UCoalaCustomPoiBlueprintLibrary(const UCoalaCustomPoiBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaCustomPoiBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaCustomPoiBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaCustomPoiBlueprintLibrary) \
	NO_API virtual ~UCoalaCustomPoiBlueprintLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaCustomPoiBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCustomPOI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
