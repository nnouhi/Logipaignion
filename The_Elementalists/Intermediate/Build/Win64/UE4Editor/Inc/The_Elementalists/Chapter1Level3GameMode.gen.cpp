// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter1Level3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter1Level3GameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level3GameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Level3GameMode();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1GameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter1Level3GameMode::StaticRegisterNativesAChapter1Level3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AChapter1Level3GameMode_NoRegister()
	{
		return AChapter1Level3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChapter1Level3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter1Level3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AChapter1GameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter1Level3GameMode.h" },
		{ "ModuleRelativePath", "Public/Chapter1Level3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter1Level3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter1Level3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter1Level3GameMode_Statics::ClassParams = {
		&AChapter1Level3GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Level3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter1Level3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter1Level3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter1Level3GameMode, 1904890855);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter1Level3GameMode>()
	{
		return AChapter1Level3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter1Level3GameMode(Z_Construct_UClass_AChapter1Level3GameMode, &AChapter1Level3GameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter1Level3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter1Level3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
