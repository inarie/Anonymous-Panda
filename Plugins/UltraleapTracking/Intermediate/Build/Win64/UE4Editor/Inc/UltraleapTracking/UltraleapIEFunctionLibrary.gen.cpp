// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Private/InteractionEngine/UltraleapIEFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapIEFunctionLibrary() {}
// Cross Module References
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execInitPhysicsConstraint)
	{
		P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param_PhysicsConstraintComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUltraleapIEFunctionLibrary::InitPhysicsConstraint(Z_Param_PhysicsConstraintComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execGetBodyName)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UUltraleapIEFunctionLibrary::GetBodyName(Z_Param_PhysicsAsset,Z_Param_BodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execUpdateBoundsBodiesArray)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUltraleapIEFunctionLibrary::UpdateBoundsBodiesArray(Z_Param_PhysicsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execEnableBodyCollisionByName)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_BodyCollisionResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUltraleapIEFunctionLibrary::EnableBodyCollisionByName(Z_Param_PhysicsAsset,Z_Param_Out_BoneName,EBodyCollisionResponse::Type(Z_Param_BodyCollisionResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execEnableBodyBoundsByName)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_UBOOL(Z_Param_Enable);
		P_GET_UBOOL(Z_Param_Update);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUltraleapIEFunctionLibrary::EnableBodyBoundsByName(Z_Param_PhysicsAsset,Z_Param_Out_BoneName,Z_Param_Enable,Z_Param_Update);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUltraleapIEFunctionLibrary::execGetSkeletalBodySetups)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalBodySetup*>*)Z_Param__Result=UUltraleapIEFunctionLibrary::GetSkeletalBodySetups(Z_Param_PhysicsAsset);
		P_NATIVE_END;
	}
	void UUltraleapIEFunctionLibrary::StaticRegisterNativesUUltraleapIEFunctionLibrary()
	{
		UClass* Class = UUltraleapIEFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableBodyBoundsByName", &UUltraleapIEFunctionLibrary::execEnableBodyBoundsByName },
			{ "EnableBodyCollisionByName", &UUltraleapIEFunctionLibrary::execEnableBodyCollisionByName },
			{ "GetBodyName", &UUltraleapIEFunctionLibrary::execGetBodyName },
			{ "GetSkeletalBodySetups", &UUltraleapIEFunctionLibrary::execGetSkeletalBodySetups },
			{ "InitPhysicsConstraint", &UUltraleapIEFunctionLibrary::execInitPhysicsConstraint },
			{ "UpdateBoundsBodiesArray", &UUltraleapIEFunctionLibrary::execUpdateBoundsBodiesArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics
	{
		struct UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms
		{
			UPhysicsAsset* PhysicsAsset;
			FName BoneName;
			bool Enable;
			bool Update;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[];
#endif
		static void NewProp_Update_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Update;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_SetBit(void* Obj)
	{
		((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->Update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update_MetaData)) };
	void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_Update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Enable/disable a given body's bounds */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Enable/disable a given body's bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "EnableBodyBoundsByName", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventEnableBodyBoundsByName_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics
	{
		struct UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms
		{
			UPhysicsAsset* PhysicsAsset;
			FName BoneName;
			TEnumAsByte<EBodyCollisionResponse::Type> BodyCollisionResponse;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyCollisionResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyCollisionResponse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse = { "BodyCollisionResponse", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms, BodyCollisionResponse), Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse_MetaData)) };
	void Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms), &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_BodyCollisionResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/** Enable/disable a given body's collisions */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Enable/disable a given body's collisions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "EnableBodyCollisionByName", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventEnableBodyCollisionByName_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics
	{
		struct UltraleapIEFunctionLibrary_eventGetBodyName_Parms
		{
			UPhysicsAsset* PhysicsAsset;
			int32 BodyIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, BodyIndex), METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetBodyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_BodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Helper, get the body name by body index (=bone name vs index into USkeletalBodySetups) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helper, get the body name by body index (=bone name vs index into USkeletalBodySetups)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "GetBodyName", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventGetBodyName_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics
	{
		struct UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms
		{
			UPhysicsAsset* PhysicsAsset;
			TArray<USkeletalBodySetup*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Get all bodies (body = bone in our case, each bone having collisions generated for it) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Get all bodies (body = bone in our case, each bone having collisions generated for it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "GetSkeletalBodySetups", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventGetSkeletalBodySetups_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics
	{
		struct UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms
		{
			UPhysicsConstraintComponent* PhysicsConstraintComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsConstraintComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsConstraintComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent = { "PhysicsConstraintComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms, PhysicsConstraintComponent), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::NewProp_PhysicsConstraintComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/** Helper, initialise a physics constraint (needed as not all params are blueprint writeable) */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helper, initialise a physics constraint (needed as not all params are blueprint writeable)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "InitPhysicsConstraint", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventInitPhysicsConstraint_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics
	{
		struct UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms
		{
			UPhysicsAsset* PhysicsAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::NewProp_PhysicsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Interaction Engine" },
		{ "Comment", "/**  Optimisation, once setting a lot of bounds up, update the state of the PhysicsAsset */" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Optimisation, once setting a lot of bounds up, update the state of the PhysicsAsset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUltraleapIEFunctionLibrary, nullptr, "UpdateBoundsBodiesArray", nullptr, nullptr, sizeof(UltraleapIEFunctionLibrary_eventUpdateBoundsBodiesArray_Parms), Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary_NoRegister()
	{
		return UUltraleapIEFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyBoundsByName, "EnableBodyBoundsByName" }, // 913839065
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_EnableBodyCollisionByName, "EnableBodyCollisionByName" }, // 1740899328
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetBodyName, "GetBodyName" }, // 197522000
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_GetSkeletalBodySetups, "GetSkeletalBodySetups" }, // 1290841044
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_InitPhysicsConstraint, "InitPhysicsConstraint" }, // 1641450798
		{ &Z_Construct_UFunction_UUltraleapIEFunctionLibrary_UpdateBoundsBodiesArray, "UpdateBoundsBodiesArray" }, // 1881996835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n *  Helpers to customise PhysicsAsset behaviours\n *\x09The Physics asset does half of the job of the SoftContact system in Unity\n *\x09It builds per bone collisions in a variety of primitive shapes\n *\n *\x09However, it isn't customisable by blueprint as it's designed to be used at edit time\n *\x09""Functions below map to C++ functionality\n *\n *\n */" },
		{ "IncludePath", "InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/InteractionEngine/UltraleapIEFunctionLibrary.h" },
		{ "ToolTip", "Helpers to customise PhysicsAsset behaviours\n   The Physics asset does half of the job of the SoftContact system in Unity\n   It builds per bone collisions in a variety of primitive shapes\n\n   However, it isn't customisable by blueprint as it's designed to be used at edit time\n   Functions below map to C++ functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUltraleapIEFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::ClassParams = {
		&UUltraleapIEFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUltraleapIEFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUltraleapIEFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUltraleapIEFunctionLibrary, 4100992491);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<UUltraleapIEFunctionLibrary>()
	{
		return UUltraleapIEFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUltraleapIEFunctionLibrary(Z_Construct_UClass_UUltraleapIEFunctionLibrary, &UUltraleapIEFunctionLibrary::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("UUltraleapIEFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUltraleapIEFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
