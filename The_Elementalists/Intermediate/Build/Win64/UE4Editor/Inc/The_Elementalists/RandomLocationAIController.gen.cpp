// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/RandomLocationAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomLocationAIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ARandomLocationAIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ARandomLocationAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void ARandomLocationAIController::StaticRegisterNativesARandomLocationAIController()
	{
	}
	UClass* Z_Construct_UClass_ARandomLocationAIController_NoRegister()
	{
		return ARandomLocationAIController::StaticClass();
	}
	struct Z_Construct_UClass_ARandomLocationAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigableRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomLocationAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomLocationAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RandomLocationAIController.h" },
		{ "ModuleRelativePath", "Public/RandomLocationAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomLocationAIController_Statics::NewProp_NavigableRadius_MetaData[] = {
		{ "Category", "RandomLocationAIController" },
		{ "ModuleRelativePath", "Public/RandomLocationAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARandomLocationAIController_Statics::NewProp_NavigableRadius = { "NavigableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomLocationAIController, NavigableRadius), METADATA_PARAMS(Z_Construct_UClass_ARandomLocationAIController_Statics::NewProp_NavigableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomLocationAIController_Statics::NewProp_NavigableRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomLocationAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomLocationAIController_Statics::NewProp_NavigableRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomLocationAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomLocationAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomLocationAIController_Statics::ClassParams = {
		&ARandomLocationAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomLocationAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomLocationAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomLocationAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomLocationAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomLocationAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomLocationAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomLocationAIController, 2363042004);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ARandomLocationAIController>()
	{
		return ARandomLocationAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomLocationAIController(Z_Construct_UClass_ARandomLocationAIController, &ARandomLocationAIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ARandomLocationAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomLocationAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
