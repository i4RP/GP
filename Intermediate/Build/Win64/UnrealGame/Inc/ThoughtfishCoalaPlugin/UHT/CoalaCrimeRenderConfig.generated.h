// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaCrimeRenderConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaCrimeRenderConfig_generated_h
#error "CoalaCrimeRenderConfig.generated.h already included, missing '#pragma once' in CoalaCrimeRenderConfig.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaCrimeRenderConfig_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrimeTypeWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<struct FCrimeTypeWrapper>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoalaCrimeRenderConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<struct FCoalaCrimeRenderConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCrimeRenderConfig_h


#define FOREACH_ENUM_UHEATMAPTYPE(op) \
	op(UHeatMapType::Pillar) \
	op(UHeatMapType::Flat) \
	op(UHeatMapType::None) 

enum class UHeatMapType : uint8;
template<> struct TIsUEnumClass<UHeatMapType> { enum { Value = true }; };
template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<UHeatMapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
