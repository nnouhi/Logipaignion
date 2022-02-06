// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/InteractableItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableItem() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AInteractableItem_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AInteractableItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AInteractableItem::StaticRegisterNativesAInteractableItem()
	{
	}
	UClass* Z_Construct_UClass_AInteractableItem_NoRegister()
	{
		return AInteractableItem::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableItem.h" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableItem_Statics::ClassParams = {
		&AInteractableItem::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableItem, 30818026);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AInteractableItem>()
	{
		return AInteractableItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableItem(Z_Construct_UClass_AInteractableItem, &AInteractableItem::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AInteractableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
