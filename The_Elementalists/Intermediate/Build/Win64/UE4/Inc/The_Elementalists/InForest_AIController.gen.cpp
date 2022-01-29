// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/InForest_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInForest_AIController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AInForest_AIController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AInForest_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AInForest_AIController::StaticRegisterNativesAInForest_AIController()
	{
	}
	UClass* Z_Construct_UClass_AInForest_AIController_NoRegister()
	{
		return AInForest_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AInForest_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidDistancePlayerAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValidDistancePlayerAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingSounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInForest_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInForest_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InForest_AIController.h" },
		{ "ModuleRelativePath", "Public/InForest_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInForest_AIController_Statics::NewProp_ValidDistancePlayerAI_MetaData[] = {
		{ "Category", "InForest_AIController" },
		{ "ModuleRelativePath", "Public/InForest_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInForest_AIController_Statics::NewProp_ValidDistancePlayerAI = { "ValidDistancePlayerAI", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInForest_AIController, ValidDistancePlayerAI), METADATA_PARAMS(Z_Construct_UClass_AInForest_AIController_Statics::NewProp_ValidDistancePlayerAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInForest_AIController_Statics::NewProp_ValidDistancePlayerAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInForest_AIController_Statics::NewProp_CallingSounds_MetaData[] = {
		{ "Category", "InForest_AIController" },
		{ "ModuleRelativePath", "Public/InForest_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInForest_AIController_Statics::NewProp_CallingSounds = { "CallingSounds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInForest_AIController, CallingSounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInForest_AIController_Statics::NewProp_CallingSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInForest_AIController_Statics::NewProp_CallingSounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInForest_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInForest_AIController_Statics::NewProp_ValidDistancePlayerAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInForest_AIController_Statics::NewProp_CallingSounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInForest_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInForest_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInForest_AIController_Statics::ClassParams = {
		&AInForest_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInForest_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInForest_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInForest_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInForest_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInForest_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInForest_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInForest_AIController, 2447889517);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AInForest_AIController>()
	{
		return AInForest_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInForest_AIController(Z_Construct_UClass_AInForest_AIController, &AInForest_AIController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AInForest_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInForest_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
