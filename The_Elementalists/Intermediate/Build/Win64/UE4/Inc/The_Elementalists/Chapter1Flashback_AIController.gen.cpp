// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter1Flashback_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter1Flashback_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Flashback_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1Flashback_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter1Flashback_AIController::StaticRegisterNativesAChapter1Flashback_AIController()
	{
	}
	UClass* Z_Construct_UClass_AChapter1Flashback_AIController_NoRegister()
	{
		return AChapter1Flashback_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter1Flashback_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter1Flashback_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1Flashback_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter1Flashback_AIController.h" },
		{ "ModuleRelativePath", "Public/Chapter1Flashback_AIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter1Flashback_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter1Flashback_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter1Flashback_AIController_Statics::ClassParams = {
		&AChapter1Flashback_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChapter1Flashback_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1Flashback_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter1Flashback_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter1Flashback_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter1Flashback_AIController, 1507204833);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter1Flashback_AIController>()
	{
		return AChapter1Flashback_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter1Flashback_AIController(Z_Construct_UClass_AChapter1Flashback_AIController, &AChapter1Flashback_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter1Flashback_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter1Flashback_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
