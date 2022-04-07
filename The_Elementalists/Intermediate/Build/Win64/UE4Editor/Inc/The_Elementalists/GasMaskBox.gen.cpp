// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/GasMaskBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasMaskBox() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AGasMaskBox_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AGasMaskBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AGasMaskBox::StaticRegisterNativesAGasMaskBox()
	{
	}
	UClass* Z_Construct_UClass_AGasMaskBox_NoRegister()
	{
		return AGasMaskBox::StaticClass();
	}
	struct Z_Construct_UClass_AGasMaskBox_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGasMaskBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GasMaskBox.h" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "GasMaskBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasMaskBox, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::NewProp_MaskMesh_MetaData[] = {
		{ "Category", "GasMaskBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGasMaskBox_Statics::NewProp_MaskMesh = { "MaskMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasMaskBox, MaskMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_MaskMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_MaskMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Particles_MetaData[] = {
		{ "Category", "GasMaskBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasMaskBox, Particles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Particles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "GasMaskBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGasMaskBox_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasMaskBox, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_BoxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_BoxMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasMaskBox_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "GasMaskBox" },
		{ "ModuleRelativePath", "Public/GasMaskBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGasMaskBox_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGasMaskBox, ReachDistance), METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_ReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::NewProp_ReachDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGasMaskBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasMaskBox_Statics::NewProp_MaskMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasMaskBox_Statics::NewProp_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasMaskBox_Statics::NewProp_BoxMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGasMaskBox_Statics::NewProp_ReachDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGasMaskBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGasMaskBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGasMaskBox_Statics::ClassParams = {
		&AGasMaskBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGasMaskBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGasMaskBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGasMaskBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGasMaskBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGasMaskBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGasMaskBox, 3538389805);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AGasMaskBox>()
	{
		return AGasMaskBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGasMaskBox(Z_Construct_UClass_AGasMaskBox, &AGasMaskBox::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AGasMaskBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGasMaskBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
