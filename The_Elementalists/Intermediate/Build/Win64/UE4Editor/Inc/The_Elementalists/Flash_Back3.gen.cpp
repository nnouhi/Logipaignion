// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flash_Back3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlash_Back3() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back3_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back3();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AFlash_Back3::StaticRegisterNativesAFlash_Back3()
	{
	}
	UClass* Z_Construct_UClass_AFlash_Back3_NoRegister()
	{
		return AFlash_Back3::StaticClass();
	}
	struct Z_Construct_UClass_AFlash_Back3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlash_Back3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlash_Back3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flash_Back3.h" },
		{ "ModuleRelativePath", "Public/Flash_Back3.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlash_Back3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlash_Back3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlash_Back3_Statics::ClassParams = {
		&AFlash_Back3::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlash_Back3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlash_Back3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlash_Back3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlash_Back3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlash_Back3, 3982758391);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlash_Back3>()
	{
		return AFlash_Back3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlash_Back3(Z_Construct_UClass_AFlash_Back3, &AFlash_Back3::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlash_Back3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlash_Back3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
