// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaTransportationTrip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTransportationData;
class UTransportationObjects;
enum class TransportationType : uint8;
struct FCoalaGPSCoordinates;
struct FCoalaTransportationRenderConfig;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaTransportationTrip_generated_h
#error "CoalaTransportationTrip.generated.h already included, missing '#pragma once' in CoalaTransportationTrip.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaTransportationTrip_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyTripSpline); \
	DECLARE_FUNCTION(execSaveTripSpline); \
	DECLARE_FUNCTION(execGetPositionOfFirstStopInTrip); \
	DECLARE_FUNCTION(execUpdateTrips); \
	DECLARE_FUNCTION(execGetTripPositions); \
	DECLARE_FUNCTION(execGetCurrentTrips);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyTripSpline); \
	DECLARE_FUNCTION(execSaveTripSpline); \
	DECLARE_FUNCTION(execGetPositionOfFirstStopInTrip); \
	DECLARE_FUNCTION(execUpdateTrips); \
	DECLARE_FUNCTION(execGetTripPositions); \
	DECLARE_FUNCTION(execGetCurrentTrips);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaTransportationTrip(); \
	friend struct Z_Construct_UClass_UCoalaTransportationTrip_Statics; \
public: \
	DECLARE_CLASS(UCoalaTransportationTrip, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaTransportationTrip)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaTransportationTrip(); \
	friend struct Z_Construct_UClass_UCoalaTransportationTrip_Statics; \
public: \
	DECLARE_CLASS(UCoalaTransportationTrip, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaTransportationTrip)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaTransportationTrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaTransportationTrip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaTransportationTrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaTransportationTrip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaTransportationTrip(UCoalaTransportationTrip&&); \
	NO_API UCoalaTransportationTrip(const UCoalaTransportationTrip&); \
public: \
	NO_API virtual ~UCoalaTransportationTrip();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaTransportationTrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaTransportationTrip(UCoalaTransportationTrip&&); \
	NO_API UCoalaTransportationTrip(const UCoalaTransportationTrip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaTransportationTrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaTransportationTrip); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaTransportationTrip) \
	NO_API virtual ~UCoalaTransportationTrip();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaTransportationTrip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaTransportationTrip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
