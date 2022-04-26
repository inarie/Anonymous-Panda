// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingEditor/Public/AnimGraphNode_ModifyBodyStateMappedBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyBodyStateMappedBones() {}
// Cross Module References
	ULTRALEAPTRACKINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister();
	ULTRALEAPTRACKINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_UltraleapTrackingEditor();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones();
// End Cross Module References
	void UAnimGraphNode_ModifyBodyStateMappedBones::StaticRegisterNativesUAnimGraphNode_ModifyBodyStateMappedBones()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister()
	{
		return UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTrackingEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ModifyBodyStateMappedBones.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_ModifyBodyStateMappedBones, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyBodyStateMappedBones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams = {
		&UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ModifyBodyStateMappedBones, 2181081991);
	template<> ULTRALEAPTRACKINGEDITOR_API UClass* StaticClass<UAnimGraphNode_ModifyBodyStateMappedBones>()
	{
		return UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ModifyBodyStateMappedBones(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones, &UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass, TEXT("/Script/UltraleapTrackingEditor"), TEXT("UAnimGraphNode_ModifyBodyStateMappedBones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyBodyStateMappedBones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
