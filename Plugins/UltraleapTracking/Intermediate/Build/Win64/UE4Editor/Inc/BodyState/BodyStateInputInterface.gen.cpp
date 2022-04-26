// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateInputInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateInputInterface() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IBodyStateInputInterface::execUpdateInput)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInput_Implementation(Z_Param_DeviceID,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	void IBodyStateInputInterface::UpdateInput(int32 DeviceID, UBodyStateSkeleton* Skeleton)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateInput instead.");
	}
	void UBodyStateInputInterface::StaticRegisterNativesUBodyStateInputInterface()
	{
		UClass* Class = UBodyStateInputInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInput", &IBodyStateInputInterface::execUpdateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Poll Interface" },
		{ "Comment", "/* Requests your device to update the skeleton. You can use this BS polling method or push updates to your skeleton*/" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
		{ "ToolTip", "Requests your device to update the skeleton. You can use this BS polling method or push updates to your skeleton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateInputInterface, nullptr, "UpdateInput", nullptr, nullptr, sizeof(BodyStateInputInterface_eventUpdateInput_Parms), Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister()
	{
		return UBodyStateInputInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateInputInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateInputInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateInputInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput, "UpdateInput" }, // 2786420574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateInputInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBodyStateInputInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams = {
		&UBodyStateInputInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateInputInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateInputInterface, 2493345878);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateInputInterface>()
	{
		return UBodyStateInputInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateInputInterface(Z_Construct_UClass_UBodyStateInputInterface, &UBodyStateInputInterface::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateInputInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateInputInterface);
	static FName NAME_UBodyStateInputInterface_UpdateInput = FName(TEXT("UpdateInput"));
	void IBodyStateInputInterface::Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBodyStateInputInterface::StaticClass()));
		BodyStateInputInterface_eventUpdateInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBodyStateInputInterface_UpdateInput);
		if (Func)
		{
			Parms.DeviceID=DeviceID;
			Parms.Skeleton=Skeleton;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBodyStateInputInterface*)(O->GetNativeInterfaceAddress(UBodyStateInputInterface::StaticClass())))
		{
			I->UpdateInput_Implementation(DeviceID,Skeleton);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
