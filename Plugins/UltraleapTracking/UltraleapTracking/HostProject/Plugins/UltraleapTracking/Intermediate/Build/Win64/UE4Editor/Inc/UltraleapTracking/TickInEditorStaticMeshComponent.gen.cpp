// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/TickInEditorStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickInEditorStaticMeshComponent() {}
// Cross Module References
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
// End Cross Module References
	void UTickInEditorStaticMeshComponent::StaticRegisterNativesUTickInEditorStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent_NoRegister()
	{
		return UTickInEditorStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TickInEditorStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/TickInEditorStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickInEditorStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::ClassParams = {
		&UTickInEditorStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickInEditorStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTickInEditorStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTickInEditorStaticMeshComponent, 4117304531);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UTickInEditorStaticMeshComponent>()
	{
		return UTickInEditorStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTickInEditorStaticMeshComponent(Z_Construct_UClass_UTickInEditorStaticMeshComponent, &UTickInEditorStaticMeshComponent::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UTickInEditorStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickInEditorStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
