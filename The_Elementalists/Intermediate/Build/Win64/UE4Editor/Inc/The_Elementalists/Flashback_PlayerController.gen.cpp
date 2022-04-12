// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/Flashback_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashback_PlayerController() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_PlayerController_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_AFlashback_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlashback_PlayerController::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	void AFlashback_PlayerController::StaticRegisterNativesAFlashback_PlayerController()
	{
		UClass* Class = AFlashback_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Resume", &AFlashback_PlayerController::execResume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CN Resume the game\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "CN Resume the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashback_PlayerController, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashback_PlayerController_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashback_PlayerController_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlashback_PlayerController_NoRegister()
	{
		return AFlashback_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFlashback_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MemoryEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryEffectWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemoryEffectWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinimapHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthbarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthbarClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthbarWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthbarWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameOverClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOverWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartTimerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartTimerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelClearClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LevelClearClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelClearWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelClearWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InfoHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasMaskClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GasMaskClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasMaskWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GasMaskWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlurClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlurWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlurWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashback_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlashback_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashback_PlayerController_Resume, "Resume" }, // 3034499027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Flashback_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// CN Memory effect\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "CN Memory effect" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectClass = { "MemoryEffectClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MemoryEffectClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectWidget = { "MemoryEffectWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MemoryEffectWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Objective widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN Objective widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass = { "ObjectiveHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget = { "ObjectiveWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Minimap widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN Minimap widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass = { "MinimapHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MinimapHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget = { "MinimapWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MinimapWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "// NN Big Minimap widget displayed on screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "NN Big Minimap widget displayed on screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapHUDClass = { "MapHUDClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MapHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapWidget = { "MapWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, MapWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass = { "HealthbarClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, HealthbarClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget = { "HealthbarWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, HealthbarWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverClass = { "GameOverClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, GameOverClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverWidget = { "GameOverWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, GameOverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerClass = { "StartTimerClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, StartTimerClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerWidget = { "StartTimerWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, StartTimerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearClass = { "LevelClearClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, LevelClearClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearWidget = { "LevelClearWidget", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, LevelClearWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoHUDClass_MetaData[] = {
		{ "Category", "Flashback_PlayerController" },
		{ "Comment", "// FOR press e to interact\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "FOR press e to interact" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoHUDClass = { "InfoHUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, InfoHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoWidget = { "InfoWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, InfoWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskClass_MetaData[] = {
		{ "Category", "Flashback_PlayerController" },
		{ "Comment", "// CN For gas mask\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "CN For gas mask" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskClass = { "GasMaskClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, GasMaskClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskWidget = { "GasMaskWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, GasMaskWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurClass_MetaData[] = {
		{ "Category", "Flashback_PlayerController" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurClass = { "BlurClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, BlurClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurWidget = { "BlurWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, BlurWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseClass_MetaData[] = {
		{ "Category", "Flashback_PlayerController" },
		{ "Comment", "// CN Pause screen\n" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
		{ "ToolTip", "CN Pause screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseClass = { "PauseClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, PauseClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Flashback_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseWidget = { "PauseWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashback_PlayerController, PauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MemoryEffectWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_ObjectiveWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MinimapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_MapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_HealthbarWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GameOverWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_StartTimerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_LevelClearWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_InfoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_GasMaskWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_BlurWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashback_PlayerController_Statics::NewProp_PauseWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashback_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashback_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashback_PlayerController_Statics::ClassParams = {
		&AFlashback_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashback_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashback_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashback_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashback_PlayerController, 3088360982);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<AFlashback_PlayerController>()
	{
		return AFlashback_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashback_PlayerController(Z_Construct_UClass_AFlashback_PlayerController, &AFlashback_PlayerController::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("AFlashback_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashback_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
