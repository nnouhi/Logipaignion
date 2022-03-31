// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/ShootingToxicGas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingToxicGas() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AShootingToxicGas_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AShootingToxicGas();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AToxicGas();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void AShootingToxicGas::StaticRegisterNativesAShootingToxicGas()
	{
	}
	UClass* Z_Construct_UClass_AShootingToxicGas_NoRegister()
	{
		return AShootingToxicGas::StaticClass();
	}
	struct Z_Construct_UClass_AShootingToxicGas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootingRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingToxicGas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AToxicGas,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ShootingToxicGas.h" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "ShootingToxicGas" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingToxicGas, LaunchAngle), METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_LaunchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_LaunchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "ShootingToxicGas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingToxicGas, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ShootingToxicGas" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingToxicGas, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRange_MetaData[] = {
		{ "Category", "ShootingToxicGas" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRange = { "ShootingRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingToxicGas, ShootingRange), METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRate_MetaData[] = {
		{ "Category", "ShootingToxicGas" },
		{ "ModuleRelativePath", "Public/ShootingToxicGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRate = { "ShootingRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingToxicGas, ShootingRate), METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingToxicGas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_LaunchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingToxicGas_Statics::NewProp_ShootingRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingToxicGas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingToxicGas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingToxicGas_Statics::ClassParams = {
		&AShootingToxicGas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootingToxicGas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingToxicGas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingToxicGas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingToxicGas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingToxicGas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingToxicGas, 1472315874);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AShootingToxicGas>()
	{
		return AShootingToxicGas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingToxicGas(Z_Construct_UClass_AShootingToxicGas, &AShootingToxicGas::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AShootingToxicGas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingToxicGas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
