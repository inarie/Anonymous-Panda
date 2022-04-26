// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBPLibrary() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UBodyStateBPLibrary::execTransformForBoneNamedInAnimInstance)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Bone);
		P_GET_OBJECT(UAnimInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UBodyStateBPLibrary::TransformForBoneNamedInAnimInstance(Z_Param_Out_Bone,Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBPLibrary::execSkeletonForDevice)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodyStateSkeleton**)Z_Param__Result=UBodyStateBPLibrary::SkeletonForDevice(Z_Param_WorldContextObject,Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBPLibrary::execDetachDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBodyStateBPLibrary::DetachDevice(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodyStateBPLibrary::execAttachDevice)
	{
		P_GET_STRUCT_REF(FBodyStateDeviceConfig,Z_Param_Out_Configuration);
		P_GET_TINTERFACE(IBodyStateInputInterface,Z_Param_InputCallbackDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBodyStateBPLibrary::AttachDevice(Z_Param_Out_Configuration,Z_Param_InputCallbackDelegate);
		P_NATIVE_END;
	}
	void UBodyStateBPLibrary::StaticRegisterNativesUBodyStateBPLibrary()
	{
		UClass* Class = UBodyStateBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachDevice", &UBodyStateBPLibrary::execAttachDevice },
			{ "DetachDevice", &UBodyStateBPLibrary::execDetachDevice },
			{ "SkeletonForDevice", &UBodyStateBPLibrary::execSkeletonForDevice },
			{ "TransformForBoneNamedInAnimInstance", &UBodyStateBPLibrary::execTransformForBoneNamedInAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics
	{
		struct BodyStateBPLibrary_eventAttachDevice_Parms
		{
			FBodyStateDeviceConfig Configuration;
			TScriptInterface<IBodyStateInputInterface> InputCallbackDelegate;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InputCallbackDelegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, Configuration), Z_Construct_UScriptStruct_FBodyStateDeviceConfig, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate = { "InputCallbackDelegate", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, InputCallbackDelegate), Z_Construct_UClass_UBodyStateInputInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "AttachDevice", nullptr, nullptr, sizeof(BodyStateBPLibrary_eventAttachDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics
	{
		struct BodyStateBPLibrary_eventDetachDevice_Parms
		{
			int32 DeviceID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventDetachDevice_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBPLibrary_eventDetachDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodyStateBPLibrary_eventDetachDevice_Parms), &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "DetachDevice", nullptr, nullptr, sizeof(BodyStateBPLibrary_eventDetachDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics
	{
		struct BodyStateBPLibrary_eventSkeletonForDevice_Parms
		{
			UObject* WorldContextObject;
			int32 DeviceID;
			UBodyStateSkeleton* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, ReturnValue), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "Comment", "/**\n\x09 * Obtain the UBodyStateSkeleton attached to device or 0 if you want the merged skeleton\n\x09 */" },
		{ "CPP_Default_DeviceID", "0" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Obtain the UBodyStateSkeleton attached to device or 0 if you want the merged skeleton" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "SkeletonForDevice", nullptr, nullptr, sizeof(BodyStateBPLibrary_eventSkeletonForDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics
	{
		struct BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms
		{
			FName Bone;
			UAnimInstance* Instance;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Bone), METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Instance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "Comment", "/** Convenience function for rigging*/" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Convenience function for rigging" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, nullptr, "TransformForBoneNamedInAnimInstance", nullptr, nullptr, sizeof(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister()
	{
		return UBodyStateBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice, "AttachDevice" }, // 2047464563
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice, "DetachDevice" }, // 1246533077
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice, "SkeletonForDevice" }, // 4071492167
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance, "TransformForBoneNamedInAnimInstance" }, // 1410693966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Extra functions useful for animation rigging in BP\n */" },
		{ "IncludePath", "BodyStateBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "* Extra functions useful for animation rigging in BP" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams = {
		&UBodyStateBPLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateBPLibrary, 3102763244);
	template<> BODYSTATE_API UClass* StaticClass<UBodyStateBPLibrary>()
	{
		return UBodyStateBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateBPLibrary(Z_Construct_UClass_UBodyStateBPLibrary, &UBodyStateBPLibrary::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
