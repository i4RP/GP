// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/V2/RequestCoala.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestCoala() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaArea_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_URequestCoala();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_URequestCoala_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaTile();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_Parms
		{
			UCoalaArea* newAreaData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newAreaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::NewProp_newAreaData = { "newAreaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_Parms, newAreaData), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::NewProp_newAreaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Our delegate to return our value\n" },
		{ "ModuleRelativePath", "V2/RequestCoala.h" },
		{ "ToolTip", "Our delegate to return our value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_DelegateWrapper(const FScriptDelegate& CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData, UCoalaArea* newAreaData)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_Parms
	{
		UCoalaArea* newAreaData;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData_Parms Parms;
	Parms.newAreaData=newAreaData;
	CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_Parms
		{
			UCoalaArea* updatedAreaData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_updatedAreaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::NewProp_updatedAreaData = { "updatedAreaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_Parms, updatedAreaData), Z_Construct_UClass_UCoalaArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::NewProp_updatedAreaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "V2/RequestCoala.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_DelegateWrapper(const FScriptDelegate& CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData, UCoalaArea* updatedAreaData)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_Parms
	{
		UCoalaArea* updatedAreaData;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData_Parms Parms;
	Parms.updatedAreaData=updatedAreaData;
	CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms
		{
			FString error;
			FCoalaTile tileErrorOccure;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tileErrorOccure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms, error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::NewProp_tileErrorOccure = { "tileErrorOccure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms, tileErrorOccure), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::NewProp_tileErrorOccure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "V2/RequestCoala.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "CoalaDelegateRequestCoalaRequestOnError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCoalaDelegateRequestCoalaRequestOnError_DelegateWrapper(const FScriptDelegate& CoalaDelegateRequestCoalaRequestOnError, const FString& error, FCoalaTile tileErrorOccure)
{
	struct _Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms
	{
		FString error;
		FCoalaTile tileErrorOccure;
	};
	_Script_ThoughtfishCoalaPlugin_eventCoalaDelegateRequestCoalaRequestOnError_Parms Parms;
	Parms.error=error;
	Parms.tileErrorOccure=tileErrorOccure;
	CoalaDelegateRequestCoalaRequestOnError.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URequestCoala::execAsyncRequestCoalaMapData)
	{
		P_GET_STRUCT(FCoalaTile,Z_Param_tile);
		P_GET_PROPERTY(FIntProperty,Z_Param_context);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onNewAreaData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUpdatedAreaData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onError);
		P_FINISH;
		P_NATIVE_BEGIN;
		URequestCoala::AsyncRequestCoalaMapData(Z_Param_tile,Z_Param_context,FCoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData(Z_Param_Out_onNewAreaData),FCoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData(Z_Param_Out_onUpdatedAreaData),FCoalaDelegateRequestCoalaRequestOnError(Z_Param_Out_onError));
		P_NATIVE_END;
	}
	void URequestCoala::StaticRegisterNativesURequestCoala()
	{
		UClass* Class = URequestCoala::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncRequestCoalaMapData", &URequestCoala::execAsyncRequestCoalaMapData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics
	{
		struct RequestCoala_eventAsyncRequestCoalaMapData_Parms
		{
			FCoalaTile tile;
			int32 context;
			FScriptDelegate onNewAreaData;
			FScriptDelegate onUpdatedAreaData;
			FScriptDelegate onError;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onNewAreaData_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onNewAreaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUpdatedAreaData_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUpdatedAreaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onError_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestCoala_eventAsyncRequestCoalaMapData_Parms, tile), Z_Construct_UScriptStruct_FCoalaTile, METADATA_PARAMS(nullptr, 0) }; // 27221586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_context_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ThoughtfishCoalaPlugin.REQUEST_CONTEXT" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestCoala_eventAsyncRequestCoalaMapData_Parms, context), METADATA_PARAMS(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onNewAreaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onNewAreaData = { "onNewAreaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestCoala_eventAsyncRequestCoalaMapData_Parms, onNewAreaData), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_NewAreaData__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onNewAreaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onNewAreaData_MetaData)) }; // 3387849635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onUpdatedAreaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onUpdatedAreaData = { "onUpdatedAreaData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestCoala_eventAsyncRequestCoalaMapData_Parms, onUpdatedAreaData), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnSuccess_UpdatedAreaData__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onUpdatedAreaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onUpdatedAreaData_MetaData)) }; // 3977795997
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onError = { "onError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestCoala_eventAsyncRequestCoalaMapData_Parms, onError), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_CoalaDelegateRequestCoalaRequestOnError__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onError_MetaData)) }; // 3106760715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onNewAreaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onUpdatedAreaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::NewProp_onError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "onNewAreaData,onUpdatedAreaData,onError" },
		{ "Category", "Coala|V2|Requests" },
		{ "ModuleRelativePath", "V2/RequestCoala.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URequestCoala, nullptr, "AsyncRequestCoalaMapData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::RequestCoala_eventAsyncRequestCoalaMapData_Parms), Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URequestCoala);
	UClass* Z_Construct_UClass_URequestCoala_NoRegister()
	{
		return URequestCoala::StaticClass();
	}
	struct Z_Construct_UClass_URequestCoala_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequestCoala_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URequestCoala_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URequestCoala_AsyncRequestCoalaMapData, "AsyncRequestCoalaMapData" }, // 1967222630
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestCoala_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "V2/RequestCoala.h" },
		{ "ModuleRelativePath", "V2/RequestCoala.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestCoala_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestCoala>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestCoala_Statics::ClassParams = {
		&URequestCoala::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequestCoala_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestCoala_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestCoala()
	{
		if (!Z_Registration_Info_UClass_URequestCoala.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestCoala.OuterSingleton, Z_Construct_UClass_URequestCoala_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URequestCoala.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<URequestCoala>()
	{
		return URequestCoala::StaticClass();
	}
	URequestCoala::URequestCoala(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestCoala);
	URequestCoala::~URequestCoala() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_V2_RequestCoala_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_V2_RequestCoala_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URequestCoala, URequestCoala::StaticClass, TEXT("URequestCoala"), &Z_Registration_Info_UClass_URequestCoala, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestCoala), 1726666115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_V2_RequestCoala_h_3280200362(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_V2_RequestCoala_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_V2_RequestCoala_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
