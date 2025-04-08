// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaRequestFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBluePrintHttpGetRequest;
class UBluePrintHttpGetRequestTransportation;
enum class EOutputPins_CoalaRequestResult : uint8;
enum class TransportationType : uint8;
struct FCoalaGPSCoordinates;
struct FCoalaTile;
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaRequestFunctions_generated_h
#error "CoalaRequestFunctions.generated.h already included, missing '#pragma once' in CoalaRequestFunctions.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaRequestFunctions_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeCoalaRequestTransportation); \
	DECLARE_FUNCTION(execMakeCoalaGetCustomPOISuggestionsRequest); \
	DECLARE_FUNCTION(execMakeCoalaSetCustomPOIRequest); \
	DECLARE_FUNCTION(execMakeCoalaRequest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeCoalaRequestTransportation); \
	DECLARE_FUNCTION(execMakeCoalaGetCustomPOISuggestionsRequest); \
	DECLARE_FUNCTION(execMakeCoalaSetCustomPOIRequest); \
	DECLARE_FUNCTION(execMakeCoalaRequest);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoalaRequestFunctions(); \
	friend struct Z_Construct_UClass_UCoalaRequestFunctions_Statics; \
public: \
	DECLARE_CLASS(UCoalaRequestFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaRequestFunctions)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCoalaRequestFunctions(); \
	friend struct Z_Construct_UClass_UCoalaRequestFunctions_Statics; \
public: \
	DECLARE_CLASS(UCoalaRequestFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThoughtfishCoalaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoalaRequestFunctions)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaRequestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaRequestFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaRequestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaRequestFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaRequestFunctions(UCoalaRequestFunctions&&); \
	NO_API UCoalaRequestFunctions(const UCoalaRequestFunctions&); \
public: \
	NO_API virtual ~UCoalaRequestFunctions();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoalaRequestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoalaRequestFunctions(UCoalaRequestFunctions&&); \
	NO_API UCoalaRequestFunctions(const UCoalaRequestFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoalaRequestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoalaRequestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoalaRequestFunctions) \
	NO_API virtual ~UCoalaRequestFunctions();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_25_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<class UCoalaRequestFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaRequestFunctions_h


#define FOREACH_ENUM_EOUTPUTPINS_COALAREQUESTRESULT(op) \
	op(EOutputPins_CoalaRequestResult::OnSuccess) \
	op(EOutputPins_CoalaRequestResult::OnError) 

enum class EOutputPins_CoalaRequestResult : uint8;
template<> struct TIsUEnumClass<EOutputPins_CoalaRequestResult> { enum { Value = true }; };
template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<EOutputPins_CoalaRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
