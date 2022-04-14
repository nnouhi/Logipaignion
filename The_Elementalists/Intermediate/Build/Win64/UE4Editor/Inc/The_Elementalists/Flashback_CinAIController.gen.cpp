// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flashback_CinAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashback_CinAIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_CinAIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_CinAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AFlashback_CinAIController::StaticRegisterNativesAFlashback_CinAIController()
	{
	}
	UClass* Z_Construct_UClass_AFlashback_CinAIController_NoRegister()
	{
		return AFlashback_CinAIController::StaticClass();
	}
	struct Z_Construct_UClass_AFlashback_CinAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashback_CinAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_CinAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flashback_CinAIController.h" },
		{ "ModuleRelativePath", "Public/Flashback_CinAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashback_CinAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashback_CinAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashback_CinAIController_Statics::ClassParams = {
		&AFlashback_CinAIController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFlashback_CinAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_CinAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashback_CinAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashback_CinAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashback_CinAIController, 1858613538);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlashback_CinAIController>()
	{
		return AFlashback_CinAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashback_CinAIController(Z_Construct_UClass_AFlashback_CinAIController, &AFlashback_CinAIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlashback_CinAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashback_CinAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
