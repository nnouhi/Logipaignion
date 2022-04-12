// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Boat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoat() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABoat_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABoat();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashbackCharacter();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void ABoat::StaticRegisterNativesABoat()
	{
	}
	UClass* Z_Construct_UClass_ABoat_NoRegister()
	{
		return ABoat::StaticClass();
	}
	struct Z_Construct_UClass_ABoat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoatMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoatMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SittingMesh1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SittingMesh1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SittingMesh2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SittingMesh2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SittingMesh3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SittingMesh3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Minimap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFlashbackCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Boat.h" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_BoatMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Boat" },
		{ "Comment", "// NN Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
		{ "ToolTip", "NN Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_BoatMesh = { "BoatMesh", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, BoatMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_BoatMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_BoatMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_FPSCamera_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_FPSCamera = { "FPSCamera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, FPSCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_FPSCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_FPSCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh1_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh1 = { "SittingMesh1", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, SittingMesh1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh2_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh2 = { "SittingMesh2", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, SittingMesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh3_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh3 = { "SittingMesh3", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, SittingMesh3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_MinimapArm_MetaData[] = {
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_MinimapArm = { "MinimapArm", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, MinimapArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_MinimapArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_MinimapArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoat_Statics::NewProp_Minimap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Boat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoat_Statics::NewProp_Minimap = { "Minimap", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoat, Minimap), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::NewProp_Minimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::NewProp_Minimap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_BoatMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_FPSCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_SittingMesh3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_MinimapArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoat_Statics::NewProp_Minimap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoat_Statics::ClassParams = {
		&ABoat::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoat, 2085558711);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ABoat>()
	{
		return ABoat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoat(Z_Construct_UClass_ABoat, &ABoat::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ABoat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
