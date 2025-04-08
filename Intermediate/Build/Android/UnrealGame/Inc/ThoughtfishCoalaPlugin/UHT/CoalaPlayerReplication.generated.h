// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaPlayerReplication.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECoalaPlayerVisibility : uint8;
struct FCoalaRemotePlayerData;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaPlayerReplication_generated_h
#error "CoalaPlayerReplication.generated.h already included, missing '#pragma once' in CoalaPlayerReplication.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaPlayerReplication_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStressTestPlayerReplication); \
	DECLARE_FUNCTION(execTestReceivePlayerReplication); \
	DECLARE_FUNCTION(execOnErrorResponeReceived); \
	DECLARE_FUNCTION(execOnRefreshResponeReceived); \
	DECLARE_FUNCTION(execScheduleRemotePlayerRefresh); \
	DECLARE_FUNCTION(execGetNumCurrentRemotePlayers); \
	DECLARE_FUNCTION(execGetSpawnedRemotePlayerActor); \
	DECLARE_FUNCTION(execGetCurrentRemotePlayerAt); \
	DECLARE_FUNCTION(execClearAllDisplayedRemotePlayers); \
	DECLARE_FUNCTION(execSetSystemEnabled); \
	DECLARE_FUNCTION(execSetPlayerRefreshTimesWhenAlone); \
	DECLARE_FUNCTION(execSetPlayerRefreshTimes); \
	DECLARE_FUNCTION(execSetLocalPlayerVisibility); \
	DECLARE_FUNCTION(execSetExplicitRequestRangeCenter); \
	DECLARE_FUNCTION(execSetDisplayRangeOfRemotePlayers); \
	DECLARE_FUNCTION(execSetLocalPlayerCurrentLevelPosition); \
	DECLARE_FUNCTION(execSetLocalPlayerPayload); \
	DECLARE_FUNCTION(execSetLocalPlayerId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStressTestPlayerReplication); \
	DECLARE_FUNCTION(execTestReceivePlayerReplication); \
	DECLARE_FUNCTION(execOnErrorResponeReceived); \
	DECLARE_FUNCTION(execOnRefreshResponeReceived); \
	DECLARE_FUNCTION(execScheduleRemotePlayerRefresh); \
	DECLARE_FUNCTION(execGetNumCurrentRemotePlayers); \
	DECLARE_FUNCTION(execGetSpawnedRemotePlayerActor); \
	DECLARE_FUNCTION(execGetCurrentRemotePlayerAt); \
	DECLARE_FUNCTION(execClearAllDisplayedRemotePlayers); \
	DECLARE_FUNCTION(execSetSystemEnabled); \
	DECLARE_FUNCTION(execSetPlayerRefreshTimesWhenAlone); \
	DECLARE_FUNCTION(execSetPlayerRefreshTimes); \
	DECLARE_FUNCTION(execSetLocalPlayerVisibility); \
	DECLARE_FUNCTION(execSetExplicitRequestRangeCenter); \
	DECLARE_FUNCTION(execSetDisplayRangeOfRemotePlayers); \
	DECLARE_FUNCTION(execSetLocalPlayerCurrentLevelPosition); \
	DECLARE_FUNCTION(execSetLocalPlayerPayload); \
	DECLARE_FUNCTION(execSetLocalPlayerId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaPlayerReplication(); \
	friend struct Z_Construct_UClass_UCoalaPlayerReplication_Statics; \
public: \
	DECLARE_CLASS(UCoalaPlayerReplication, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaPlayerReplication)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaPlayerReplication(); \
	friend struct Z_Construct_UClass_UCoalaPlayerReplication_Statics; \
public: \
	DECLARE_CLASS(UCoalaPlayerReplication, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaPlayerReplication)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaPlayerReplication(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaPlayerReplication) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaPlayerReplication); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaPlayerReplication); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaPlayerReplication(UCoalaPlayerReplication&&); \
	NO_API UCoalaPlayerReplication(const UCoalaPlayerReplication&); \
public: \
	NO_API virtual ~UCoalaPlayerReplication();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaPlayerReplication(UCoalaPlayerReplication&&); \
	NO_API UCoalaPlayerReplication(const UCoalaPlayerReplication&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaPlayerReplication); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaPlayerReplication); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoalaPlayerReplication) \
	NO_API virtual ~UCoalaPlayerReplication();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_39_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaPlayerReplication>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
