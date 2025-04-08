// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/TransportationObjects.h"
#include "ThoughtfishCoalaPlugin/Public/StringArrayWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransportationObjects() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationObjects();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UTransportationObjects_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_UVehicle_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStringArrayWrapper();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	void UTransportationObjects::StaticRegisterNativesUTransportationObjects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransportationObjects);
	UClass* Z_Construct_UClass_UTransportationObjects_NoRegister()
	{
		return UTransportationObjects::StaticClass();
	}
	struct Z_Construct_UClass_UTransportationObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transportationParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_transportationParent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_routeActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routeActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_routeActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_routeActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_stopsPerRouteId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopsPerRouteId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopsPerRouteId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopsPerRouteId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_routesPerStopId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routesPerStopId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_routesPerStopId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_routesPerStopId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vehicleActorsPerTrip_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_vehicleActorsPerTrip_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vehicleActorsPerTrip_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_vehicleActorsPerTrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderedTripSpline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_renderedTripSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransportationObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "IncludePath", "TransportationObjects.h" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_transportationParent_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_transportationParent = { "transportationParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, transportationParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_transportationParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_transportationParent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_ValueProp = { "routeActors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_Key_KeyProp = { "routeActors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors = { "routeActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, routeActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_ValueProp = { "stopActors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_Key_KeyProp = { "stopActors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors = { "stopActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, stopActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_ValueProp = { "stopsPerRouteId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStringArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 1556959102
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_Key_KeyProp = { "stopsPerRouteId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId = { "stopsPerRouteId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, stopsPerRouteId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_MetaData)) }; // 1556959102
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_ValueProp = { "routesPerStopId", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStringArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 1556959102
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_Key_KeyProp = { "routesPerStopId_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId = { "routesPerStopId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, routesPerStopId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_MetaData)) }; // 1556959102
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_ValueProp = { "vehicleActorsPerTrip", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_Key_KeyProp = { "vehicleActorsPerTrip_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip = { "vehicleActorsPerTrip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, vehicleActorsPerTrip), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransportationObjects_Statics::NewProp_renderedTripSpline_MetaData[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransportationObjects_Statics::NewProp_renderedTripSpline = { "renderedTripSpline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransportationObjects, renderedTripSpline), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_renderedTripSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::NewProp_renderedTripSpline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransportationObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_transportationParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routeActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_stopsPerRouteId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_routesPerStopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_vehicleActorsPerTrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransportationObjects_Statics::NewProp_renderedTripSpline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransportationObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransportationObjects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransportationObjects_Statics::ClassParams = {
		&UTransportationObjects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransportationObjects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransportationObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransportationObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransportationObjects()
	{
		if (!Z_Registration_Info_UClass_UTransportationObjects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransportationObjects.OuterSingleton, Z_Construct_UClass_UTransportationObjects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransportationObjects.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UTransportationObjects>()
	{
		return UTransportationObjects::StaticClass();
	}
	UTransportationObjects::UTransportationObjects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransportationObjects);
	UTransportationObjects::~UTransportationObjects() {}
	DEFINE_FUNCTION(UCoalaTransportationObjectsShadowingFix::execBreakTransportationObjects)
	{
		P_GET_OBJECT(UTransportationObjects,Z_Param_InTransportationObjects);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_transportationParent);
		P_GET_TMAP_REF(FString,AActor*,Z_Param_Out_routeActors);
		P_GET_TMAP_REF(FString,AActor*,Z_Param_Out_stopActors);
		P_GET_TMAP_REF(FString,FStringArrayWrapper,Z_Param_Out_routesPerStopId);
		P_GET_TMAP_REF(FString,UVehicle*,Z_Param_Out_vehicleActorsPerTrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoalaTransportationObjectsShadowingFix::BreakTransportationObjects(Z_Param_InTransportationObjects,Z_Param_Out_transportationParent,Z_Param_Out_routeActors,Z_Param_Out_stopActors,Z_Param_Out_routesPerStopId,Z_Param_Out_vehicleActorsPerTrip);
		P_NATIVE_END;
	}
	void UCoalaTransportationObjectsShadowingFix::StaticRegisterNativesUCoalaTransportationObjectsShadowingFix()
	{
		UClass* Class = UCoalaTransportationObjectsShadowingFix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTransportationObjects", &UCoalaTransportationObjectsShadowingFix::execBreakTransportationObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics
	{
		struct CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms
		{
			UTransportationObjects* InTransportationObjects;
			AActor* transportationParent;
			TMap<FString,AActor*> routeActors;
			TMap<FString,AActor*> stopActors;
			TMap<FString,FStringArrayWrapper> routesPerStopId;
			TMap<FString,UVehicle*> vehicleActorsPerTrip;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTransportationObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_transportationParent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_routeActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routeActors_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_routeActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopActors_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_stopActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_routesPerStopId_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_routesPerStopId_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_routesPerStopId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vehicleActorsPerTrip_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_vehicleActorsPerTrip_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_vehicleActorsPerTrip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_InTransportationObjects = { "InTransportationObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, InTransportationObjects), Z_Construct_UClass_UTransportationObjects_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_transportationParent = { "transportationParent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, transportationParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors_ValueProp = { "routeActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors_Key_KeyProp = { "routeActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors = { "routeActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, routeActors), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors_ValueProp = { "stopActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors_Key_KeyProp = { "stopActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors = { "stopActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, stopActors), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId_ValueProp = { "routesPerStopId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStringArrayWrapper, METADATA_PARAMS(nullptr, 0) }; // 1556959102
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId_Key_KeyProp = { "routesPerStopId_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId = { "routesPerStopId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, routesPerStopId), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1556959102
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_ValueProp = { "vehicleActorsPerTrip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_Key_KeyProp = { "vehicleActorsPerTrip_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip = { "vehicleActorsPerTrip", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms, vehicleActorsPerTrip), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_InTransportationObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_transportationParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routeActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_stopActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_routesPerStopId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::NewProp_vehicleActorsPerTrip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Transportation" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix, nullptr, "BreakTransportationObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::CoalaTransportationObjectsShadowingFix_eventBreakTransportationObjects_Parms), Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoalaTransportationObjectsShadowingFix);
	UClass* Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_NoRegister()
	{
		return UCoalaTransportationObjectsShadowingFix::StaticClass();
	}
	struct Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoalaTransportationObjectsShadowingFix_BreakTransportationObjects, "BreakTransportationObjects" }, // 1035150144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TransportationObjects.h" },
		{ "ModuleRelativePath", "Public/TransportationObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoalaTransportationObjectsShadowingFix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::ClassParams = {
		&UCoalaTransportationObjectsShadowingFix::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix()
	{
		if (!Z_Registration_Info_UClass_UCoalaTransportationObjectsShadowingFix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoalaTransportationObjectsShadowingFix.OuterSingleton, Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoalaTransportationObjectsShadowingFix.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<UCoalaTransportationObjectsShadowingFix>()
	{
		return UCoalaTransportationObjectsShadowingFix::StaticClass();
	}
	UCoalaTransportationObjectsShadowingFix::UCoalaTransportationObjectsShadowingFix(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoalaTransportationObjectsShadowingFix);
	UCoalaTransportationObjectsShadowingFix::~UCoalaTransportationObjectsShadowingFix() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransportationObjects, UTransportationObjects::StaticClass, TEXT("UTransportationObjects"), &Z_Registration_Info_UClass_UTransportationObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransportationObjects), 2698872869U) },
		{ Z_Construct_UClass_UCoalaTransportationObjectsShadowingFix, UCoalaTransportationObjectsShadowingFix::StaticClass, TEXT("UCoalaTransportationObjectsShadowingFix"), &Z_Registration_Info_UClass_UCoalaTransportationObjectsShadowingFix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoalaTransportationObjectsShadowingFix), 2888880122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationObjects_h_3108487460(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_TransportationObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
