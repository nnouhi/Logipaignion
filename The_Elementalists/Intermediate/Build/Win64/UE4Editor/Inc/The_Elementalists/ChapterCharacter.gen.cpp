// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/ChapterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapterCharacter() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapterCharacter_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChapterCharacter::execGetHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChapterCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void AChapterCharacter::StaticRegisterNativesAChapterCharacter()
	{
		UClass* Class = AChapterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercentage", &AChapterCharacter::execGetHealthPercentage },
			{ "IsDead", &AChapterCharacter::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics
	{
		struct ChapterCharacter_eventGetHealthPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChapterCharacter_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CN Get players health percentage\n" },
		{ "ModuleRelativePath", "Public/ChapterCharacter.h" },
		{ "ToolTip", "CN Get players health percentage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChapterCharacter, nullptr, "GetHealthPercentage", nullptr, nullptr, sizeof(ChapterCharacter_eventGetHealthPercentage_Parms), Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChapterCharacter_IsDead_Statics
	{
		struct ChapterCharacter_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChapterCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChapterCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CN To check if player is dead\n" },
		{ "ModuleRelativePath", "Public/ChapterCharacter.h" },
		{ "ToolTip", "CN To check if player is dead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChapterCharacter, nullptr, "IsDead", nullptr, nullptr, sizeof(ChapterCharacter_eventIsDead_Parms), Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChapterCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChapterCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChapterCharacter_NoRegister()
	{
		return AChapterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AChapterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChapterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChapterCharacter_GetHealthPercentage, "GetHealthPercentage" }, // 3270852804
		{ &Z_Construct_UFunction_AChapterCharacter_IsDead, "IsDead" }, // 516175501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ChapterCharacter.h" },
		{ "ModuleRelativePath", "Public/ChapterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "ChapterCharacter" },
		{ "Comment", "// CN The projectile spawn point\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChapterCharacter.h" },
		{ "ToolTip", "CN The projectile spawn point" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapterCharacter, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ChapterCharacter" },
		{ "Comment", "// CN The type of projectile\n" },
		{ "ModuleRelativePath", "Public/ChapterCharacter.h" },
		{ "ToolTip", "CN The type of projectile" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapterCharacter, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapterCharacter_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapterCharacter_Statics::ClassParams = {
		&AChapterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChapterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapterCharacter, 3185247359);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapterCharacter>()
	{
		return AChapterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapterCharacter(Z_Construct_UClass_AChapterCharacter, &AChapterCharacter::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
