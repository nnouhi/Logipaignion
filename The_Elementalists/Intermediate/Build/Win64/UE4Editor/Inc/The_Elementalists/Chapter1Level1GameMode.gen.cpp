// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter1Level1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter1Level1GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level1GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level1GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1GameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	DEFINE_FUNCTION(AChapter1Level1GameMode::execDisplayObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayObjective();
		P_NATIVE_END;
	}
	void AChapter1Level1GameMode::StaticRegisterNativesAChapter1Level1GameMode()
	{
		UClass* Class = AChapter1Level1GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayObjective", &AChapter1Level1GameMode::execDisplayObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chapter1Level1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChapter1Level1GameMode, nullptr, "DisplayObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChapter1Level1GameMode_NoRegister()
	{
		return AChapter1Level1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter1Level1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter1Level1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AChapter1GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChapter1Level1GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChapter1Level1GameMode_DisplayObjective, "DisplayObjective" }, // 1799584635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1Level1GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter1Level1GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter1Level1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter1Level1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter1Level1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter1Level1GameMode_Statics::ClassParams = {
		&AChapter1Level1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter1Level1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Level1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter1Level1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter1Level1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter1Level1GameMode, 3403717185);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter1Level1GameMode>()
	{
		return AChapter1Level1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter1Level1GameMode(Z_Construct_UClass_AChapter1Level1GameMode, &AChapter1Level1GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter1Level1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter1Level1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
