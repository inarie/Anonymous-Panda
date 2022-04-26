// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateArm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateArm() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm();
// End Cross Module References
	void UBodyStateFinger::StaticRegisterNativesUBodyStateFinger()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister()
	{
		return UBodyStateFinger::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateFinger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metacarpal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExtended_MetaData[];
#endif
		static void NewProp_bIsExtended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExtended;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateFinger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Convenience BodyState wrapper around finger bones*/" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around finger bones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateFinger, Metacarpal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateFinger, Proximal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "Comment", "// Note thumbs don't have this bone\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Note thumbs don't have this bone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateFinger, Intermediate), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateFinger, Distal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	void Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit(void* Obj)
	{
		((UBodyStateFinger*)Obj)->bIsExtended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended = { "bIsExtended", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodyStateFinger), &Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateFinger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateFinger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams = {
		&UBodyStateFinger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateFinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateFinger, 1737857672);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateFinger>()
	{
		return UBodyStateFinger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateFinger(Z_Construct_UClass_UBodyStateFinger, &UBodyStateFinger::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateFinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateFinger);
	DEFINE_FUNCTION(UBodyStateHand::execPinkyFinger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateFinger**)Z_Param__Result=P_THIS->PinkyFinger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateHand::execRingFinger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateFinger**)Z_Param__Result=P_THIS->RingFinger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateHand::execMiddleFinger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateFinger**)Z_Param__Result=P_THIS->MiddleFinger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateHand::execIndexFinger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateFinger**)Z_Param__Result=P_THIS->IndexFinger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateHand::execThumbFinger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateFinger**)Z_Param__Result=P_THIS->ThumbFinger();
		P_NATIVE_END;
	}
	void UBodyStateHand::StaticRegisterNativesUBodyStateHand()
	{
		UClass* Class = UBodyStateHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IndexFinger", &UBodyStateHand::execIndexFinger },
			{ "MiddleFinger", &UBodyStateHand::execMiddleFinger },
			{ "PinkyFinger", &UBodyStateHand::execPinkyFinger },
			{ "RingFinger", &UBodyStateHand::execRingFinger },
			{ "ThumbFinger", &UBodyStateHand::execThumbFinger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics
	{
		struct BodyStateHand_eventIndexFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateHand_eventIndexFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "IndexFinger", nullptr, nullptr, sizeof(BodyStateHand_eventIndexFinger_Parms), Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_IndexFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics
	{
		struct BodyStateHand_eventMiddleFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateHand_eventMiddleFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "MiddleFinger", nullptr, nullptr, sizeof(BodyStateHand_eventMiddleFinger_Parms), Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_MiddleFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics
	{
		struct BodyStateHand_eventPinkyFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateHand_eventPinkyFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "PinkyFinger", nullptr, nullptr, sizeof(BodyStateHand_eventPinkyFinger_Parms), Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_PinkyFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics
	{
		struct BodyStateHand_eventRingFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateHand_eventRingFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "RingFinger", nullptr, nullptr, sizeof(BodyStateHand_eventRingFinger_Parms), Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_RingFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics
	{
		struct BodyStateHand_eventThumbFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateHand_eventThumbFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, nullptr, "ThumbFinger", nullptr, nullptr, sizeof(BodyStateHand_eventThumbFinger_Parms), Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_ThumbFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateHand_NoRegister()
	{
		return UBodyStateHand::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fingers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fingers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wrist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Palm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateHand_IndexFinger, "IndexFinger" }, // 981722623
		{ &Z_Construct_UFunction_UBodyStateHand_MiddleFinger, "MiddleFinger" }, // 2092602259
		{ &Z_Construct_UFunction_UBodyStateHand_PinkyFinger, "PinkyFinger" }, // 1677793064
		{ &Z_Construct_UFunction_UBodyStateHand_RingFinger, "RingFinger" }, // 1638916391
		{ &Z_Construct_UFunction_UBodyStateHand_ThumbFinger, "ThumbFinger" }, // 3580276013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Convenience BodyState wrapper around bones relating to the hand*/" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around bones relating to the hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner = { "Fingers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "Comment", "// Order should be: Thumb->Pinky\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Order should be: Thumb->Pinky" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers = { "Fingers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateHand, Fingers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist = { "Wrist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateHand, Wrist), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm = { "Palm", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateHand, Palm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateHand_Statics::ClassParams = {
		&UBodyStateHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodyStateHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateHand, 3602385919);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateHand>()
	{
		return UBodyStateHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateHand(Z_Construct_UClass_UBodyStateHand, &UBodyStateHand::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateHand);
	void UBodyStateArm::StaticRegisterNativesUBodyStateArm()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateArm_NoRegister()
	{
		return UBodyStateArm::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateArm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowerArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateArm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateArm, Hand), Z_Construct_UClass_UBodyStateHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm = { "LowerArm", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateArm, LowerArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm = { "UpperArm", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateArm, UpperArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateArm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateArm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateArm_Statics::ClassParams = {
		&UBodyStateArm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodyStateArm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateArm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateArm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateArm, 2491407022);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateArm>()
	{
		return UBodyStateArm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateArm(Z_Construct_UClass_UBodyStateArm, &UBodyStateArm::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateArm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateArm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
