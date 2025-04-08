// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaCharacterBase.h"
#include "ThoughtfishCoalaPlugin/Public/CoalaGPSCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoalaCharacterBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaCharacterBase();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaCharacterBase_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UClass* Z_Construct_UClass_ACoalaInteractableActor_NoRegister();
	THOUGHTFISHCOALAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature();
	THOUGHTFISHCOALAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCoalaGPSCoordinates();
	UPackage* Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics
	{
		struct _Script_ThoughtfishCoalaPlugin_eventOnWorldPositionChanged_Parms
		{
			FCoalaGPSCoordinates gpsPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_gpsPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::NewProp_gpsPosition = { "gpsPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ThoughtfishCoalaPlugin_eventOnWorldPositionChanged_Parms, gpsPosition), Z_Construct_UScriptStruct_FCoalaGPSCoordinates, METADATA_PARAMS(nullptr, 0) }; // 2370250290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::NewProp_gpsPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin, nullptr, "OnWorldPositionChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::_Script_ThoughtfishCoalaPlugin_eventOnWorldPositionChanged_Parms), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWorldPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWorldPositionChanged, FCoalaGPSCoordinates gpsPosition)
{
	struct _Script_ThoughtfishCoalaPlugin_eventOnWorldPositionChanged_Parms
	{
		FCoalaGPSCoordinates gpsPosition;
	};
	_Script_ThoughtfishCoalaPlugin_eventOnWorldPositionChanged_Parms Parms;
	Parms.gpsPosition=gpsPosition;
	OnWorldPositionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACoalaCharacterBase::execOnPoiInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPoiInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoalaCharacterBase::execenableMovementOnClickOrTouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->enableMovementOnClickOrTouch();
		P_NATIVE_END;
	}
	struct CoalaCharacterBase_eventBPOnPoiInteract_Parms
	{
		ACoalaInteractableActor* actor;
		bool clickedOnInteractable;
	};
	static FName NAME_ACoalaCharacterBase_BPOnPoiInteract = FName(TEXT("BPOnPoiInteract"));
	void ACoalaCharacterBase::BPOnPoiInteract(ACoalaInteractableActor* actor, bool clickedOnInteractable)
	{
		CoalaCharacterBase_eventBPOnPoiInteract_Parms Parms;
		Parms.actor=actor;
		Parms.clickedOnInteractable=clickedOnInteractable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACoalaCharacterBase_BPOnPoiInteract),&Parms);
	}
	void ACoalaCharacterBase::StaticRegisterNativesACoalaCharacterBase()
	{
		UClass* Class = ACoalaCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "enableMovementOnClickOrTouch", &ACoalaCharacterBase::execenableMovementOnClickOrTouch },
			{ "OnPoiInteract", &ACoalaCharacterBase::execOnPoiInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static void NewProp_clickedOnInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_clickedOnInteractable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoalaCharacterBase_eventBPOnPoiInteract_Parms, actor), Z_Construct_UClass_ACoalaInteractableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_clickedOnInteractable_SetBit(void* Obj)
	{
		((CoalaCharacterBase_eventBPOnPoiInteract_Parms*)Obj)->clickedOnInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_clickedOnInteractable = { "clickedOnInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoalaCharacterBase_eventBPOnPoiInteract_Parms), &Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_clickedOnInteractable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::NewProp_clickedOnInteractable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaCharacterBase, nullptr, "BPOnPoiInteract", nullptr, nullptr, sizeof(CoalaCharacterBase_eventBPOnPoiInteract_Parms), Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coala|Character" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaCharacterBase, nullptr, "enableMovementOnClickOrTouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoalaCharacterBase, nullptr, "OnPoiInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoalaCharacterBase);
	UClass* Z_Construct_UClass_ACoalaCharacterBase_NoRegister()
	{
		return ACoalaCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACoalaCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceToPLayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceToPLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cursorSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cursorSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_interactionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWorldPositionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldPositionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoalaCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThoughtfishCoalaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoalaCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoalaCharacterBase_BPOnPoiInteract, "BPOnPoiInteract" }, // 3658688871
		{ &Z_Construct_UFunction_ACoalaCharacterBase_enableMovementOnClickOrTouch, "enableMovementOnClickOrTouch" }, // 482458263
		{ &Z_Construct_UFunction_ACoalaCharacterBase_OnPoiInteract, "OnPoiInteract" }, // 137286809
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CoalaCharacterBase.h" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cameraRotation_MetaData[] = {
		{ "Category", "CameraVariables" },
		{ "Comment", "//Rotation of the Player Camera\n" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "Rotation of the Player Camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cameraRotation = { "cameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, cameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_distanceToPLayer_MetaData[] = {
		{ "Category", "CameraVariables" },
		{ "Comment", "//Distance from the Player to the Camera\n" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "Distance from the Player to the Camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_distanceToPLayer = { "distanceToPLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, distanceToPLayer), METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_distanceToPLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_distanceToPLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cursorSize_MetaData[] = {
		{ "Category", "MouseCursorVariables" },
		{ "Comment", "//Size of the Mouse Cursor\n" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "Size of the Mouse Cursor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cursorSize = { "cursorSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, cursorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cursorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cursorSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_interactionRadius_MetaData[] = {
		{ "Category", "Coala|Character" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_interactionRadius = { "interactionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, interactionRadius), METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_interactionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_interactionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_OnWorldPositionChanged_MetaData[] = {
		{ "Category", "Coala|Character" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_OnWorldPositionChanged = { "OnWorldPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, OnWorldPositionChanged), Z_Construct_UDelegateFunction_ThoughtfishCoalaPlugin_OnWorldPositionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_OnWorldPositionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_OnWorldPositionChanged_MetaData)) }; // 3262916240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** A decal that projects to the cursor location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CursorToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoalaCharacterBase.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoalaCharacterBase, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoalaCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_distanceToPLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_cursorSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_interactionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_OnWorldPositionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CursorToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoalaCharacterBase_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoalaCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoalaCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoalaCharacterBase_Statics::ClassParams = {
		&ACoalaCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoalaCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoalaCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoalaCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoalaCharacterBase()
	{
		if (!Z_Registration_Info_UClass_ACoalaCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoalaCharacterBase.OuterSingleton, Z_Construct_UClass_ACoalaCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoalaCharacterBase.OuterSingleton;
	}
	template<> THOUGHTFISHCOALAPLUGIN_API UClass* StaticClass<ACoalaCharacterBase>()
	{
		return ACoalaCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoalaCharacterBase);
	ACoalaCharacterBase::~ACoalaCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoalaCharacterBase, ACoalaCharacterBase::StaticClass, TEXT("ACoalaCharacterBase"), &Z_Registration_Info_UClass_ACoalaCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoalaCharacterBase), 339926875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCharacterBase_h_356417566(TEXT("/Script/ThoughtfishCoalaPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ThoughtfishCoalaPlugin_Source_ThoughtfishCoalaPlugin_Public_CoalaCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
