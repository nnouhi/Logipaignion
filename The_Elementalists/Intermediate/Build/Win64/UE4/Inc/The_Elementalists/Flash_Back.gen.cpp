// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flash_Back.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlash_Back() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlash_Back();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
// End Cross Module References
	void AFlash_Back::StaticRegisterNativesAFlash_Back()
	{
	}
	UClass* Z_Construct_UClass_AFlash_Back_NoRegister()
	{
		return AFlash_Back::StaticClass();
	}
	struct Z_Construct_UClass_AFlash_Back_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlash_Back_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlash_Back_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flash_Back.h" },
		{ "ModuleRelativePath", "Public/Flash_Back.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlash_Back_Statics::NewProp_ObjectiveMessage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget" },
		{ "Comment", "// NN Appropriate objective message to be displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flash_Back.h" },
		{ "ToolTip", "NN Appropriate objective message to be displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFlash_Back_Statics::NewProp_ObjectiveMessage = { "ObjectiveMessage", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlash_Back, ObjectiveMessage), METADATA_PARAMS(Z_Construct_UClass_AFlash_Back_Statics::NewProp_ObjectiveMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlash_Back_Statics::NewProp_ObjectiveMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlash_Back_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlash_Back_Statics::NewProp_ObjectiveMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlash_Back_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlash_Back>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlash_Back_Statics::ClassParams = {
		&AFlash_Back::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlash_Back_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlash_Back_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlash_Back_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlash_Back_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlash_Back()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlash_Back_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlash_Back, 4242756732);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlash_Back>()
	{
		return AFlash_Back::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlash_Back(Z_Construct_UClass_AFlash_Back, &AFlash_Back::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlash_Back"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlash_Back);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
