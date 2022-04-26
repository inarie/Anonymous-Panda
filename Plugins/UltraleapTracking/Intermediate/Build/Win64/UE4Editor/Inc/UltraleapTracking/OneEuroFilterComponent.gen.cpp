// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/OneEuroFilterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneEuroFilterComponent() {}
// Cross Module References
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UOneEuroFilterComponent_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UOneEuroFilterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UOneEuroFilterComponent::execSetDeltaCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeltaCutoff(Z_Param_InDeltaCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOneEuroFilterComponent::execSetCutoffSlope)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCutoffSlope);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCutoffSlope(Z_Param_InCutoffSlope);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOneEuroFilterComponent::execSetMinCutoff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinCutoff(Z_Param_InMinCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOneEuroFilterComponent::execFilter)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Filter(Z_Param_Out_InRaw,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOneEuroFilterComponent::execInit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinCutoff);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCutoffSlope);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InMinCutoff,Z_Param_InCutoffSlope,Z_Param_InDeltaCutoff);
		P_NATIVE_END;
	}
	void UOneEuroFilterComponent::StaticRegisterNativesUOneEuroFilterComponent()
	{
		UClass* Class = UOneEuroFilterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Filter", &UOneEuroFilterComponent::execFilter },
			{ "Init", &UOneEuroFilterComponent::execInit },
			{ "SetCutoffSlope", &UOneEuroFilterComponent::execSetCutoffSlope },
			{ "SetDeltaCutoff", &UOneEuroFilterComponent::execSetDeltaCutoff },
			{ "SetMinCutoff", &UOneEuroFilterComponent::execSetMinCutoff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics
	{
		struct OneEuroFilterComponent_eventFilter_Parms
		{
			FVector InRaw;
			float InDeltaTime;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw = { "InRaw", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, InRaw), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, InDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_InDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Smooth vector */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Smooth vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "Filter", nullptr, nullptr, sizeof(OneEuroFilterComponent_eventFilter_Parms), Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_Filter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_Filter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics
	{
		struct OneEuroFilterComponent_eventInit_Parms
		{
			float InMinCutoff;
			float InCutoffSlope;
			float InDeltaCutoff;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMinCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinCutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCutoffSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCutoffSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDeltaCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff = { "InMinCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InMinCutoff), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope = { "InCutoffSlope", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InCutoffSlope), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff = { "InDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventInit_Parms, InDeltaCutoff), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InMinCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InCutoffSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::NewProp_InDeltaCutoff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "Init", nullptr, nullptr, sizeof(OneEuroFilterComponent_eventInit_Parms), Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics
	{
		struct OneEuroFilterComponent_eventSetCutoffSlope_Parms
		{
			float InCutoffSlope;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCutoffSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCutoffSlope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope = { "InCutoffSlope", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetCutoffSlope_Parms, InCutoffSlope), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::NewProp_InCutoffSlope,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the cutoff slope */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the cutoff slope" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetCutoffSlope", nullptr, nullptr, sizeof(OneEuroFilterComponent_eventSetCutoffSlope_Parms), Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics
	{
		struct OneEuroFilterComponent_eventSetDeltaCutoff_Parms
		{
			float InDeltaCutoff;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDeltaCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff = { "InDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetDeltaCutoff_Parms, InDeltaCutoff), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::NewProp_InDeltaCutoff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the delta slope */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the delta slope" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetDeltaCutoff", nullptr, nullptr, sizeof(OneEuroFilterComponent_eventSetDeltaCutoff_Parms), Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics
	{
		struct OneEuroFilterComponent_eventSetMinCutoff_Parms
		{
			float InMinCutoff;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMinCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff = { "InMinCutoff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneEuroFilterComponent_eventSetMinCutoff_Parms, InMinCutoff), METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::NewProp_InMinCutoff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap IE" },
		{ "Comment", "/** Set the minimum cutoff */" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
		{ "ToolTip", "Set the minimum cutoff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneEuroFilterComponent, nullptr, "SetMinCutoff", nullptr, nullptr, sizeof(OneEuroFilterComponent_eventSetMinCutoff_Parms), Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOneEuroFilterComponent_NoRegister()
	{
		return UOneEuroFilterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOneEuroFilterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOneEuroFilterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOneEuroFilterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_Filter, "Filter" }, // 3894206597
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_Init, "Init" }, // 4098049250
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetCutoffSlope, "SetCutoffSlope" }, // 3458626156
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetDeltaCutoff, "SetDeltaCutoff" }, // 1364858150
		{ &Z_Construct_UFunction_UOneEuroFilterComponent_SetMinCutoff, "SetMinCutoff" }, // 3877176844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneEuroFilterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OneEuroFilterComponent.h" },
		{ "ModuleRelativePath", "Public/OneEuroFilterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneEuroFilterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneEuroFilterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOneEuroFilterComponent_Statics::ClassParams = {
		&UOneEuroFilterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOneEuroFilterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOneEuroFilterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOneEuroFilterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOneEuroFilterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOneEuroFilterComponent, 891286370);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UOneEuroFilterComponent>()
	{
		return UOneEuroFilterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOneEuroFilterComponent(Z_Construct_UClass_UOneEuroFilterComponent, &UOneEuroFilterComponent::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UOneEuroFilterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneEuroFilterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
