// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/IceCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceCube() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AIceCube_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AIceCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AIceCube::StaticRegisterNativesAIceCube()
	{
	}
	UClass* Z_Construct_UClass_AIceCube_NoRegister()
	{
		return AIceCube::StaticClass();
	}
	struct Z_Construct_UClass_AIceCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceCubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IceCubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IceCube.h" },
		{ "ModuleRelativePath", "Public/IceCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCube_Statics::NewProp_IceCubeMesh_MetaData[] = {
		{ "Category", "IceCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IceCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceCube_Statics::NewProp_IceCubeMesh = { "IceCubeMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCube, IceCubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceCube_Statics::NewProp_IceCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceCube_Statics::NewProp_IceCubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceCube_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "IceCube" },
		{ "Comment", "// CN Initial ice cube scale\n" },
		{ "ModuleRelativePath", "Public/IceCube.h" },
		{ "ToolTip", "CN Initial ice cube scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceCube_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceCube, Scale), METADATA_PARAMS(Z_Construct_UClass_AIceCube_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceCube_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIceCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCube_Statics::NewProp_IceCubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceCube_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceCube_Statics::ClassParams = {
		&AIceCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIceCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIceCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIceCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIceCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceCube, 942277515);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AIceCube>()
	{
		return AIceCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceCube(Z_Construct_UClass_AIceCube, &AIceCube::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AIceCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
