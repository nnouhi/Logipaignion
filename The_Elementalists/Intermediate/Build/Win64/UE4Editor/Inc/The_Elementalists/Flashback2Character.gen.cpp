// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flashback2Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashback2Character() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback2Character_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlashback2Character::execGetHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
		P_NATIVE_END;
	}
	void AFlashback2Character::StaticRegisterNativesAFlashback2Character()
	{
		UClass* Class = AFlashback2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercentage", &AFlashback2Character::execGetHealthPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics
	{
		struct Flashback2Character_eventGetHealthPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashback2Character_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashback2Character, nullptr, "GetHealthPercentage", nullptr, nullptr, sizeof(Flashback2Character_eventGetHealthPercentage_Parms), Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlashback2Character_NoRegister()
	{
		return AFlashback2Character::StaticClass();
	}
	struct Z_Construct_UClass_AFlashback2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoughSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoughSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoughingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoughingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashback2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlashback2Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashback2Character_GetHealthPercentage, "GetHealthPercentage" }, // 1302108009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Flashback2Character.h" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Flashback2Character" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Flashback2Character" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_LineTraceDistance_MetaData[] = {
		{ "Category", "Flashback2Character" },
		{ "Comment", "// CN Line trace distance for interaction with mask\n" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
		{ "ToolTip", "CN Line trace distance for interaction with mask" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_LineTraceDistance = { "LineTraceDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, LineTraceDistance), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_LineTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_LineTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughSound_MetaData[] = {
		{ "Category", "Flashback2Character" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughSound = { "CoughSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, CoughSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughingTime_MetaData[] = {
		{ "Category", "Flashback2Character" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughingTime = { "CoughingTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, CoughingTime), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*NN First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
		{ "ToolTip", "NN First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*NN Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
		{ "ToolTip", "NN Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*NN Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/Flashback2Character.h" },
		{ "ToolTip", "NN Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback2Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashback2Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_LineTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_CoughingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback2Character_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashback2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashback2Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashback2Character_Statics::ClassParams = {
		&AFlashback2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlashback2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashback2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashback2Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashback2Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashback2Character, 3394809472);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlashback2Character>()
	{
		return AFlashback2Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashback2Character(Z_Construct_UClass_AFlashback2Character, &AFlashback2Character::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlashback2Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashback2Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
