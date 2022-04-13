// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter2Level3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter2Level3GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2Level3GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter2Level3GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	DEFINE_FUNCTION(AChapter2Level3GameMode::execDisplayObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayObjective();
		P_NATIVE_END;
	}
	void AChapter2Level3GameMode::StaticRegisterNativesAChapter2Level3GameMode()
	{
		UClass* Class = AChapter2Level3GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayObjective", &AChapter2Level3GameMode::execDisplayObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chapter2Level3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChapter2Level3GameMode, nullptr, "DisplayObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChapter2Level3GameMode_NoRegister()
	{
		return AChapter2Level3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter2Level3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter2Level3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChapter2Level3GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChapter2Level3GameMode_DisplayObjective, "DisplayObjective" }, // 1331454550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter2Level3GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter2Level3GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter2Level3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter2Level3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter2Level3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter2Level3GameMode_Statics::ClassParams = {
		&AChapter2Level3GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChapter2Level3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter2Level3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter2Level3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter2Level3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter2Level3GameMode, 1054703065);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter2Level3GameMode>()
	{
		return AChapter2Level3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter2Level3GameMode(Z_Construct_UClass_AChapter2Level3GameMode, &AChapter2Level3GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter2Level3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter2Level3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
