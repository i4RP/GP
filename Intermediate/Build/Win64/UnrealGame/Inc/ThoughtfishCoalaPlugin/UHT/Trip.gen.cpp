// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/Trip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrip() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTripShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTripShadowingFix_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UShape_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTrip();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTrip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UTrip::StaticRegisterNativesUTrip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrip);
	UClass* Z_Construct_UClass_UTrip_NoRegister()
	{
		return UTrip::StaticClass();
	}
	struct Z_Construct_UClass_UTrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_serviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_serviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_routeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_routeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInboundDirection_MetaData[];
#endif
		static void NewProp_isInboundDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInboundDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shapeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stopIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bikesAllowed_MetaData[];
#endif
		static void NewProp_bikesAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bikesAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelchairAccessible_MetaData[];
#endif
		static void NewProp_wheelchairAccessible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wheelchairAccessible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_headsign_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_headsign;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shapePerStopId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_shapePerStopId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapePerStopId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_shapePerStopId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "IncludePath", "Trip.h" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_serviceId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_serviceId = { "serviceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, serviceId), METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_serviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_serviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_routeId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_routeId = { "routeId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, routeId), METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_routeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_routeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	void Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection_SetBit(void* Obj)
	{
		((UTrip*)Obj)->isInboundDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection = { "isInboundDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrip), &Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_shapeId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_shapeId = { "shapeId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, shapeId), METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_shapeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_shapeId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_stopIds_Inner = { "stopIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_stopIds_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_stopIds = { "stopIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, stopIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_stopIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_stopIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	void Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed_SetBit(void* Obj)
	{
		((UTrip*)Obj)->bikesAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed = { "bikesAllowed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrip), &Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	void Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible_SetBit(void* Obj)
	{
		((UTrip*)Obj)->wheelchairAccessible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible = { "wheelchairAccessible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrip), &Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_headsign_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_headsign = { "headsign", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, headsign), METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_headsign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_headsign_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_ValueProp = { "shapePerStopId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UShape_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_Key_KeyProp = { "shapePerStopId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId = { "shapePerStopId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrip, shapePerStopId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_serviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_routeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_isInboundDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_shapeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_stopIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_stopIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_bikesAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_wheelchairAccessible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_headsign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrip_Statics::NewProp_shapePerStopId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrip_Statics::ClassParams = {
		&UTrip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrip()
	{
		if (!Z_Registration_Info_UClass_UTrip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrip.OuterSingleton, Z_Construct_UClass_UTrip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrip.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UTrip>()
	{
		return UTrip::StaticClass();
	}
	UTrip::UTrip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrip);
	UTrip::~UTrip() {}
	DEFINE_FUNCTION(UCoalaTripShadowingFix::execBreakTrip)
	{
		P_GET_OBJECT(UTrip,Z_Param_InTrip);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_serviceId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_routeId);
		P_GET_UBOOL_REF(Z_Param_Out_isInboundDirection);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_shapeId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_stopIds);
		P_GET_UBOOL_REF(Z_Param_Out_bikesAllowed);
		P_GET_UBOOL_REF(Z_Param_Out_wheelchairAccessible);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_headsign);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTripShadowingFix::BreakTrip(Z_Param_InTrip,Z_Param_Out_serviceId,Z_Param_Out_routeId,Z_Param_Out_isInboundDirection,Z_Param_Out_shapeId,Z_Param_Out_stopIds,Z_Param_Out_bikesAllowed,Z_Param_Out_wheelchairAccessible,Z_Param_Out_headsign);
		P_NATIVE_END;
	}
	void UCoalaTripShadowingFix::StaticRegisterNativesUCoalaTripShadowingFix()
	{
		UClass* Class = UCoalaTripShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTrip", &UCoalaTripShadowingFix::execBreakTrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics
	{
		struct CoalaTripShadowingFix_eventBreakTrip_Parms
		{
			UTrip* InTrip;
			FString serviceId;
			FString routeId;
			bool isInboundDirection;
			FString shapeId;
			TArray<FString> stopIds;
			bool bikesAllowed;
			bool wheelchairAccessible;
			FString headsign;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrip;
		static const UECodeGen_Private::FStrPropertyParams NewProp_serviceId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routeId;
		static void NewProp_isInboundDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInboundDirection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_shapeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stopIds;
		static void NewProp_bikesAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bikesAllowed;
		static void NewProp_wheelchairAccessible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wheelchairAccessible;
		static const UECodeGen_Private::FStrPropertyParams NewProp_headsign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_InTrip = { "InTrip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, InTrip), Z_Construct_UClass_UTrip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_serviceId = { "serviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, serviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_routeId = { "routeId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, routeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_isInboundDirection_SetBit(void* Obj)
	{
		((CoalaTripShadowingFix_eventBreakTrip_Parms*)Obj)->isInboundDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_isInboundDirection = { "isInboundDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTripShadowingFix_eventBreakTrip_Parms), &Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_isInboundDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_shapeId = { "shapeId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, shapeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_stopIds_Inner = { "stopIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_stopIds = { "stopIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, stopIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_bikesAllowed_SetBit(void* Obj)
	{
		((CoalaTripShadowingFix_eventBreakTrip_Parms*)Obj)->bikesAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_bikesAllowed = { "bikesAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTripShadowingFix_eventBreakTrip_Parms), &Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_bikesAllowed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_wheelchairAccessible_SetBit(void* Obj)
	{
		((CoalaTripShadowingFix_eventBreakTrip_Parms*)Obj)->wheelchairAccessible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_wheelchairAccessible = { "wheelchairAccessible", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaTripShadowingFix_eventBreakTrip_Parms), &Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_wheelchairAccessible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_headsign = { "headsign", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTripShadowingFix_eventBreakTrip_Parms, headsign), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_InTrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_serviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_routeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_isInboundDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_shapeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_stopIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_stopIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_bikesAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_wheelchairAccessible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::NewProp_headsign,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/Trip.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTripShadowingFix, nullptr, "BreakTrip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::CoalaTripShadowingFix_eventBreakTrip_Parms), Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTripShadowingFix);
	UClass* Z_Construct_UClass_UCoalaTripShadowingFix_NoRegister()
	{
		return UCoalaTripShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTripShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTripShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTripShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTripShadowingFix_BreakTrip, "BreakTrip" }, // 1167874824
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTripShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Trip.h" },
		{ "ModuleRelativePath", "Public/Trip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTripShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTripShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTripShadowingFix_Statics::ClassParams = {
		&UCoalaTripShadowingFix::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTripShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTripShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTripShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaTripShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTripShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaTripShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTripShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTripShadowingFix>()
	{
		return UCoalaTripShadowingFix::StaticClass();
	}
	UCoalaTripShadowingFix::UCoalaTripShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTripShadowingFix);
	UCoalaTripShadowingFix::~UCoalaTripShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Trip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Trip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrip, UTrip::StaticClass, TEXT("UTrip"), &Z_Registration_Info_UClass_UTrip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrip), 1843808697U) },
		{ Z_Construct_UClass_UCoalaTripShadowingFix, UCoalaTripShadowingFix::StaticClass, TEXT("UCoalaTripShadowingFix"), &Z_Registration_Info_UClass_UCoalaTripShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTripShadowingFix), 1399692515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Trip_h_1508726174(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Trip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_Trip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
