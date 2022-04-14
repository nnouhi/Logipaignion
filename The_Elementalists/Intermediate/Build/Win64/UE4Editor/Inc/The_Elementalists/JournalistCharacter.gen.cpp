// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/JournalistCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalistCharacter() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AJournalistCharacter_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AJournalistCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AJournalistCharacter::execChangeSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSensitivity();
		P_NATIVE_END;
	}
	void AJournalistCharacter::StaticRegisterNativesAJournalistCharacter()
	{
		UClass* Class = AJournalistCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSensitivity", &AJournalistCharacter::execChangeSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJournalistCharacter, nullptr, "ChangeSensitivity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJournalistCharacter_NoRegister()
	{
		return AJournalistCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJournalistCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
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
	UObject* (*const Z_Construct_UClass_AJournalistCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJournalistCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJournalistCharacter_ChangeSensitivity, "ChangeSensitivity" }, // 799655310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJournalistCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JournalistCharacter.h" },
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/*NN First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
		{ "ToolTip", "NN First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJournalistCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJournalistCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_LookUpSensitivity_MetaData[] = {
		{ "Category", "JournalistCharacter" },
		{ "Comment", "// NN Sensitivity for mouse Y, can be adjusted from editor\n" },
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
		{ "ToolTip", "NN Sensitivity for mouse Y, can be adjusted from editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_LookUpSensitivity = { "LookUpSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJournalistCharacter, LookUpSensitivity), METADATA_PARAMS(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_LookUpSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_LookUpSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_TurnSensitivity_MetaData[] = {
		{ "Category", "JournalistCharacter" },
		{ "Comment", "// NN Sensitivity for mouse X, can be adjusted from editor\n" },
		{ "ModuleRelativePath", "Public/JournalistCharacter.h" },
		{ "ToolTip", "NN Sensitivity for mouse X, can be adjusted from editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_TurnSensitivity = { "TurnSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJournalistCharacter, TurnSensitivity), METADATA_PARAMS(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_TurnSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_TurnSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJournalistCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_LookUpSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJournalistCharacter_Statics::NewProp_TurnSensitivity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJournalistCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJournalistCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJournalistCharacter_Statics::ClassParams = {
		&AJournalistCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJournalistCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJournalistCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJournalistCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJournalistCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJournalistCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJournalistCharacter, 2217330591);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AJournalistCharacter>()
	{
		return AJournalistCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJournalistCharacter(Z_Construct_UClass_AJournalistCharacter, &AJournalistCharacter::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AJournalistCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJournalistCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
