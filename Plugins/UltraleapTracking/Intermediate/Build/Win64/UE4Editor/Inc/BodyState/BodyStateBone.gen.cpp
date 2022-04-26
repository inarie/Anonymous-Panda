// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBone() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
// End Cross Module References
class UScriptStruct* FBodyStateBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneData, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneData"), sizeof(FBodyStateBoneData), Get_Z_Construct_UScriptStruct_FBodyStateBoneData_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateBoneData>()
{
	return FBodyStateBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateBoneData(FBodyStateBoneData::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData()
	{
		UScriptStruct::DeferCppStructOps<FBodyStateBoneData>(FName(TEXT("BodyStateBoneData")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData;
	struct Z_Construct_UScriptStruct_FBodyStateBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedBoneType_MetaData[];
#endif
		static void NewProp_AdvancedBoneType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdvancedBoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Transform holding main bone values*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Transform holding main bone values" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** If this bone tracks more than just transform*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "If this bone tracks more than just transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit(void* Obj)
	{
		((FBodyStateBoneData*)Obj)->AdvancedBoneType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType = { "AdvancedBoneType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBodyStateBoneData), &Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Blending Alpha */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Blending Alpha" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneData, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Bone Length */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Length" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateBoneData",
		sizeof(FBodyStateBoneData),
		alignof(FBodyStateBoneData),
		Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateBoneData"), sizeof(FBodyStateBoneData), Get_Z_Construct_UScriptStruct_FBodyStateBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_Hash() { return 3057972414U; }
class UScriptStruct* FBodyStateBoneMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneMeta, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneMeta"), sizeof(FBodyStateBoneMeta), Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_Hash());
	}
	return Singleton;
}
template<> BODYSTATE_API UScriptStruct* StaticStruct<FBodyStateBoneMeta>()
{
	return FBodyStateBoneMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateBoneMeta(FBodyStateBoneMeta::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateBoneMeta"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta()
	{
		UScriptStruct::DeferCppStructOps<FBodyStateBoneMeta>(FName(TEXT("BodyStateBoneMeta")));
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta;
	struct Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDistinctMeta_MetaData[];
#endif
		static void NewProp_ParentDistinctMeta_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParentDistinctMeta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData[] = {
		{ "Comment", "/** Is this meta data distinct from parents? */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Is this meta data distinct from parents?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit(void* Obj)
	{
		((FBodyStateBoneMeta*)Obj)->ParentDistinctMeta = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta = { "ParentDistinctMeta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBodyStateBoneMeta), &Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData[] = {
		{ "Comment", "/** Name of tracking type*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Name of tracking type" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType = { "TrackingType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingType), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner = { "TrackingTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "Comment", "/** Additional tags used to distinguish characteristics of tracked data, e.g. tracks fingers, hands, etc*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Additional tags used to distinguish characteristics of tracked data, e.g. tracks fingers, hands, etc" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags = { "TrackingTags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData[] = {
		{ "Comment", "/** Accuracy in cm of tracking data if distinct */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Accuracy in cm of tracking data if distinct" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneMeta, Accuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Tracking Confidence */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Tracking Confidence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneMeta, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "Comment", "/** Time when this value was sampled */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Time when this value was sampled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyStateBoneMeta, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateBoneMeta",
		sizeof(FBodyStateBoneMeta),
		alignof(FBodyStateBoneMeta),
		Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateBoneMeta"), sizeof(FBodyStateBoneMeta), Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_Hash() { return 1735896784U; }
	DEFINE_FUNCTION(UBodyStateBone::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execChangeBasis)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase);
		P_GET_UBOOL(Z_Param_AdjustVectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execShiftBone)
	{
		P_GET_STRUCT(FVector,Z_Param_ShiftAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftBone(Z_Param_ShiftAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Enabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execUniqueMeta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBodyStateBoneMeta*)Z_Param__Result=P_THIS->UniqueMeta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execSetScale)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_Out_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->Transform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Scale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execSetOrientation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrientation(Z_Param_Out_InOrientation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->Orientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execSetPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBone::execPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Position();
		P_NATIVE_END;
	}
	void UBodyStateBone::StaticRegisterNativesUBodyStateBone()
	{
		UClass* Class = UBodyStateBone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBasis", &UBodyStateBone::execChangeBasis },
			{ "Enabled", &UBodyStateBone::execEnabled },
			{ "IsTracked", &UBodyStateBone::execIsTracked },
			{ "Orientation", &UBodyStateBone::execOrientation },
			{ "Position", &UBodyStateBone::execPosition },
			{ "Scale", &UBodyStateBone::execScale },
			{ "SetEnabled", &UBodyStateBone::execSetEnabled },
			{ "SetOrientation", &UBodyStateBone::execSetOrientation },
			{ "SetPosition", &UBodyStateBone::execSetPosition },
			{ "SetScale", &UBodyStateBone::execSetScale },
			{ "ShiftBone", &UBodyStateBone::execShiftBone },
			{ "Transform", &UBodyStateBone::execTransform },
			{ "UniqueMeta", &UBodyStateBone::execUniqueMeta },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics
	{
		struct BodyStateBone_eventChangeBasis_Parms
		{
			FRotator PreBase;
			FRotator PostBase;
			bool AdjustVectors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostBase;
		static void NewProp_AdjustVectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustVectors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase = { "PreBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase = { "PostBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData)) };
	void Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((BodyStateBone_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors = { "AdjustVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateBone_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "ChangeBasis", nullptr, nullptr, sizeof(BodyStateBone_eventChangeBasis_Parms), Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Enabled_Statics
	{
		struct BodyStateBone_eventEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBone_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateBone_eventEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "// Convenience Functions\n" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Enabled", nullptr, nullptr, sizeof(BodyStateBone_eventEnabled_Parms), Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics
	{
		struct BodyStateBone_eventIsTracked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBone_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateBone_eventIsTracked_Parms), &Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "IsTracked", nullptr, nullptr, sizeof(BodyStateBone_eventIsTracked_Parms), Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Orientation_Statics
	{
		struct BodyStateBone_eventOrientation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Orientation */" },
		{ "Keywords", "rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Orientation", nullptr, nullptr, sizeof(BodyStateBone_eventOrientation_Parms), Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Orientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Position_Statics
	{
		struct BodyStateBone_eventPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Position */" },
		{ "Keywords", "position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Position", nullptr, nullptr, sizeof(BodyStateBone_eventPosition_Parms), Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Scale_Statics
	{
		struct BodyStateBone_eventScale_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Bone Scale */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Scale", nullptr, nullptr, sizeof(BodyStateBone_eventScale_Parms), Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Scale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics
	{
		struct BodyStateBone_eventSetEnabled_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((BodyStateBone_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateBone_eventSetEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetEnabled", nullptr, nullptr, sizeof(BodyStateBone_eventSetEnabled_Parms), Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics
	{
		struct BodyStateBone_eventSetOrientation_Parms
		{
			FRotator InOrientation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation = { "InOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventSetOrientation_Parms, InOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetOrientation", nullptr, nullptr, sizeof(BodyStateBone_eventSetOrientation_Parms), Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics
	{
		struct BodyStateBone_eventSetPosition_Parms
		{
			FVector InPosition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetPosition", nullptr, nullptr, sizeof(BodyStateBone_eventSetPosition_Parms), Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetScale_Statics
	{
		struct BodyStateBone_eventSetScale_Parms
		{
			FVector InScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventSetScale_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "SetScale", nullptr, nullptr, sizeof(BodyStateBone_eventSetScale_Parms), Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics
	{
		struct BodyStateBone_eventShiftBone_Parms
		{
			FVector ShiftAmount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShiftAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount = { "ShiftAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventShiftBone_Parms, ShiftAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "ShiftBone", nullptr, nullptr, sizeof(BodyStateBone_eventShiftBone_Parms), Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_ShiftBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Transform_Statics
	{
		struct BodyStateBone_eventTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Convenience Transform getter*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Transform getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "Transform", nullptr, nullptr, sizeof(BodyStateBone_eventTransform_Parms), Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics
	{
		struct BodyStateBone_eventUniqueMeta_Parms
		{
			FBodyStateBoneMeta ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBone_eventUniqueMeta_Parms, ReturnValue), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Get Unique Meta from first unique parent*/" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Get Unique Meta from first unique parent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, nullptr, "UniqueMeta", nullptr, nullptr, sizeof(BodyStateBone_eventUniqueMeta_Parms), Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_UniqueMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateBone_NoRegister()
	{
		return UBodyStateBone::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateBone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBone_ChangeBasis, "ChangeBasis" }, // 3619795045
		{ &Z_Construct_UFunction_UBodyStateBone_Enabled, "Enabled" }, // 682078868
		{ &Z_Construct_UFunction_UBodyStateBone_IsTracked, "IsTracked" }, // 3662862356
		{ &Z_Construct_UFunction_UBodyStateBone_Orientation, "Orientation" }, // 2222060833
		{ &Z_Construct_UFunction_UBodyStateBone_Position, "Position" }, // 1949315696
		{ &Z_Construct_UFunction_UBodyStateBone_Scale, "Scale" }, // 829664535
		{ &Z_Construct_UFunction_UBodyStateBone_SetEnabled, "SetEnabled" }, // 2680751743
		{ &Z_Construct_UFunction_UBodyStateBone_SetOrientation, "SetOrientation" }, // 4216926649
		{ &Z_Construct_UFunction_UBodyStateBone_SetPosition, "SetPosition" }, // 787442887
		{ &Z_Construct_UFunction_UBodyStateBone_SetScale, "SetScale" }, // 3786974346
		{ &Z_Construct_UFunction_UBodyStateBone_ShiftBone, "ShiftBone" }, // 188161183
		{ &Z_Construct_UFunction_UBodyStateBone_Transform, "Transform" }, // 2533772134
		{ &Z_Construct_UFunction_UBodyStateBone_UniqueMeta, "UniqueMeta" }, // 3746818237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateBone.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Human readable name */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Human readable name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, Name), METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Parent Bone - If available, weak links */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Parent Bone - If available, weak links" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, Parent), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "Comment", "/** Children Bones - If available, weak links */" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Children Bones - If available, weak links" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType = { "BoneType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateBone, BoneType), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBone_Statics::ClassParams = {
		&UBodyStateBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodyStateBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateBone, 575950640);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateBone>()
	{
		return UBodyStateBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateBone(Z_Construct_UClass_UBodyStateBone, &UBodyStateBone::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
