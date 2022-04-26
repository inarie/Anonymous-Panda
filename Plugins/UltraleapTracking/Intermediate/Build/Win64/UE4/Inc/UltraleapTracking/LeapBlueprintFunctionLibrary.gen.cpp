// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/LeapBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBlueprintFunctionLibrary() {}
// Cross Module References
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister();
	ULTRALEAPTRACKING_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag();
// End Cross Module References
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execAngleBetweenVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULeapBlueprintFunctionLibrary::AngleBetweenVectors(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetDebugRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::SetDebugRotation(Z_Param_Out_Rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetAppVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULeapBlueprintFunctionLibrary::GetAppVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetAttachedLeapDevices)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Devices);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::GetAttachedLeapDevices(Z_Param_Out_Devices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapPolicy)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Flag);
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::SetLeapPolicy(ELeapPolicyFlag(Z_Param_Flag),Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetLeapStats)
	{
		P_GET_STRUCT_REF(FLeapStats,Z_Param_Out_OutStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::GetLeapStats(Z_Param_Out_OutStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execGetLeapOptions)
	{
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_OutOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::GetLeapOptions(Z_Param_Out_OutOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapOptions)
	{
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::SetLeapOptions(Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULeapBlueprintFunctionLibrary::execSetLeapMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
		P_GET_PROPERTY(FByteProperty,Z_Param_Fidelity);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULeapBlueprintFunctionLibrary::SetLeapMode(ELeapMode(Z_Param_Mode),ELeapTrackingFidelity(Z_Param_Fidelity));
		P_NATIVE_END;
	}
	void ULeapBlueprintFunctionLibrary::StaticRegisterNativesULeapBlueprintFunctionLibrary()
	{
		UClass* Class = ULeapBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleBetweenVectors", &ULeapBlueprintFunctionLibrary::execAngleBetweenVectors },
			{ "GetAppVersion", &ULeapBlueprintFunctionLibrary::execGetAppVersion },
			{ "GetAttachedLeapDevices", &ULeapBlueprintFunctionLibrary::execGetAttachedLeapDevices },
			{ "GetLeapOptions", &ULeapBlueprintFunctionLibrary::execGetLeapOptions },
			{ "GetLeapStats", &ULeapBlueprintFunctionLibrary::execGetLeapStats },
			{ "SetDebugRotation", &ULeapBlueprintFunctionLibrary::execSetDebugRotation },
			{ "SetLeapMode", &ULeapBlueprintFunctionLibrary::execSetLeapMode },
			{ "SetLeapOptions", &ULeapBlueprintFunctionLibrary::execSetLeapOptions },
			{ "SetLeapPolicy", &ULeapBlueprintFunctionLibrary::execSetLeapPolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms
		{
			FVector A;
			FVector B;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Angle between vectors - Equivalent of Unity's Vector3.Angle*/" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Angle between vectors - Equivalent of Unity's Vector3.Angle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "AngleBetweenVectors", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventAngleBetweenVectors_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/**Get the app version from the game.ini file */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Get the app version from the game.ini file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetAppVersion", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetAppVersion_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms
		{
			TArray<FString> Devices;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Devices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Devices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::NewProp_Devices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "Comment", "/** List the attached (plugged in) devices */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "List the attached (plugged in) devices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetAttachedLeapDevices", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetAttachedLeapDevices_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms
		{
			FLeapOptions OutOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions = { "OutOptions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms, OutOptions), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Gets currently set global options */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets currently set global options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetLeapOptions", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms
		{
			FLeapStats OutStats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats = { "OutStats", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms, OutStats), Z_Construct_UScriptStruct_FLeapStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Gets Leap read only stats such as api version, frame lookup and device information */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets Leap read only stats such as api version, frame lookup and device information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "GetLeapStats", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms
		{
			FRotator Rotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::NewProp_Rotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** For debugging purposes only */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "For debugging purposes only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetDebugRotation", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventSetDebugRotation_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms
		{
			TEnumAsByte<ELeapMode> Mode;
			TEnumAsByte<ELeapTrackingFidelity> Fidelity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fidelity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Mode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity = { "Fidelity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Fidelity), Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Set basic global leap tracking options */" },
		{ "CPP_Default_Fidelity", "LEAP_NORMAL" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set basic global leap tracking options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapMode", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms
		{
			FLeapOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms, Options), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Set global leap options */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set global leap options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapOptions", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms
		{
			TEnumAsByte<ELeapPolicyFlag> Flag;
			bool Enable;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms, Flag), Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ultraleap Tracking Functions" },
		{ "Comment", "/** Change leap policy */" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Change leap policy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, nullptr, "SetLeapPolicy", nullptr, nullptr, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister()
	{
		return ULeapBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_AngleBetweenVectors, "AngleBetweenVectors" }, // 384584515
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAppVersion, "GetAppVersion" }, // 3082905475
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetAttachedLeapDevices, "GetAttachedLeapDevices" }, // 3337337407
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions, "GetLeapOptions" }, // 465407176
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats, "GetLeapStats" }, // 1567952843
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetDebugRotation, "SetDebugRotation" }, // 2702227410
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode, "SetLeapMode" }, // 670740497
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions, "SetLeapOptions" }, // 712117715
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy, "SetLeapPolicy" }, // 3051053487
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful global blueprint functions for Ultraleap Tracking\n */" },
		{ "IncludePath", "LeapBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Useful global blueprint functions for Ultraleap Tracking" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams = {
		&ULeapBlueprintFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapBlueprintFunctionLibrary, 189668028);
	template<> ULTRALEAPTRACKING_API UClass* StaticClass<ULeapBlueprintFunctionLibrary>()
	{
		return ULeapBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapBlueprintFunctionLibrary(Z_Construct_UClass_ULeapBlueprintFunctionLibrary, &ULeapBlueprintFunctionLibrary::StaticClass, TEXT("/Script/UltraleapTracking"), TEXT("ULeapBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
