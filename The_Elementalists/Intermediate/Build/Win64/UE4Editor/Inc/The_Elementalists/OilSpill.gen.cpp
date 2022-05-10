// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/OilSpill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOilSpill() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpill_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AOilSpill();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AOilSpill::StaticRegisterNativesAOilSpill()
	{
	}
	UClass* Z_Construct_UClass_AOilSpill_NoRegister()
	{
		return AOilSpill::StaticClass();
	}
	struct Z_Construct_UClass_AOilSpill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OilSpillMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OilSpillMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsAwarded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointsAwarded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOilSpill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OilSpill.h" },
		{ "ModuleRelativePath", "Public/OilSpill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpill_Statics::NewProp_OilSpillMesh_MetaData[] = {
		{ "Category", "OilSpill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OilSpill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOilSpill_Statics::NewProp_OilSpillMesh = { "OilSpillMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpill, OilSpillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOilSpill_Statics::NewProp_OilSpillMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpill_Statics::NewProp_OilSpillMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpill_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "OilSpill" },
		{ "Comment", "// CN Root\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OilSpill.h" },
		{ "ToolTip", "CN Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOilSpill_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpill, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOilSpill_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpill_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOilSpill_Statics::NewProp_PointsAwarded_MetaData[] = {
		{ "Category", "OilSpill" },
		{ "Comment", "// CN Points awarded\n" },
		{ "ModuleRelativePath", "Public/OilSpill.h" },
		{ "ToolTip", "CN Points awarded" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOilSpill_Statics::NewProp_PointsAwarded = { "PointsAwarded", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOilSpill, PointsAwarded), METADATA_PARAMS(Z_Construct_UClass_AOilSpill_Statics::NewProp_PointsAwarded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpill_Statics::NewProp_PointsAwarded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOilSpill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpill_Statics::NewProp_OilSpillMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpill_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOilSpill_Statics::NewProp_PointsAwarded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOilSpill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOilSpill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOilSpill_Statics::ClassParams = {
		&AOilSpill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOilSpill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpill_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOilSpill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOilSpill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOilSpill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOilSpill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOilSpill, 3237690078);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AOilSpill>()
	{
		return AOilSpill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOilSpill(Z_Construct_UClass_AOilSpill, &AOilSpill::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AOilSpill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOilSpill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
