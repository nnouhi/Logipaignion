// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter3Level2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter3Level2GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level2GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter3Level2GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter3Level2GameMode::StaticRegisterNativesAChapter3Level2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AChapter3Level2GameMode_NoRegister()
	{
		return AChapter3Level2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter3Level2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter3Level2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter3Level2GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter3Level2GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter3Level2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter3Level2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter3Level2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter3Level2GameMode_Statics::ClassParams = {
		&AChapter3Level2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter3Level2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter3Level2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter3Level2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter3Level2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter3Level2GameMode, 4162012644);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter3Level2GameMode>()
	{
		return AChapter3Level2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter3Level2GameMode(Z_Construct_UClass_AChapter3Level2GameMode, &AChapter3Level2GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter3Level2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter3Level2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
