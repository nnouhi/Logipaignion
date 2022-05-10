// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/IceProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceProjectile() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AIceProjectile_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AIceProjectile();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AIceCube_NoRegister();
// End Cross Module References
	void AIceProjectile::StaticRegisterNativesAIceProjectile()
	{
	}
	UClass* Z_Construct_UClass_AIceProjectile_NoRegister()
	{
		return AIceProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AIceProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceCubeSpawnedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IceCubeSpawnedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceCubeFloorHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IceCubeFloorHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OilSpillFrozeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OilSpillFrozeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceCubeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IceCubeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IceProjectile.h" },
		{ "ModuleRelativePath", "Public/IceProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeSpawnedSound_MetaData[] = {
		{ "Category", "IceProjectile" },
		{ "ModuleRelativePath", "Public/IceProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeSpawnedSound = { "IceCubeSpawnedSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceProjectile, IceCubeSpawnedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeSpawnedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeSpawnedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeFloorHitSound_MetaData[] = {
		{ "Category", "IceProjectile" },
		{ "ModuleRelativePath", "Public/IceProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeFloorHitSound = { "IceCubeFloorHitSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceProjectile, IceCubeFloorHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeFloorHitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeFloorHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceProjectile_Statics::NewProp_OilSpillFrozeSound_MetaData[] = {
		{ "Category", "IceProjectile" },
		{ "ModuleRelativePath", "Public/IceProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceProjectile_Statics::NewProp_OilSpillFrozeSound = { "OilSpillFrozeSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceProjectile, OilSpillFrozeSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceProjectile_Statics::NewProp_OilSpillFrozeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::NewProp_OilSpillFrozeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeClass_MetaData[] = {
		{ "Category", "IceProjectile" },
		{ "Comment", "// CN The ice cube that spawns\n" },
		{ "ModuleRelativePath", "Public/IceProjectile.h" },
		{ "ToolTip", "CN The ice cube that spawns" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeClass = { "IceCubeClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceProjectile, IceCubeClass), Z_Construct_UClass_AIceCube_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIceProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeSpawnedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeFloorHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceProjectile_Statics::NewProp_OilSpillFrozeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceProjectile_Statics::NewProp_IceCubeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceProjectile_Statics::ClassParams = {
		&AIceProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIceProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIceProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIceProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceProjectile, 3051944358);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AIceProjectile>()
	{
		return AIceProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceProjectile(Z_Construct_UClass_AIceProjectile, &AIceProjectile::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AIceProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
