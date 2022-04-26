// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/InteractionEngine/GrabClassifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabClassifierComponent() {}
// Cross Module References
	ULTRALEAPTRACKING_API UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FGrabClassifierParams();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGrabClassifierProbe_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UGrabClassifierProbe();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UIEGrabClassifierComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics
	{
		struct _Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms
		{
			UIEGrabClassifierComponent* Source;
			bool IsGrabbing;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static void NewProp_IsGrabbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGrabbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms, Source), Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source_MetaData)) };
	void Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing_SetBit(void* Obj)
	{
		((_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms*)Obj)->IsGrabbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing = { "IsGrabbing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms), &Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::NewProp_IsGrabbing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking, nullptr, "GrabClassifierGrabStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_UltraleapTracking_eventGrabClassifierGrabStateChanged_Parms), Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FGrabClassifierParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FGrabClassifierParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrabClassifierParams, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("GrabClassifierParams"), sizeof(FGrabClassifierParams), Get_Z_Construct_UScriptStruct_FGrabClassifierParams_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FGrabClassifierParams>()
{
	return FGrabClassifierParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrabClassifierParams(FGrabClassifierParams::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("GrabClassifierParams"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFGrabClassifierParams
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFGrabClassifierParams()
	{
		UScriptStruct::DeferCppStructOps<FGrabClassifierParams>(FName(TEXT("GrabClassifierParams")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFGrabClassifierParams;
	struct Z_Construct_UScriptStruct_FGrabClassifierParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerStickiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerStickiness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbStickiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbStickiness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCurl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumCurl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumCurl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumCurl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerTipRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerTipRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbTipRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbTipRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCurlVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumCurlVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedMaximumCurlVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabbedMaximumCurlVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistanceFromHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistanceFromHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGrabCooldown_MetaData[];
#endif
		static void NewProp_UseGrabCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGrabCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrabClassifierParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The amount of curl hysteresis on each finger type </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The amount of curl hysteresis on each finger type </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness = { "FingerStickiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, FingerStickiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness = { "ThumbStickiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, ThumbStickiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The minimum and maximum curl values fingers are allowed to \"Grab\" within </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The minimum and maximum curl values fingers are allowed to \"Grab\" within </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl = { "MaximumCurl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumCurl), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl = { "MinimumCurl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, MinimumCurl), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The radius considered for intersection around the fingertips </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The radius considered for intersection around the fingertips </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius = { "FingerTipRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, FingerTipRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius = { "ThumbTipRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, ThumbTipRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The minimum amount of time between repeated grabs of a single object </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The minimum amount of time between repeated grabs of a single object </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown = { "GrabCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, GrabCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** <summary> The maximum rate that the fingers are extending where grabs are considered. </summary> */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "<summary> The maximum rate that the fingers are extending where grabs are considered. </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity = { "MaximumCurlVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumCurlVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity = { "GrabbedMaximumCurlVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, GrabbedMaximumCurlVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand = { "MaximumDistanceFromHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGrabClassifierParams, MaximumDistanceFromHand), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_SetBit(void* Obj)
	{
		((FGrabClassifierParams*)Obj)->UseGrabCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown = { "UseGrabCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGrabClassifierParams), &Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerStickiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbStickiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MinimumCurl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_FingerTipRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_ThumbTipRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumCurlVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_GrabbedMaximumCurlVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_MaximumDistanceFromHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::NewProp_UseGrabCooldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"GrabClassifierParams",
		sizeof(FGrabClassifierParams),
		alignof(FGrabClassifierParams),
		Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrabClassifierParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrabClassifierParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrabClassifierParams"), sizeof(FGrabClassifierParams), Get_Z_Construct_UScriptStruct_FGrabClassifierParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGrabClassifierParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrabClassifierParams_Hash() { return 3331776811U; }
	void UGrabClassifierProbe::StaticRegisterNativesUGrabClassifierProbe()
	{
	}
	UClass* Z_Construct_UClass_UGrabClassifierProbe_NoRegister()
	{
		return UGrabClassifierProbe::StaticClass();
	}
	struct Z_Construct_UClass_UGrabClassifierProbe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Curl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevCurl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrevCurl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInside_MetaData[];
#endif
		static void NewProp_IsInside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInside;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateColliders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateColliders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateColliders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabClassifierProbe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents the state of a contact probe, filled in in blueprint from skeleton bones */" },
		{ "IncludePath", "InteractionEngine/GrabClassifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Represents the state of a contact probe, filled in in blueprint from skeleton bones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabClassifierProbe, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabClassifierProbe, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabClassifierProbe, Curl), METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl = { "PrevCurl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabClassifierProbe, PrevCurl), METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_SetBit(void* Obj)
	{
		((UGrabClassifierProbe*)Obj)->IsInside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside = { "IsInside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabClassifierProbe), &Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_Inner = { "CandidateColliders", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders = { "CandidateColliders", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabClassifierProbe, CandidateColliders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_Curl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_PrevCurl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_IsInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabClassifierProbe_Statics::NewProp_CandidateColliders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabClassifierProbe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabClassifierProbe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabClassifierProbe_Statics::ClassParams = {
		&UGrabClassifierProbe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabClassifierProbe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabClassifierProbe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabClassifierProbe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabClassifierProbe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabClassifierProbe, 2511834252);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UGrabClassifierProbe>()
	{
		return UGrabClassifierProbe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabClassifierProbe(Z_Construct_UClass_UGrabClassifierProbe, &UGrabClassifierProbe::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UGrabClassifierProbe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabClassifierProbe);
	DEFINE_FUNCTION(UIEGrabClassifierComponent::execForceReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIEGrabClassifierComponent::execUpdateClassifier)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Hand);
		P_GET_TARRAY_REF(UGrabClassifierProbe*,Z_Param_Out_Probes);
		P_GET_UBOOL(Z_Param_IgnoreTemporal);
		P_GET_UBOOL(Z_Param_IsLeftHand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_IsGrabbed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateClassifier(Z_Param_Hand,Z_Param_Out_Probes,Z_Param_IgnoreTemporal,Z_Param_IsLeftHand,Z_Param_DeltaTime,Z_Param_IsGrabbed);
		P_NATIVE_END;
	}
	void UIEGrabClassifierComponent::StaticRegisterNativesUIEGrabClassifierComponent()
	{
		UClass* Class = UIEGrabClassifierComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceReset", &UIEGrabClassifierComponent::execForceReset },
			{ "UpdateClassifier", &UIEGrabClassifierComponent::execUpdateClassifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Force reset of the grab state, used when grab state in BP is forced on tracking lost\n\x09 *  without this, a spurious ungrab event from the grab classifier will occur on tracking found */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Force reset of the grab state, used when grab state in BP is forced on tracking lost\nwithout this, a spurious ungrab event from the grab classifier will occur on tracking found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIEGrabClassifierComponent, nullptr, "ForceReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics
	{
		struct IEGrabClassifierComponent_eventUpdateClassifier_Parms
		{
			const USceneComponent* Hand;
			TArray<UGrabClassifierProbe*> Probes;
			bool IgnoreTemporal;
			bool IsLeftHand;
			float DeltaTime;
			bool IsGrabbed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Probes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Probes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreTemporal_MetaData[];
#endif
		static void NewProp_IgnoreTemporal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreTemporal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeftHand_MetaData[];
#endif
		static void NewProp_IsLeftHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGrabbed_MetaData[];
#endif
		static void NewProp_IsGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGrabbed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, Hand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_Inner = { "Probes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGrabClassifierProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes = { "Probes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, Probes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_SetBit(void* Obj)
	{
		((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IgnoreTemporal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal = { "IgnoreTemporal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_SetBit(void* Obj)
	{
		((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IsLeftHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand = { "IsLeftHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IEGrabClassifierComponent_eventUpdateClassifier_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_SetBit(void* Obj)
	{
		((IEGrabClassifierComponent_eventUpdateClassifier_Parms*)Obj)->IsGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed = { "IsGrabbed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_Probes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IgnoreTemporal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsLeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::NewProp_IsGrabbed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Logic for grabbing, called from blueprint, implemented in C++ for simplicity and parity with C# */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Logic for grabbing, called from blueprint, implemented in C++ for simplicity and parity with C#" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIEGrabClassifierComponent, nullptr, "UpdateClassifier", nullptr, nullptr, sizeof(IEGrabClassifierComponent_eventUpdateClassifier_Parms), Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIEGrabClassifierComponent_NoRegister()
	{
		return UIEGrabClassifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIEGrabClassifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsThisControllerGrabbing_MetaData[];
#endif
		static void NewProp_IsThisControllerGrabbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsThisControllerGrabbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevThisControllerGrabbing_MetaData[];
#endif
		static void NewProp_PrevThisControllerGrabbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrevThisControllerGrabbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIsGrabbingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsGrabbingChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIEGrabClassifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIEGrabClassifierComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIEGrabClassifierComponent_ForceReset, "ForceReset" }, // 209109120
		{ &Z_Construct_UFunction_UIEGrabClassifierComponent_UpdateClassifier, "UpdateClassifier" }, // 2805964097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Manages logic for Grabbing, based on the Unity Interaction Engine equivalent */" },
		{ "IncludePath", "InteractionEngine/GrabClassifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Manages logic for Grabbing, based on the Unity Interaction Engine equivalent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  Grab classifier behavior, initialised in blueprint */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "Grab classifier behavior, initialised in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, Params), Z_Construct_UScriptStruct_FGrabClassifierParams, METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_SetBit(void* Obj)
	{
		((UIEGrabClassifierComponent*)Obj)->IsThisControllerGrabbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing = { "IsThisControllerGrabbing", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIEGrabClassifierComponent), &Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	void Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_SetBit(void* Obj)
	{
		((UIEGrabClassifierComponent*)Obj)->PrevThisControllerGrabbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing = { "PrevThisControllerGrabbing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIEGrabClassifierComponent), &Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress = { "CoolDownProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, CoolDownProgress), METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside = { "NumInside", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, NumInside), METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged_MetaData[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/**  called when the grab state has changed */" },
		{ "ModuleRelativePath", "Public/InteractionEngine/GrabClassifierComponent.h" },
		{ "ToolTip", "called when the grab state has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged = { "OnIsGrabbingChanged", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEGrabClassifierComponent, OnIsGrabbingChanged), Z_Construct_UDelegateFunction_UltraleapTracking_GrabClassifierGrabStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_IsThisControllerGrabbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_PrevThisControllerGrabbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_CoolDownProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_NumInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIEGrabClassifierComponent_Statics::NewProp_OnIsGrabbingChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIEGrabClassifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIEGrabClassifierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIEGrabClassifierComponent_Statics::ClassParams = {
		&UIEGrabClassifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIEGrabClassifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIEGrabClassifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIEGrabClassifierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIEGrabClassifierComponent, 43942524);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UIEGrabClassifierComponent>()
	{
		return UIEGrabClassifierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIEGrabClassifierComponent(Z_Construct_UClass_UIEGrabClassifierComponent, &UIEGrabClassifierComponent::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UIEGrabClassifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIEGrabClassifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
