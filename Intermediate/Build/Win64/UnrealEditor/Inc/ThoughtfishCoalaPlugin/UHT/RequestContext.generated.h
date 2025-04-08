// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RequestContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THOUGHTFISHCOALAPLUGIN_RequestContext_generated_h
#error "RequestContext.generated.h already included, missing '#pragma once' in RequestContext.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_RequestContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_RequestContext_h


#define FOREACH_ENUM_REQUEST_CONTEXT(op) \
	op(REQUEST_CONTEXT::NONE) \
	op(REQUEST_CONTEXT::GAMETAGS) \
	op(REQUEST_CONTEXT::POIS) \
	op(REQUEST_CONTEXT::WEATHER) \
	op(REQUEST_CONTEXT::STREETS) \
	op(REQUEST_CONTEXT::BUILDINGS) \
	op(REQUEST_CONTEXT::WATER) \
	op(REQUEST_CONTEXT::CONTEXT) \
	op(REQUEST_CONTEXT::TIMEZONE) \
	op(REQUEST_CONTEXT::CUSTOM_POIS) \
	op(REQUEST_CONTEXT::ELEVATION) \
	op(REQUEST_CONTEXT::CRIME) 

enum class REQUEST_CONTEXT : uint8;
template<> struct TIsUEnumClass<REQUEST_CONTEXT> { enum { Value = true }; };
template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<REQUEST_CONTEXT>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
