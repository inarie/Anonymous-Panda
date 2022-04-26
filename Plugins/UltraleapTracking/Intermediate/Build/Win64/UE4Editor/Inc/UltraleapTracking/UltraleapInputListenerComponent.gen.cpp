// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapInputListenerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapInputListenerComponent() {}
// Cross Module References
	ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapInputListenerComponent_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapInputListenerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "OnInputActionUL__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUltraleapInputListenerComponent::execStopListeningForInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapInputListenerComponent::execListenForInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_GET_UBOOL(Z_Param_bConsume);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputActionUL(Z_Param_Callback));
		P_NATIVE_END;
	}
	void UUltraleapInputListenerComponent::StaticRegisterNativesUUltraleapInputListenerComponent()
	{
		UClass* Class = UUltraleapInputListenerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenForInputAction", &UUltraleapInputListenerComponent::execListenForInputAction },
			{ "StopListeningForInputAction", &UUltraleapInputListenerComponent::execStopListeningForInputAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics
	{
		struct UltraleapInputListenerComponent_eventListenForInputAction_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> EventType;
			bool bConsume;
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType;
		static void NewProp_bConsume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsume;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume_SetBit(void* Obj)
	{
		((UltraleapInputListenerComponent_eventListenForInputAction_Parms*)Obj)->bConsume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume = { "bConsume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UltraleapInputListenerComponent_eventListenForInputAction_Parms), &Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventListenForInputAction_Parms, Callback), Z_Construct_UDelegateFunction_UltraleapTracking_OnInputActionUL__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_bConsume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\n\x09 * that we're not currently in UI-Only Input Mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\nthat we're not currently in UI-Only Input Mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapInputListenerComponent, nullptr, "ListenForInputAction", nullptr, nullptr, sizeof(UltraleapInputListenerComponent_eventListenForInputAction_Parms), Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics
	{
		struct UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> EventType;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::NewProp_EventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Removes the binding for a particular action's callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Removes the binding for a particular action's callback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapInputListenerComponent, nullptr, "StopListeningForInputAction", nullptr, nullptr, sizeof(UltraleapInputListenerComponent_eventStopListeningForInputAction_Parms), Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUltraleapInputListenerComponent_NoRegister()
	{
		return UUltraleapInputListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUltraleapInputListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopAction_MetaData[];
#endif
		static void NewProp_bStopAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUltraleapInputListenerComponent_ListenForInputAction, "ListenForInputAction" }, // 1237454064
		{ &Z_Construct_UFunction_UUltraleapInputListenerComponent_StopListeningForInputAction, "StopListeningForInputAction" }, // 16389930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Customisable input event listener, used to dynamically subscribe to input events from blueprint\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UltraleapInputListenerComponent.h" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
		{ "ToolTip", "Customisable input event listener, used to dynamically subscribe to input events from blueprint" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_SetBit(void* Obj)
	{
		((UUltraleapInputListenerComponent*)Obj)->bStopAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction = { "bStopAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UUltraleapInputListenerComponent), &Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUltraleapInputListenerComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UltraleapInputListenerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUltraleapInputListenerComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_bStopAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::NewProp_InputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUltraleapInputListenerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::ClassParams = {
		&UUltraleapInputListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUltraleapInputListenerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUltraleapInputListenerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUltraleapInputListenerComponent, 3652817546);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UUltraleapInputListenerComponent>()
	{
		return UUltraleapInputListenerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUltraleapInputListenerComponent(Z_Construct_UClass_UUltraleapInputListenerComponent, &UUltraleapInputListenerComponent::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UUltraleapInputListenerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUltraleapInputListenerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
