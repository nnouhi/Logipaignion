// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flash_Back2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlash_Back2() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back2_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back2();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AFlash_Back2::StaticRegisterNativesAFlash_Back2()
	{
	}
	UClass* Z_Construct_UClass_AFlash_Back2_NoRegister()
	{
		return AFlash_Back2::StaticClass();
	}
	struct Z_Construct_UClass_AFlash_Back2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlash_Back2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlash_Back2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flash_Back2.h" },
		{ "ModuleRelativePath", "Public/Flash_Back2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlash_Back2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlash_Back2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlash_Back2_Statics::ClassParams = {
		&AFlash_Back2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFlash_Back2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlash_Back2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlash_Back2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlash_Back2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlash_Back2, 3380367887);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlash_Back2>()
	{
		return AFlash_Back2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlash_Back2(Z_Construct_UClass_AFlash_Back2, &AFlash_Back2::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlash_Back2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlash_Back2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
