// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlayerReplication.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlayerRequestResponseProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPlayerReplication() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlayerReplication();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaPlayerReplication_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UEnum* Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerData();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCoalaPlayerReplication::execStressTestPlayerReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StressTestPlayerReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execTestReceivePlayerReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestReceivePlayerReplication();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execOnErrorResponeReceived)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnErrorResponeReceived(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execOnRefreshResponeReceived)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshResponeReceived(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execScheduleRemotePlayerRefresh)
	{
		P_GET_UBOOL(Z_Param_forceRefreshRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScheduleRemotePlayerRefresh(Z_Param_forceRefreshRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execGetNumCurrentRemotePlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCurrentRemotePlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execGetSpawnedRemotePlayerActor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_atIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSpawnedRemotePlayerActor(Z_Param_atIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execGetCurrentRemotePlayerAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_atIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCoalaRemotePlayerData*)Z_Param__Result=P_THIS->GetCurrentRemotePlayerAt(Z_Param_atIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execClearAllDisplayedRemotePlayers)
	{
		P_GET_UBOOL(Z_Param_notifyBlueprintEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllDisplayedRemotePlayers(Z_Param_notifyBlueprintEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetSystemEnabled)
	{
		P_GET_UBOOL(Z_Param_shouldBeEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSystemEnabled(Z_Param_shouldBeEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetPlayerRefreshTimesWhenAlone)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_minimumSecondsBetweenRefreshes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maximumSecondsBetweenRefreshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerRefreshTimesWhenAlone(Z_Param_minimumSecondsBetweenRefreshes,Z_Param_maximumSecondsBetweenRefreshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetPlayerRefreshTimes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_minimumSecondsBetweenRefreshes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maximumSecondsBetweenRefreshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerRefreshTimes(Z_Param_minimumSecondsBetweenRefreshes,Z_Param_maximumSecondsBetweenRefreshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetLocalPlayerVisibility)
	{
		P_GET_ENUM(ECoalaPlayerVisibility,Z_Param_newVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPlayerVisibility(ECoalaPlayerVisibility(Z_Param_newVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetExplicitRequestRangeCenter)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExplicitRequestRangeCenter(Z_Param_Out_worldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetDisplayRangeOfRemotePlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_xHalfExtentsInMeters);
		P_GET_PROPERTY(FIntProperty,Z_Param_yHalfExtentsInMeters);
		P_GET_UBOOL(Z_Param_useLocalPlayerAsCenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayRangeOfRemotePlayers(Z_Param_xHalfExtentsInMeters,Z_Param_yHalfExtentsInMeters,Z_Param_useLocalPlayerAsCenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetLocalPlayerCurrentLevelPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPlayerCurrentLevelPosition(Z_Param_Out_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetLocalPlayerPayload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPlayerPayload(Z_Param_payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoalaPlayerReplication::execSetLocalPlayerId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalPlayerId(Z_Param_playerId);
		P_NATIVE_END;
	}
	void UCoalaPlayerReplication::StaticRegisterNativesUCoalaPlayerReplication()
	{
		UClass* Class = UCoalaPlayerReplication::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllDisplayedRemotePlayers", &UCoalaPlayerReplication::execClearAllDisplayedRemotePlayers },
			{ "GetCurrentRemotePlayerAt", &UCoalaPlayerReplication::execGetCurrentRemotePlayerAt },
			{ "GetNumCurrentRemotePlayers", &UCoalaPlayerReplication::execGetNumCurrentRemotePlayers },
			{ "GetSpawnedRemotePlayerActor", &UCoalaPlayerReplication::execGetSpawnedRemotePlayerActor },
			{ "OnErrorResponeReceived", &UCoalaPlayerReplication::execOnErrorResponeReceived },
			{ "OnRefreshResponeReceived", &UCoalaPlayerReplication::execOnRefreshResponeReceived },
			{ "ScheduleRemotePlayerRefresh", &UCoalaPlayerReplication::execScheduleRemotePlayerRefresh },
			{ "SetDisplayRangeOfRemotePlayers", &UCoalaPlayerReplication::execSetDisplayRangeOfRemotePlayers },
			{ "SetExplicitRequestRangeCenter", &UCoalaPlayerReplication::execSetExplicitRequestRangeCenter },
			{ "SetLocalPlayerCurrentLevelPosition", &UCoalaPlayerReplication::execSetLocalPlayerCurrentLevelPosition },
			{ "SetLocalPlayerId", &UCoalaPlayerReplication::execSetLocalPlayerId },
			{ "SetLocalPlayerPayload", &UCoalaPlayerReplication::execSetLocalPlayerPayload },
			{ "SetLocalPlayerVisibility", &UCoalaPlayerReplication::execSetLocalPlayerVisibility },
			{ "SetPlayerRefreshTimes", &UCoalaPlayerReplication::execSetPlayerRefreshTimes },
			{ "SetPlayerRefreshTimesWhenAlone", &UCoalaPlayerReplication::execSetPlayerRefreshTimesWhenAlone },
			{ "SetSystemEnabled", &UCoalaPlayerReplication::execSetSystemEnabled },
			{ "StressTestPlayerReplication", &UCoalaPlayerReplication::execStressTestPlayerReplication },
			{ "TestReceivePlayerReplication", &UCoalaPlayerReplication::execTestReceivePlayerReplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics
	{
		struct CoalaPlayerReplication_eventClearAllDisplayedRemotePlayers_Parms
		{
			bool notifyBlueprintEvents;
		};
		static void NewProp_notifyBlueprintEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_notifyBlueprintEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::NewProp_notifyBlueprintEvents_SetBit(void* Obj)
	{
		((CoalaPlayerReplication_eventClearAllDisplayedRemotePlayers_Parms*)Obj)->notifyBlueprintEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::NewProp_notifyBlueprintEvents = { "notifyBlueprintEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaPlayerReplication_eventClearAllDisplayedRemotePlayers_Parms), &Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::NewProp_notifyBlueprintEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::NewProp_notifyBlueprintEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "CPP_Default_notifyBlueprintEvents", "true" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "ClearAllDisplayedRemotePlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::CoalaPlayerReplication_eventClearAllDisplayedRemotePlayers_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics
	{
		struct CoalaPlayerReplication_eventGetCurrentRemotePlayerAt_Parms
		{
			int32 atIndex;
			FCoalaRemotePlayerData ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_atIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_atIndex = { "atIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventGetCurrentRemotePlayerAt_Parms, atIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventGetCurrentRemotePlayerAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoalaRemotePlayerData, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_ReturnValue_MetaData)) }; // 622306874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_atIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "GetCurrentRemotePlayerAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::CoalaPlayerReplication_eventGetCurrentRemotePlayerAt_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics
	{
		struct CoalaPlayerReplication_eventGetNumCurrentRemotePlayers_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventGetNumCurrentRemotePlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "GetNumCurrentRemotePlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::CoalaPlayerReplication_eventGetNumCurrentRemotePlayers_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics
	{
		struct CoalaPlayerReplication_eventGetSpawnedRemotePlayerActor_Parms
		{
			int32 atIndex;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_atIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::NewProp_atIndex = { "atIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventGetSpawnedRemotePlayerActor_Parms, atIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventGetSpawnedRemotePlayerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::NewProp_atIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "GetSpawnedRemotePlayerActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::CoalaPlayerReplication_eventGetSpawnedRemotePlayerActor_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics
	{
		struct CoalaPlayerReplication_eventOnErrorResponeReceived_Parms
		{
			FString response;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventOnErrorResponeReceived_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "OnErrorResponeReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::CoalaPlayerReplication_eventOnErrorResponeReceived_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics
	{
		struct CoalaPlayerReplication_eventOnRefreshResponeReceived_Parms
		{
			FString response;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventOnRefreshResponeReceived_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::NewProp_response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "OnRefreshResponeReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::CoalaPlayerReplication_eventOnRefreshResponeReceived_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics
	{
		struct CoalaPlayerReplication_eventScheduleRemotePlayerRefresh_Parms
		{
			bool forceRefreshRequest;
		};
		static void NewProp_forceRefreshRequest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceRefreshRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::NewProp_forceRefreshRequest_SetBit(void* Obj)
	{
		((CoalaPlayerReplication_eventScheduleRemotePlayerRefresh_Parms*)Obj)->forceRefreshRequest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::NewProp_forceRefreshRequest = { "forceRefreshRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaPlayerReplication_eventScheduleRemotePlayerRefresh_Parms), &Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::NewProp_forceRefreshRequest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::NewProp_forceRefreshRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "CPP_Default_forceRefreshRequest", "false" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "ScheduleRemotePlayerRefresh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::CoalaPlayerReplication_eventScheduleRemotePlayerRefresh_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics
	{
		struct CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms
		{
			int32 xHalfExtentsInMeters;
			int32 yHalfExtentsInMeters;
			bool useLocalPlayerAsCenter;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_xHalfExtentsInMeters;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_yHalfExtentsInMeters;
		static void NewProp_useLocalPlayerAsCenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useLocalPlayerAsCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_xHalfExtentsInMeters = { "xHalfExtentsInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms, xHalfExtentsInMeters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_yHalfExtentsInMeters = { "yHalfExtentsInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms, yHalfExtentsInMeters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_useLocalPlayerAsCenter_SetBit(void* Obj)
	{
		((CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms*)Obj)->useLocalPlayerAsCenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_useLocalPlayerAsCenter = { "useLocalPlayerAsCenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms), &Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_useLocalPlayerAsCenter_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_xHalfExtentsInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_yHalfExtentsInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::NewProp_useLocalPlayerAsCenter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "CPP_Default_useLocalPlayerAsCenter", "true" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetDisplayRangeOfRemotePlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::CoalaPlayerReplication_eventSetDisplayRangeOfRemotePlayers_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics
	{
		struct CoalaPlayerReplication_eventSetExplicitRequestRangeCenter_Parms
		{
			FVector worldPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_worldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::NewProp_worldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::NewProp_worldPosition = { "worldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetExplicitRequestRangeCenter_Parms, worldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::NewProp_worldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::NewProp_worldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::NewProp_worldPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetExplicitRequestRangeCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::CoalaPlayerReplication_eventSetExplicitRequestRangeCenter_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics
	{
		struct CoalaPlayerReplication_eventSetLocalPlayerCurrentLevelPosition_Parms
		{
			FVector position;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetLocalPlayerCurrentLevelPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::NewProp_position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetLocalPlayerCurrentLevelPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::CoalaPlayerReplication_eventSetLocalPlayerCurrentLevelPosition_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics
	{
		struct CoalaPlayerReplication_eventSetLocalPlayerId_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetLocalPlayerId_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::NewProp_playerId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetLocalPlayerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::CoalaPlayerReplication_eventSetLocalPlayerId_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics
	{
		struct CoalaPlayerReplication_eventSetLocalPlayerPayload_Parms
		{
			FString payload;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::NewProp_payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetLocalPlayerPayload_Parms, payload), METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::NewProp_payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::NewProp_payload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::NewProp_payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetLocalPlayerPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::CoalaPlayerReplication_eventSetLocalPlayerPayload_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics
	{
		struct CoalaPlayerReplication_eventSetLocalPlayerVisibility_Parms
		{
			ECoalaPlayerVisibility newVisibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::NewProp_newVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::NewProp_newVisibility = { "newVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetLocalPlayerVisibility_Parms, newVisibility), Z_Construct_UEnum_ThoughtfishCoalaPlugin_ECoalaPlayerVisibility, METADATA_PARAMS(nullptr, 0) }; // 1883689859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::NewProp_newVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::NewProp_newVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetLocalPlayerVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::CoalaPlayerReplication_eventSetLocalPlayerVisibility_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics
	{
		struct CoalaPlayerReplication_eventSetPlayerRefreshTimes_Parms
		{
			float minimumSecondsBetweenRefreshes;
			float maximumSecondsBetweenRefreshes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumSecondsBetweenRefreshes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maximumSecondsBetweenRefreshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::NewProp_minimumSecondsBetweenRefreshes = { "minimumSecondsBetweenRefreshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetPlayerRefreshTimes_Parms, minimumSecondsBetweenRefreshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::NewProp_maximumSecondsBetweenRefreshes = { "maximumSecondsBetweenRefreshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetPlayerRefreshTimes_Parms, maximumSecondsBetweenRefreshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::NewProp_minimumSecondsBetweenRefreshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::NewProp_maximumSecondsBetweenRefreshes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetPlayerRefreshTimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::CoalaPlayerReplication_eventSetPlayerRefreshTimes_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics
	{
		struct CoalaPlayerReplication_eventSetPlayerRefreshTimesWhenAlone_Parms
		{
			float minimumSecondsBetweenRefreshes;
			float maximumSecondsBetweenRefreshes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minimumSecondsBetweenRefreshes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maximumSecondsBetweenRefreshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::NewProp_minimumSecondsBetweenRefreshes = { "minimumSecondsBetweenRefreshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetPlayerRefreshTimesWhenAlone_Parms, minimumSecondsBetweenRefreshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::NewProp_maximumSecondsBetweenRefreshes = { "maximumSecondsBetweenRefreshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaPlayerReplication_eventSetPlayerRefreshTimesWhenAlone_Parms, maximumSecondsBetweenRefreshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::NewProp_minimumSecondsBetweenRefreshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::NewProp_maximumSecondsBetweenRefreshes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetPlayerRefreshTimesWhenAlone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::CoalaPlayerReplication_eventSetPlayerRefreshTimesWhenAlone_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics
	{
		struct CoalaPlayerReplication_eventSetSystemEnabled_Parms
		{
			bool shouldBeEnabled;
		};
		static void NewProp_shouldBeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldBeEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::NewProp_shouldBeEnabled_SetBit(void* Obj)
	{
		((CoalaPlayerReplication_eventSetSystemEnabled_Parms*)Obj)->shouldBeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::NewProp_shouldBeEnabled = { "shouldBeEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaPlayerReplication_eventSetSystemEnabled_Parms), &Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::NewProp_shouldBeEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::NewProp_shouldBeEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "SetSystemEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::CoalaPlayerReplication_eventSetSystemEnabled_Parms), Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "StressTestPlayerReplication", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaPlayerReplication, nullptr, "TestReceivePlayerReplication", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaPlayerReplication);
	UClass* Z_Construct_UClass_UCoalaPlayerReplication_NoRegister()
	{
		return UCoalaPlayerReplication::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaPlayerReplication_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onNewPlayerAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onNewPlayerAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUpdatePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onUpdatePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPlayerBeginRemoval_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPlayerBeginRemoval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_playerActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_currentPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requestRangeHalfExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_requestRangeHalfExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_explicitRequestCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_explicitRequestCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaPlayerReplication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaPlayerReplication_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_ClearAllDisplayedRemotePlayers, "ClearAllDisplayedRemotePlayers" }, // 2390461044
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_GetCurrentRemotePlayerAt, "GetCurrentRemotePlayerAt" }, // 4109271883
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_GetNumCurrentRemotePlayers, "GetNumCurrentRemotePlayers" }, // 2528420898
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_GetSpawnedRemotePlayerActor, "GetSpawnedRemotePlayerActor" }, // 1379893387
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_OnErrorResponeReceived, "OnErrorResponeReceived" }, // 3609926763
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_OnRefreshResponeReceived, "OnRefreshResponeReceived" }, // 1072384568
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_ScheduleRemotePlayerRefresh, "ScheduleRemotePlayerRefresh" }, // 3041569431
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetDisplayRangeOfRemotePlayers, "SetDisplayRangeOfRemotePlayers" }, // 778315692
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetExplicitRequestRangeCenter, "SetExplicitRequestRangeCenter" }, // 2912983759
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerCurrentLevelPosition, "SetLocalPlayerCurrentLevelPosition" }, // 3055545708
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerId, "SetLocalPlayerId" }, // 3612685871
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerPayload, "SetLocalPlayerPayload" }, // 1268719905
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetLocalPlayerVisibility, "SetLocalPlayerVisibility" }, // 752584372
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimes, "SetPlayerRefreshTimes" }, // 393268913
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetPlayerRefreshTimesWhenAlone, "SetPlayerRefreshTimesWhenAlone" }, // 1267450952
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_SetSystemEnabled, "SetSystemEnabled" }, // 1058791257
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_StressTestPlayerReplication, "StressTestPlayerReplication" }, // 619244585
		{ &Z_Construct_UFunction_UCoalaPlayerReplication_TestReceivePlayerReplication, "TestReceivePlayerReplication" }, // 546464073
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoalaPlayerReplication.h" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onNewPlayerAdded_MetaData[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onNewPlayerAdded = { "onNewPlayerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, onNewPlayerAdded), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onNewPlayerAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onNewPlayerAdded_MetaData)) }; // 1163708921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onUpdatePlayer_MetaData[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onUpdatePlayer = { "onUpdatePlayer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, onUpdatePlayer), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onUpdatePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onUpdatePlayer_MetaData)) }; // 2899300038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onPlayerBeginRemoval_MetaData[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onPlayerBeginRemoval = { "onPlayerBeginRemoval", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, onPlayerBeginRemoval), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onPlayerBeginRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onPlayerBeginRemoval_MetaData)) }; // 1163708921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_playerActorClass_MetaData[] = {
		{ "Category", "Coala|Clients on Map" },
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_playerActorClass = { "playerActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, playerActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_playerActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_playerActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers_Inner = { "currentPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended, METADATA_PARAMS(nullptr, 0) }; // 2462954934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers = { "currentPlayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, currentPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers_MetaData)) }; // 2462954934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_requestRangeHalfExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_requestRangeHalfExtents = { "requestRangeHalfExtents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, requestRangeHalfExtents), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_requestRangeHalfExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_requestRangeHalfExtents_MetaData)) }; // 2370250290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_explicitRequestCenter_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerReplication.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_explicitRequestCenter = { "explicitRequestCenter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoalaPlayerReplication, explicitRequestCenter), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_explicitRequestCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_explicitRequestCenter_MetaData)) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoalaPlayerReplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onNewPlayerAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onUpdatePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_onPlayerBeginRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_playerActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_currentPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_requestRangeHalfExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoalaPlayerReplication_Statics::NewProp_explicitRequestCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaPlayerReplication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaPlayerReplication>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaPlayerReplication_Statics::ClassParams = {
		&UCoalaPlayerReplication::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoalaPlayerReplication_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoalaPlayerReplication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaPlayerReplication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaPlayerReplication()
	{
		if (!Z_Registration_Info_UClass_UCoalaPlayerReplication.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaPlayerReplication.OuterSingleton, Z_Construct_UClass_UCoalaPlayerReplication_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaPlayerReplication.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaPlayerReplication>()
	{
		return UCoalaPlayerReplication::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaPlayerReplication);
	UCoalaPlayerReplication::~UCoalaPlayerReplication() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoalaPlayerReplication, UCoalaPlayerReplication::StaticClass, TEXT("UCoalaPlayerReplication"), &Z_Registration_Info_UClass_UCoalaPlayerReplication, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaPlayerReplication), 3992949412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_511167149(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerReplication_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
