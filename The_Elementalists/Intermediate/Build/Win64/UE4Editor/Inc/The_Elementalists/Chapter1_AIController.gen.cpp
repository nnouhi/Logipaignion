// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Chapter1_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter1_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AChapter1_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AChapter1_AIController::StaticRegisterNativesAChapter1_AIController()
	{
	}
	UClass* Z_Construct_UClass_AChapter1_AIController_NoRegister()
	{
		return AChapter1_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AChapter1_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter1_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter1_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter1_AIController.h" },
		{ "ModuleRelativePath", "Public/Chapter1_AIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter1_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter1_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter1_AIController_Statics::ClassParams = {
		&AChapter1_AIController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChapter1_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter1_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter1_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter1_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter1_AIController, 1747200549);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AChapter1_AIController>()
	{
		return AChapter1_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter1_AIController(Z_Construct_UClass_AChapter1_AIController, &AChapter1_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AChapter1_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter1_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
