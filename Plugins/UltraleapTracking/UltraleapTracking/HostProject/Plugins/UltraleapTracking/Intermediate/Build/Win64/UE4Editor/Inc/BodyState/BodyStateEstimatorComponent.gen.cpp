// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateEstimatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateEstimatorComponent() {}
// Cross Module References
	BODYSTATE_API UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics
	{
		struct _Script_BodyState_eventBodyStateSkeletonSignature_Parms
		{
			UBodyStateSkeleton* Skeleton;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BodyState_eventBodyStateSkeletonSignature_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BodyState, nullptr, "BodyStateSkeletonSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_BodyState_eventBodyStateSkeletonSignature_Parms), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UBodyStateEstimatorComponent::StaticRegisterNativesUBodyStateEstimatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister()
	{
		return UBodyStateEstimatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateEstimatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateSkeletonEstimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateSkeletonEstimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BodyState" },
		{ "Comment", "/**\n * Offers an estimation event with a skeleton which will be applied to the merged bodystate.\n * A good place to experiment with derived bodystate bones\n */" },
		{ "IncludePath", "BodyStateEstimatorComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Offers an estimation event with a skeleton which will be applied to the merged bodystate.\nA good place to experiment with derived bodystate bones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData[] = {
		{ "Category", "BodyState Estimation Events" },
		{ "Comment", "/** Called when the skeleton should be updated before it propagates to all listeners */" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Called when the skeleton should be updated before it propagates to all listeners" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation = { "OnUpdateSkeletonEstimation", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodyStateEstimatorComponent, OnUpdateSkeletonEstimation), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateEstimatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams = {
		&UBodyStateEstimatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateEstimatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateEstimatorComponent, 2591579157);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateEstimatorComponent>()
	{
		return UBodyStateEstimatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateEstimatorComponent(Z_Construct_UClass_UBodyStateEstimatorComponent, &UBodyStateEstimatorComponent::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateEstimatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateEstimatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
