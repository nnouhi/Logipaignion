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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InfoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableItem_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "InteractableItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableItem_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableItem_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "InteractableItem" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableItem, ReachDistance), METADATA_PARAMS(Z_Construct_UClass_AInteractableItem_Statics::NewProp_ReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::NewProp_ReachDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoClass_MetaData[] = {
		{ "Category", "InteractableItem" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoClass = { "InfoClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableItem, InfoClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoWidget = { "InfoWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableItem, InfoWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_ReachDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableItem_Statics::NewProp_InfoWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableItem_Statics::ClassParams = {
		&AInteractableItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableItem_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AInteractableItem, 472930140);
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
