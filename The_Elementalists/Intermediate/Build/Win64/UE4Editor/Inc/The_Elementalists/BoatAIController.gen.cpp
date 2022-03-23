// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/BoatAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoatAIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABoatAIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABoatAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void ABoatAIController::StaticRegisterNativesABoatAIController()
	{
	}
	UClass* Z_Construct_UClass_ABoatAIController_NoRegister()
	{
		return ABoatAIController::StaticClass();
	}
	struct Z_Construct_UClass_ABoatAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoatAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoatAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BoatAIController.h" },
		{ "ModuleRelativePath", "Public/BoatAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoatAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoatAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoatAIController_Statics::ClassParams = {
		&ABoatAIController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABoatAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoatAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoatAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoatAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoatAIController, 735348845);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ABoatAIController>()
	{
		return ABoatAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoatAIController(Z_Construct_UClass_ABoatAIController, &ABoatAIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ABoatAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoatAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
