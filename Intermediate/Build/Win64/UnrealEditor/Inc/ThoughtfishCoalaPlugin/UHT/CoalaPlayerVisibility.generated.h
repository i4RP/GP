// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoalaPlayerVisibility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THOUGHTFISHCOALAPLUGIN_CoalaPlayerVisibility_generated_h
#error "CoalaPlayerVisibility.generated.h already included, missing '#pragma once' in CoalaPlayerVisibility.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_CoalaPlayerVisibility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerVisibility_h


#define FOREACH_ENUM_ECOALAPLAYERVISIBILITY(op) \
	op(ECoalaPlayerVisibility::None) \
	op(ECoalaPlayerVisibility::AlwaysInvisible) \
	op(ECoalaPlayerVisibility::AlwaysVisible) \
	op(ECoalaPlayerVisibility::OnlyVisibleWhenRequired) 

enum class ECoalaPlayerVisibility : uint8;
template<> struct TIsUEnumClass<ECoalaPlayerVisibility> { enum { Value = true }; };
template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<ECoalaPlayerVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
