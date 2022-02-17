// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/The_ElementalistsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThe_ElementalistsGameModeBase() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AThe_ElementalistsGameModeBase_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AThe_ElementalistsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AThe_ElementalistsGameModeBase::StaticRegisterNativesAThe_ElementalistsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AThe_ElementalistsGameModeBase_NoRegister()
	{
		return AThe_ElementalistsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "The_ElementalistsGameModeBase.h" },
		{ "ModuleRelativePath", "Public/The_ElementalistsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_ElementalistsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::ClassParams = {
		&AThe_ElementalistsGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThe_ElementalistsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThe_ElementalistsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThe_ElementalistsGameModeBase, 979230455);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AThe_ElementalistsGameModeBase>()
	{
		return AThe_ElementalistsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThe_ElementalistsGameModeBase(Z_Construct_UClass_AThe_ElementalistsGameModeBase, &AThe_ElementalistsGameModeBase::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AThe_ElementalistsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_ElementalistsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
