// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraleapTrackingCore/Public/UltraleapTrackingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraleapTrackingData() {}
// Cross Module References
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB();
	UPackage* Z_Construct_UPackage__Script_UltraleapTracking();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapImageType();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode();
	ULTRALEAPTRACKING_API UEnum* Z_Construct_UEnum_UltraleapTracking_EHandType();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
	ULTRALEAPTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice();
// End Cross Module References
	static UEnum* ELeapQuatSwizzleAxisB_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapQuatSwizzleAxisB"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapQuatSwizzleAxisB>()
	{
		return ELeapQuatSwizzleAxisB_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapQuatSwizzleAxisB(ELeapQuatSwizzleAxisB_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapQuatSwizzleAxisB"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Hash() { return 1875903301U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapQuatSwizzleAxisB"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapQuatSwizzleAxisB_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapQuatSwizzleAxisB::X", (int64)ELeapQuatSwizzleAxisB::X },
				{ "ELeapQuatSwizzleAxisB::Y", (int64)ELeapQuatSwizzleAxisB::Y },
				{ "ELeapQuatSwizzleAxisB::Z", (int64)ELeapQuatSwizzleAxisB::Z },
				{ "ELeapQuatSwizzleAxisB::W", (int64)ELeapQuatSwizzleAxisB::W },
				{ "ELeapQuatSwizzleAxisB::MinusX", (int64)ELeapQuatSwizzleAxisB::MinusX },
				{ "ELeapQuatSwizzleAxisB::MinusY", (int64)ELeapQuatSwizzleAxisB::MinusY },
				{ "ELeapQuatSwizzleAxisB::MinusZ", (int64)ELeapQuatSwizzleAxisB::MinusZ },
				{ "ELeapQuatSwizzleAxisB::MinusW", (int64)ELeapQuatSwizzleAxisB::MinusW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MinusW.DisplayName", "-W" },
				{ "MinusW.Name", "ELeapQuatSwizzleAxisB::MinusW" },
				{ "MinusX.DisplayName", "-X" },
				{ "MinusX.Name", "ELeapQuatSwizzleAxisB::MinusX" },
				{ "MinusY.DisplayName", "-Y" },
				{ "MinusY.Name", "ELeapQuatSwizzleAxisB::MinusY" },
				{ "MinusZ.DisplayName", "-Z" },
				{ "MinusZ.Name", "ELeapQuatSwizzleAxisB::MinusZ" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
				{ "W.DisplayName", "W" },
				{ "W.Name", "ELeapQuatSwizzleAxisB::W" },
				{ "X.DisplayName", "X" },
				{ "X.Name", "ELeapQuatSwizzleAxisB::X" },
				{ "Y.DisplayName", "Y" },
				{ "Y.Name", "ELeapQuatSwizzleAxisB::Y" },
				{ "Z.DisplayName", "Z" },
				{ "Z.Name", "ELeapQuatSwizzleAxisB::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapQuatSwizzleAxisB",
				"ELeapQuatSwizzleAxisB",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapServiceLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapServiceLogLevel"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapServiceLogLevel>()
	{
		return ELeapServiceLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapServiceLogLevel(ELeapServiceLogLevel_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapServiceLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Hash() { return 2873357623U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapServiceLogLevel"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_LOG_NONE", (int64)LEAP_LOG_NONE },
				{ "LEAP_LOG_ERROR", (int64)LEAP_LOG_ERROR },
				{ "LEAP_LOG_WARNING", (int64)LEAP_LOG_WARNING },
				{ "LEAP_LOG_INFO", (int64)LEAP_LOG_INFO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_LOG_ERROR.Name", "LEAP_LOG_ERROR" },
				{ "LEAP_LOG_INFO.Name", "LEAP_LOG_INFO" },
				{ "LEAP_LOG_NONE.Name", "LEAP_LOG_NONE" },
				{ "LEAP_LOG_WARNING.Name", "LEAP_LOG_WARNING" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapServiceLogLevel",
				"ELeapServiceLogLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapPolicyFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapPolicyFlag"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapPolicyFlag>()
	{
		return ELeapPolicyFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapPolicyFlag(ELeapPolicyFlag_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapPolicyFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Hash() { return 1107988770U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapPolicyFlag"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapPolicyFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_POLICY_BACKGROUND_FRAMES", (int64)LEAP_POLICY_BACKGROUND_FRAMES },
				{ "LEAP_POLICY_IMAGES", (int64)LEAP_POLICY_IMAGES },
				{ "LEAP_POLICY_OPTIMIZE_HMD", (int64)LEAP_POLICY_OPTIMIZE_HMD },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME", (int64)LEAP_POLICY_ALLOW_PAUSE_RESUME },
				{ "LEAP_POLICY_MAP_POINTS", (int64)LEAP_POLICY_MAP_POINTS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.Comment", "// The policy specifying whether to optimize tracking for head-mounted device.\n" },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.Name", "LEAP_POLICY_ALLOW_PAUSE_RESUME" },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.ToolTip", "The policy specifying whether to optimize tracking for head-mounted device." },
				{ "LEAP_POLICY_BACKGROUND_FRAMES.Name", "LEAP_POLICY_BACKGROUND_FRAMES" },
				{ "LEAP_POLICY_IMAGES.Comment", "// The policy allowing an application to receive frames in the background.\n" },
				{ "LEAP_POLICY_IMAGES.Name", "LEAP_POLICY_IMAGES" },
				{ "LEAP_POLICY_IMAGES.ToolTip", "The policy allowing an application to receive frames in the background." },
				{ "LEAP_POLICY_MAP_POINTS.Comment", "// The policy allowing an application to pause or resume service tracking\n" },
				{ "LEAP_POLICY_MAP_POINTS.Name", "LEAP_POLICY_MAP_POINTS" },
				{ "LEAP_POLICY_MAP_POINTS.ToolTip", "The policy allowing an application to pause or resume service tracking" },
				{ "LEAP_POLICY_OPTIMIZE_HMD.Comment", "// The policy specifying whether to automatically stream images from the device.\n" },
				{ "LEAP_POLICY_OPTIMIZE_HMD.Name", "LEAP_POLICY_OPTIMIZE_HMD" },
				{ "LEAP_POLICY_OPTIMIZE_HMD.ToolTip", "The policy specifying whether to automatically stream images from the device." },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapPolicyFlag",
				"ELeapPolicyFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapTrackingFidelity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapTrackingFidelity"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapTrackingFidelity>()
	{
		return ELeapTrackingFidelity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapTrackingFidelity(ELeapTrackingFidelity_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapTrackingFidelity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Hash() { return 1647413969U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapTrackingFidelity"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_CUSTOM", (int64)LEAP_CUSTOM },
				{ "LEAP_LOW_LATENCY", (int64)LEAP_LOW_LATENCY },
				{ "LEAP_NORMAL", (int64)LEAP_NORMAL },
				{ "LEAP_SMOOTH", (int64)LEAP_SMOOTH },
				{ "LEAP_WIRELESS", (int64)LEAP_WIRELESS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_CUSTOM.Name", "LEAP_CUSTOM" },
				{ "LEAP_LOW_LATENCY.Name", "LEAP_LOW_LATENCY" },
				{ "LEAP_NORMAL.Name", "LEAP_NORMAL" },
				{ "LEAP_SMOOTH.Name", "LEAP_SMOOTH" },
				{ "LEAP_WIRELESS.Name", "LEAP_WIRELESS" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapTrackingFidelity",
				"ELeapTrackingFidelity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapImageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapImageType, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapImageType"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapImageType>()
	{
		return ELeapImageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapImageType(ELeapImageType_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapImageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Hash() { return 2965075277U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapImageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapImageType"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapImageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapImageType::LEAP_IMAGE_LEFT", (int64)ELeapImageType::LEAP_IMAGE_LEFT },
				{ "ELeapImageType::LEAP_IMAGE_RIGHT", (int64)ELeapImageType::LEAP_IMAGE_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_IMAGE_LEFT.Name", "ELeapImageType::LEAP_IMAGE_LEFT" },
				{ "LEAP_IMAGE_RIGHT.Name", "ELeapImageType::LEAP_IMAGE_RIGHT" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapImageType",
				"ELeapImageType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_ELeapMode, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("ELeapMode"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<ELeapMode>()
	{
		return ELeapMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapMode(ELeapMode_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("ELeapMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_ELeapMode_Hash() { return 1215230139U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_ELeapMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapMode"), 0, Get_Z_Construct_UEnum_UltraleapTracking_ELeapMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_MODE_VR", (int64)LEAP_MODE_VR },
				{ "LEAP_MODE_DESKTOP", (int64)LEAP_MODE_DESKTOP },
				{ "LEAP_MODE_SCREENTOP", (int64)LEAP_MODE_SCREENTOP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_MODE_DESKTOP.Comment", "// The tracking mode optimised for head-mounted devices.\n" },
				{ "LEAP_MODE_DESKTOP.Name", "LEAP_MODE_DESKTOP" },
				{ "LEAP_MODE_DESKTOP.ToolTip", "The tracking mode optimised for head-mounted devices." },
				{ "LEAP_MODE_SCREENTOP.Comment", "// The tracking mode optimised for desktop devices. Also known as 'Below'\n" },
				{ "LEAP_MODE_SCREENTOP.Name", "LEAP_MODE_SCREENTOP" },
				{ "LEAP_MODE_SCREENTOP.ToolTip", "The tracking mode optimised for desktop devices. Also known as 'Below'" },
				{ "LEAP_MODE_VR.Name", "LEAP_MODE_VR" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"ELeapMode",
				"ELeapMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UltraleapTracking_EHandType, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("EHandType"));
		}
		return Singleton;
	}
	template<> ULTRALEAPTRACKING_API UEnum* StaticEnum<EHandType>()
	{
		return EHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandType(EHandType_StaticEnum, TEXT("/Script/UltraleapTracking"), TEXT("EHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UltraleapTracking_EHandType_Hash() { return 1423362636U; }
	UEnum* Z_Construct_UEnum_UltraleapTracking_EHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandType"), 0, Get_Z_Construct_UEnum_UltraleapTracking_EHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_HAND_LEFT", (int64)LEAP_HAND_LEFT },
				{ "LEAP_HAND_RIGHT", (int64)LEAP_HAND_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_HAND_LEFT.Name", "LEAP_HAND_LEFT" },
				{ "LEAP_HAND_RIGHT.Name", "LEAP_HAND_RIGHT" },
				{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UltraleapTracking,
				nullptr,
				"EHandType",
				"EHandType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLeapFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapFrameData, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapFrameData"), sizeof(FLeapFrameData), Get_Z_Construct_UScriptStruct_FLeapFrameData_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapFrameData>()
{
	return FLeapFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapFrameData(FLeapFrameData::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapFrameData
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapFrameData()
	{
		UScriptStruct::DeferCppStructOps<FLeapFrameData>(FName(TEXT("LeapFrameData")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapFrameData;
	struct Z_Construct_UScriptStruct_FLeapFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfHandsVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfHandsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandVisible_MetaData[];
#endif
		static void NewProp_LeftHandVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftHandVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandVisible_MetaData[];
#endif
		static void NewProp_RightHandVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightHandVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRotationAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalRotationAdjustment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible = { "NumberOfHandsVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, NumberOfHandsVisible), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner = { "Hands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands = { "Hands", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, Hands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId = { "FrameId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, FrameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit(void* Obj)
	{
		((FLeapFrameData*)Obj)->LeftHandVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible = { "LeftHandVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData[] = {
		{ "Category", "Ultraleap Tracking Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit(void* Obj)
	{
		((FLeapFrameData*)Obj)->RightHandVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible = { "RightHandVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Comment", "// int64 not supported by blueprint, so this will only be accessible inside c++\n" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "int64 not supported by blueprint, so this will only be accessible inside c++" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData[] = {
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment = { "FinalRotationAdjustment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapFrameData, FinalRotationAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapFrameData",
		sizeof(FLeapFrameData),
		alignof(FLeapFrameData),
		Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapFrameData"), sizeof(FLeapFrameData), Get_Z_Construct_UScriptStruct_FLeapFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_Hash() { return 1264462967U; }
class UScriptStruct* FLeapHandData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapHandData, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapHandData"), sizeof(FLeapHandData), Get_Z_Construct_UScriptStruct_FLeapHandData_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapHandData>()
{
	return FLeapHandData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapHandData(FLeapHandData::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapHandData"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapHandData
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapHandData()
	{
		UScriptStruct::DeferCppStructOps<FLeapHandData>(FName(TEXT("LeapHandData")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapHandData;
	struct Z_Construct_UScriptStruct_FLeapHandData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Digits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Digits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Digits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Palm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibleTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapHandData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapHandData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Arm), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner = { "Digits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits = { "Digits", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Digits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle = { "GrabAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, GrabAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength = { "GrabStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, GrabStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, HandType), Z_Construct_UEnum_UltraleapTracking_EHandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Index), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Middle), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm = { "Palm", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Palm), Z_Construct_UScriptStruct_FLeapPalmData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance = { "PinchDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, PinchDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength = { "PinchStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, PinchStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Pinky), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Ring), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Thumb), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime = { "VisibleTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapHandData, VisibleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapHandData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapHandData",
		sizeof(FLeapHandData),
		alignof(FLeapHandData),
		Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapHandData"), sizeof(FLeapHandData), Get_Z_Construct_UScriptStruct_FLeapHandData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapHandData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_Hash() { return 3311303634U; }
class UScriptStruct* FLeapDigitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDigitData, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapDigitData"), sizeof(FLeapDigitData), Get_Z_Construct_UScriptStruct_FLeapDigitData_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapDigitData>()
{
	return FLeapDigitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapDigitData(FLeapDigitData::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapDigitData"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDigitData
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDigitData()
	{
		UScriptStruct::DeferCppStructOps<FLeapDigitData>(FName(TEXT("LeapDigitData")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDigitData;
	struct Z_Construct_UScriptStruct_FLeapDigitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Distal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FingerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExtended_MetaData[];
#endif
		static void NewProp_IsExtended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExtended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metacarpal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Proximal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDigitData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, Distal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId = { "FingerId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, FingerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, Intermediate), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit(void* Obj)
	{
		((FLeapDigitData*)Obj)->IsExtended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended = { "IsExtended", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapDigitData), &Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal = { "Metacarpal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, Metacarpal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDigitData, Proximal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapDigitData",
		sizeof(FLeapDigitData),
		alignof(FLeapDigitData),
		Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapDigitData"), sizeof(FLeapDigitData), Get_Z_Construct_UScriptStruct_FLeapDigitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapDigitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_Hash() { return 2054459087U; }
class UScriptStruct* FLeapPalmData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapPalmData, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapPalmData"), sizeof(FLeapPalmData), Get_Z_Construct_UScriptStruct_FLeapPalmData_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapPalmData>()
{
	return FLeapPalmData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapPalmData(FLeapPalmData::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapPalmData"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapPalmData
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapPalmData()
	{
		UScriptStruct::DeferCppStructOps<FLeapPalmData>(FName(TEXT("LeapPalmData")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapPalmData;
	struct Z_Construct_UScriptStruct_FLeapPalmData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabilizedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapPalmData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition = { "StabilizedPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, StabilizedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapPalmData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapPalmData",
		sizeof(FLeapPalmData),
		alignof(FLeapPalmData),
		Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapPalmData"), sizeof(FLeapPalmData), Get_Z_Construct_UScriptStruct_FLeapPalmData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapPalmData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_Hash() { return 3852988996U; }
class UScriptStruct* FLeapBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapBoneData, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapBoneData"), sizeof(FLeapBoneData), Get_Z_Construct_UScriptStruct_FLeapBoneData_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapBoneData>()
{
	return FLeapBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapBoneData(FLeapBoneData::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapBoneData
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapBoneData()
	{
		UScriptStruct::DeferCppStructOps<FLeapBoneData>(FName(TEXT("LeapBoneData")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapBoneData;
	struct Z_Construct_UScriptStruct_FLeapBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint = { "PrevJoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapBoneData, PrevJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint = { "NextJoint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapBoneData, NextJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapBoneData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapBoneData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapBoneData",
		sizeof(FLeapBoneData),
		alignof(FLeapBoneData),
		Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapBoneData"), sizeof(FLeapBoneData), Get_Z_Construct_UScriptStruct_FLeapBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_Hash() { return 3856002801U; }
class UScriptStruct* FLeapOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapOptions, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapOptions"), sizeof(FLeapOptions), Get_Z_Construct_UScriptStruct_FLeapOptions_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapOptions>()
{
	return FLeapOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapOptions(FLeapOptions::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapOptions
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapOptions()
	{
		UScriptStruct::DeferCppStructOps<FLeapOptions>(FName(TEXT("LeapOptions")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapOptions;
	struct Z_Construct_UScriptStruct_FLeapOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingFidelity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingFidelity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeapServiceLogLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeapServiceLogLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTimeWarp_MetaData[];
#endif
		static void NewProp_bUseTimeWarp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTimeWarp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformOriginToHMD_MetaData[];
#endif
		static void NewProp_bTransformOriginToHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformOriginToHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimewarpOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimewarpOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimewarpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimewarpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandInterpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandInterpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerInterpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerInterpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFrameBasedGestureDetection_MetaData[];
#endif
		static void NewProp_bUseFrameBasedGestureDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFrameBasedGestureDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGrabThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartGrabThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGrabThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndGrabThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPinchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPinchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPinchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndPinchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOpenXRAsSource_MetaData[];
#endif
		static void NewProp_bUseOpenXRAsSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOpenXRAsSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Optimize for desktop facing upward or VR facing outward? */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Optimize for desktop facing upward or VR facing outward?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, Mode), Z_Construct_UEnum_UltraleapTracking_ELeapMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Set your tracking fidelity from low latency to smooth. If not set to custom, some of the low level settings may be\n\x09 * overwritten */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Set your tracking fidelity from low latency to smooth. If not set to custom, some of the low level settings may be\noverwritten" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity = { "TrackingFidelity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, TrackingFidelity), Z_Construct_UEnum_UltraleapTracking_ELeapTrackingFidelity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Verbosity of additional log updates from the leap service */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Verbosity of additional log updates from the leap service" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel = { "LeapServiceLogLevel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, LeapServiceLogLevel), Z_Construct_UEnum_UltraleapTracking_ELeapServiceLogLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Should leap use Temporal warping to align HMD rotation with leap samples */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Should leap use Temporal warping to align HMD rotation with leap samples" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseTimeWarp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp = { "bUseTimeWarp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Whether leap should use frame interpolation for smooth tracking */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Whether leap should use frame interpolation for smooth tracking" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Should all leap data be transported to HMD space? */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Should all leap data be transported to HMD space?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bTransformOriginToHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD = { "bTransformOriginToHMD", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Timewarp offset sampling in microseconds. The higher, the further back in time. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Timewarp offset sampling in microseconds. The higher, the further back in time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset = { "TimewarpOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, TimewarpOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Linear factor, useful for inverting timewarp effects for certain platforms (e.g. Oculus)*/" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Linear factor, useful for inverting timewarp effects for certain platforms (e.g. Oculus)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor = { "TimewarpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, TimewarpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Number of frames we should predict forward (positive) or back (negative) from right now for hands */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for hands" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor = { "HandInterpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, HandInterpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Number of frames we should predict forward (positive) or back (negative) from right now for fingers */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for fingers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor = { "FingerInterpFactor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, FingerInterpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset = { "HMDPositionOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, HMDPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset = { "HMDRotationOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, HMDRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "Comment", "/** Enable or disable the use of frame based gesture detection (old system)*/" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Enable or disable the use of frame based gesture detection (old system)" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseFrameBasedGestureDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection = { "bUseFrameBasedGestureDetection", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold = { "StartGrabThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, StartGrabThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold = { "EndGrabThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, EndGrabThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold = { "StartPinchThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, StartPinchThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold = { "EndPinchThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, EndPinchThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout = { "GrabTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, GrabTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout_MetaData[] = {
		{ "Category", "Gesture Options" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout = { "PinchTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapOptions, PinchTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "Comment", "/** Experimental: Pull tracking data from OpenXR instead of LeapC.dll. Note that Pinch and Grasp events and strength are not yet\n\x09 * implemented  */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Experimental: Pull tracking data from OpenXR instead of LeapC.dll. Note that Pinch and Grasp events and strength are not yet\nimplemented" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseOpenXRAsSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource = { "bUseOpenXRAsSource", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseFrameBasedGestureDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartGrabThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndGrabThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_StartPinchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_EndPinchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_GrabTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_PinchTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseOpenXRAsSource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapOptions",
		sizeof(FLeapOptions),
		alignof(FLeapOptions),
		Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapOptions"), sizeof(FLeapOptions), Get_Z_Construct_UScriptStruct_FLeapOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_Hash() { return 3625984882U; }
class UScriptStruct* FLeapStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapStats, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapStats"), sizeof(FLeapStats), Get_Z_Construct_UScriptStruct_FLeapStats_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapStats>()
{
	return FLeapStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapStats(FLeapStats::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapStats"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapStats
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapStats()
	{
		UScriptStruct::DeferCppStructOps<FLeapStats>(FName(TEXT("LeapStats")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapStats;
	struct Z_Construct_UScriptStruct_FLeapStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeapAPIVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeapAPIVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameExtrapolationInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameExtrapolationInMS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Read only stats from the plugin such as version and prediction interval. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Read only stats from the plugin such as version and prediction interval." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion = { "LeapAPIVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapStats, LeapAPIVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapStats, DeviceInfo), Z_Construct_UScriptStruct_FLeapDevice, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS = { "FrameExtrapolationInMS", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapStats, FrameExtrapolationInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapStats",
		sizeof(FLeapStats),
		alignof(FLeapStats),
		Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapStats"), sizeof(FLeapStats), Get_Z_Construct_UScriptStruct_FLeapStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapStats_Hash() { return 1202250236U; }
class UScriptStruct* FLeapDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ULTRALEAPTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDevice, Z_Construct_UPackage__Script_UltraleapTracking(), TEXT("LeapDevice"), sizeof(FLeapDevice), Get_Z_Construct_UScriptStruct_FLeapDevice_Hash());
	}
	return Singleton;
}
template<> ULTRALEAPTRACKING_API UScriptStruct* StaticStruct<FLeapDevice>()
{
	return FLeapDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapDevice(FLeapDevice::StaticStruct, TEXT("/Script/UltraleapTracking"), TEXT("LeapDevice"), false, nullptr, nullptr);
static struct FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDevice
{
	FScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDevice()
	{
		UScriptStruct::DeferCppStructOps<FLeapDevice>(FName(TEXT("LeapDevice")));
	}
} ScriptStruct_UltraleapTracking_StaticRegisterNativesFLeapDevice;
	struct Z_Construct_UScriptStruct_FLeapDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Baseline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Serial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/** One of the eLeapDevicePID members as a string. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "One of the eLeapDevicePID members as a string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID = { "PID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, PID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/**\n\x09 * The device baseline, in micrometers.\n\x09 *\n\x09 * The baseline is defined as the distance between the center axis of each lens in a stereo camera\n\x09 * system.  For other camera systems, this value is set to zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The device baseline, in micrometers.\n\nThe baseline is defined as the distance between the center axis of each lens in a stereo camera\nsystem.  For other camera systems, this value is set to zero." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline = { "Baseline", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, Baseline), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "Comment", "/** Serial number string */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "Serial number string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial = { "Serial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, Serial), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The horizontal field of view of this device in radians. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The horizontal field of view of this device in radians." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, HorizontalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The vertical field of view of this device in radians. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The vertical field of view of this device in radians." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV = { "VerticalFOV", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, VerticalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "Comment", "/** The maximum range for this device, in micrometers. */" },
		{ "ModuleRelativePath", "Public/UltraleapTrackingData.h" },
		{ "ToolTip", "The maximum range for this device, in micrometers." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeapDevice, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UltraleapTracking,
		nullptr,
		&NewStructOps,
		"LeapDevice",
		sizeof(FLeapDevice),
		alignof(FLeapDevice),
		Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UltraleapTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapDevice"), sizeof(FLeapDevice), Get_Z_Construct_UScriptStruct_FLeapDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_Hash() { return 268218984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
