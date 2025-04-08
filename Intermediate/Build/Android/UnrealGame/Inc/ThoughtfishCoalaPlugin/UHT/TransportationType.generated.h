// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransportationType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THOUGHTFISHCOALAPLUGIN_TransportationType_generated_h
#error "TransportationType.generated.h already included, missing '#pragma once' in TransportationType.h"
#endif
#define THOUGHTFISHCOALAPLUGIN_TransportationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationType_h


#define FOREACH_ENUM_TRANSPORTATIONTYPE(op) \
	op(TransportationType::NONE) \
	op(TransportationType::BUS) \
	op(TransportationType::TRAIN) \
	op(TransportationType::FLIGHT) 

enum class TransportationType : uint8;
template<> struct TIsUEnumClass<TransportationType> { enum { Value = true }; };
template<> THOUGHTFISHCOALAPLUGIN_API UEnum* StaticEnum<TransportationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
