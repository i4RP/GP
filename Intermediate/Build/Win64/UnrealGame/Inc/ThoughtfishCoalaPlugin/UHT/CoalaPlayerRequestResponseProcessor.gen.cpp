// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaPlayerRequestResponseProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaPlayerRequestResponseProcessor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerData();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData;
class UScriptStruct* FCoalaRemotePlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaRemotePlayerData, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaRemotePlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaRemotePlayerData>()
{
	return FCoalaRemotePlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaRemotePlayerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "Coala|Response processor" },
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaRemotePlayerData, payload), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_payload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Coala|Response processor" },
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaRemotePlayerData, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaRemotePlayerData",
		sizeof(FCoalaRemotePlayerData),
		alignof(FCoalaRemotePlayerData),
		Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.InnerSingleton, Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended;
class UScriptStruct* FCoalaRemotePlayerDataExtended::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended, (UObject*)Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin(), TEXT("CoalaRemotePlayerDataExtended"));
	}
	return Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.OuterSingleton;
}
template<> THOUGHTFISHCOALAPLUGIN_API UScriptStruct* StaticStruct<FCoalaRemotePlayerDataExtended>()
{
	return FCoalaRemotePlayerDataExtended::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnedPlayerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedPlayerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoalaRemotePlayerDataExtended>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewProp_spawnedPlayerActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewProp_spawnedPlayerActor = { "spawnedPlayerActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoalaRemotePlayerDataExtended, spawnedPlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewProp_spawnedPlayerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewProp_spawnedPlayerActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewProp_spawnedPlayerActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
		nullptr,
		&NewStructOps,
		"CoalaRemotePlayerDataExtended",
		sizeof(FCoalaRemotePlayerDataExtended),
		alignof(FCoalaRemotePlayerDataExtended),
		Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended()
	{
		if (!Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.InnerSingleton, Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms
		{
			FCoalaRemotePlayerData playerData;
			AActor* player;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_playerData = { "playerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms, playerData), Z_Construct_UScriptStruct_FCoalaRemotePlayerData, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData)) }; // 622306874
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_playerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaPlayerDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaPlayerDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoalaPlayerDelegate, FCoalaRemotePlayerData const& playerData, AActor* player)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms
	{
		FCoalaRemotePlayerData playerData;
		AActor* player;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerDelegate_Parms Parms;
	Parms.playerData=playerData;
	Parms.player=player;
	CoalaPlayerDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms
		{
			FCoalaRemotePlayerData playerData;
			AActor* player;
			FVector newWorldPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_playerData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_newWorldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_playerData = { "playerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms, playerData), Z_Construct_UScriptStruct_FCoalaRemotePlayerData, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_playerData_MetaData)) }; // 622306874
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_newWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_newWorldPosition = { "newWorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms, newWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_newWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_newWorldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_playerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::NewProp_newWorldPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaPlayerRequestResponseProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaPlayerUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaPlayerUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaPlayerUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoalaPlayerUpdatedDelegate, FCoalaRemotePlayerData const& playerData, AActor* player, FVector const& newWorldPosition)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms
	{
		FCoalaRemotePlayerData playerData;
		AActor* player;
		FVector newWorldPosition;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaPlayerUpdatedDelegate_Parms Parms;
	Parms.playerData=playerData;
	Parms.player=player;
	Parms.newWorldPosition=newWorldPosition;
	CoalaPlayerUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerRequestResponseProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerRequestResponseProcessor_h_Statics::ScriptStructInfo[] = {
		{ FCoalaRemotePlayerData::StaticStruct, Z_Construct_UScriptStruct_FCoalaRemotePlayerData_Statics::NewStructOps, TEXT("CoalaRemotePlayerData"), &Z_Registration_Info_UScriptStruct_CoalaRemotePlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaRemotePlayerData), 622306874U) },
		{ FCoalaRemotePlayerDataExtended::StaticStruct, Z_Construct_UScriptStruct_FCoalaRemotePlayerDataExtended_Statics::NewStructOps, TEXT("CoalaRemotePlayerDataExtended"), &Z_Registration_Info_UScriptStruct_CoalaRemotePlayerDataExtended, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoalaRemotePlayerDataExtended), 2462954934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerRequestResponseProcessor_h_2898608235(TEXT("/Script/ThoughtfishCoalaPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerRequestResponseProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaPlayerRequestResponseProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
