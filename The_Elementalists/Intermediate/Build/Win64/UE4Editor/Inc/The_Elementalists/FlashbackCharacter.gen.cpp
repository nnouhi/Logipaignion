// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/FlashbackCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashbackCharacter() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashbackCharacter_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashbackCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlashbackCharacter::execChangeSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlashbackCharacter::execGetHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
		P_NATIVE_END;
	}
	void AFlashbackCharacter::StaticRegisterNativesAFlashbackCharacter()
	{
		UClass* Class = AFlashbackCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSensitivity", &AFlashbackCharacter::execChangeSensitivity },
			{ "GetHealthPercentage", &AFlashbackCharacter::execGetHealthPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashbackCharacter, nullptr, "ChangeSensitivity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics
	{
		struct FlashbackCharacter_eventGetHealthPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashbackCharacter_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashbackCharacter, nullptr, "GetHealthPercentage", nullptr, nullptr, sizeof(FlashbackCharacter_eventGetHealthPercentage_Parms), Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlashbackCharacter_NoRegister()
	{
		return AFlashbackCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFlashbackCharacter_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookUpSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashbackCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlashbackCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashbackCharacter_ChangeSensitivity, "ChangeSensitivity" }, // 3604931152
		{ &Z_Construct_UFunction_AFlashbackCharacter_GetHealthPercentage, "GetHealthPercentage" }, // 1413284770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlashbackCharacter.h" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "FlashbackCharacter" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashbackCharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "FlashbackCharacter" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashbackCharacter, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*NN First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
		{ "ToolTip", "NN First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashbackCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_LookUpSensitivity_MetaData[] = {
		{ "Category", "FlashbackCharacter" },
		{ "Comment", "// NN Sensitivity for mouse Y, can be adjusted from editor\n" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
		{ "ToolTip", "NN Sensitivity for mouse Y, can be adjusted from editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_LookUpSensitivity = { "LookUpSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashbackCharacter, LookUpSensitivity), METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_LookUpSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_LookUpSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_TurnSensitivity_MetaData[] = {
		{ "Category", "FlashbackCharacter" },
		{ "Comment", "// NN Sensitivity for mouse X, can be adjusted from editor\n" },
		{ "ModuleRelativePath", "Public/FlashbackCharacter.h" },
		{ "ToolTip", "NN Sensitivity for mouse X, can be adjusted from editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_TurnSensitivity = { "TurnSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashbackCharacter, TurnSensitivity), METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_TurnSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_TurnSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashbackCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_LookUpSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashbackCharacter_Statics::NewProp_TurnSensitivity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashbackCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashbackCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashbackCharacter_Statics::ClassParams = {
		&AFlashbackCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlashbackCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashbackCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashbackCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashbackCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashbackCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashbackCharacter, 2655587761);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlashbackCharacter>()
	{
		return AFlashbackCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashbackCharacter(Z_Construct_UClass_AFlashbackCharacter, &AFlashbackCharacter::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlashbackCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashbackCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
