// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Minimap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimap() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AMinimap_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AMinimap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void AMinimap::StaticRegisterNativesAMinimap()
	{
	}
	UClass* Z_Construct_UClass_AMinimap_NoRegister()
	{
		return AMinimap::StaticClass();
	}
	struct Z_Construct_UClass_AMinimap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Minimap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinimap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Minimap.h" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minimap" },
		{ "Comment", "// NN SceneComp to attach to root comp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
		{ "ToolTip", "NN SceneComp to attach to root comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinimap_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinimap, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minimap" },
		{ "Comment", "// NN SpringArm attach to root\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
		{ "ToolTip", "NN SpringArm attach to root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinimap_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinimap, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinimap_Statics::NewProp_Minimap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Minimap" },
		{ "Comment", "// NN USceneCaptureComponent to act like Minimap attach to spring arm\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Minimap.h" },
		{ "ToolTip", "NN USceneCaptureComponent to act like Minimap attach to spring arm" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinimap_Statics::NewProp_Minimap = { "Minimap", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinimap, Minimap), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::NewProp_Minimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::NewProp_Minimap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinimap_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinimap_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinimap_Statics::NewProp_Minimap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinimap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinimap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinimap_Statics::ClassParams = {
		&AMinimap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMinimap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinimap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinimap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinimap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinimap, 1045091905);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AMinimap>()
	{
		return AMinimap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinimap(Z_Construct_UClass_AMinimap, &AMinimap::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AMinimap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinimap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
