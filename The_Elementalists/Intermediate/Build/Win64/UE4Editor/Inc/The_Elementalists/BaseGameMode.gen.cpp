// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Elementalists/Public/BaseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameMode() {}
// Cross Module References
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode_NoRegister();
	THE_ELEMENTALISTS_API UClass* Z_Construct_UClass_ABaseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_The_Elementalists();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseGameMode::execGetTotalScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execGetDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execSetDifficulty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(Z_Param_NewDifficulty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execActorDied)
	{
		P_GET_OBJECT(AActor,Z_Param_DeadActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorDied(Z_Param_DeadActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execGetChapterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetChapterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execLevelComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execProgressNextChapter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProgressNextChapter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseGameMode::execGetObjectiveMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjectiveMessage();
		P_NATIVE_END;
	}
	void ABaseGameMode::StaticRegisterNativesABaseGameMode()
	{
		UClass* Class = ABaseGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorDied", &ABaseGameMode::execActorDied },
			{ "GetChapterName", &ABaseGameMode::execGetChapterName },
			{ "GetDifficulty", &ABaseGameMode::execGetDifficulty },
			{ "GetObjectiveMessage", &ABaseGameMode::execGetObjectiveMessage },
			{ "GetScore", &ABaseGameMode::execGetScore },
			{ "GetTotalScore", &ABaseGameMode::execGetTotalScore },
			{ "LevelComplete", &ABaseGameMode::execLevelComplete },
			{ "ProgressNextChapter", &ABaseGameMode::execProgressNextChapter },
			{ "SetDifficulty", &ABaseGameMode::execSetDifficulty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics
	{
		struct BaseGameMode_eventActorDied_Parms
		{
			AActor* DeadActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::NewProp_DeadActor = { "DeadActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventActorDied_Parms, DeadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::NewProp_DeadActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "ActorDied", nullptr, nullptr, sizeof(BaseGameMode_eventActorDied_Parms), Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_ActorDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_ActorDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics
	{
		struct BaseGameMode_eventGetChapterName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventGetChapterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "GetChapterName", nullptr, nullptr, sizeof(BaseGameMode_eventGetChapterName_Parms), Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_GetChapterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_GetChapterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics
	{
		struct BaseGameMode_eventGetDifficulty_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventGetDifficulty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(BaseGameMode_eventGetDifficulty_Parms), Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics
	{
		struct BaseGameMode_eventGetObjectiveMessage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventGetObjectiveMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "GetObjectiveMessage", nullptr, nullptr, sizeof(BaseGameMode_eventGetObjectiveMessage_Parms), Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_GetScore_Statics
	{
		struct BaseGameMode_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "GetScore", nullptr, nullptr, sizeof(BaseGameMode_eventGetScore_Parms), Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics
	{
		struct BaseGameMode_eventGetTotalScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventGetTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "GetTotalScore", nullptr, nullptr, sizeof(BaseGameMode_eventGetTotalScore_Parms), Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_GetTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_GetTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "LevelComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_LevelComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_LevelComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "ProgressNextChapter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics
	{
		struct BaseGameMode_eventSetDifficulty_Parms
		{
			int32 NewDifficulty;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::NewProp_NewDifficulty = { "NewDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGameMode_eventSetDifficulty_Parms, NewDifficulty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::NewProp_NewDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGameMode, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(BaseGameMode_eventSetDifficulty_Parms), Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGameMode_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseGameMode_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseGameMode_NoRegister()
	{
		return ABaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSignalObjective_MetaData[];
#endif
		static void NewProp_bSignalObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSignalObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_The_Elementalists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGameMode_ActorDied, "ActorDied" }, // 393052865
		{ &Z_Construct_UFunction_ABaseGameMode_GetChapterName, "GetChapterName" }, // 3860960173
		{ &Z_Construct_UFunction_ABaseGameMode_GetDifficulty, "GetDifficulty" }, // 3301473594
		{ &Z_Construct_UFunction_ABaseGameMode_GetObjectiveMessage, "GetObjectiveMessage" }, // 1833381145
		{ &Z_Construct_UFunction_ABaseGameMode_GetScore, "GetScore" }, // 3161157956
		{ &Z_Construct_UFunction_ABaseGameMode_GetTotalScore, "GetTotalScore" }, // 2241828639
		{ &Z_Construct_UFunction_ABaseGameMode_LevelComplete, "LevelComplete" }, // 2531483530
		{ &Z_Construct_UFunction_ABaseGameMode_ProgressNextChapter, "ProgressNextChapter" }, // 2962940943
		{ &Z_Construct_UFunction_ABaseGameMode_SetDifficulty, "SetDifficulty" }, // 3505769322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BaseGameMode.h" },
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective_MetaData[] = {
		{ "Category", "BaseGameMode" },
		{ "Comment", "// CN To show ! for objective\n" },
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
		{ "ToolTip", "CN To show ! for objective" },
	};
#endif
	void Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective_SetBit(void* Obj)
	{
		((ABaseGameMode*)Obj)->bSignalObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective = { "bSignalObjective", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGameMode), &Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_Statics::NewProp_StartDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseGameMode" },
		{ "Comment", "// CN Start timer\n" },
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
		{ "ToolTip", "CN Start timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGameMode_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGameMode, StartDelay), METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_Statics::NewProp_LevelTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BaseGameMode" },
		{ "Comment", "// CN Level timer\n" },
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
		{ "ToolTip", "CN Level timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGameMode_Statics::NewProp_LevelTime = { "LevelTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGameMode, LevelTime), METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_LevelTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::NewProp_LevelTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGameMode_Statics::NewProp_bSignalObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGameMode_Statics::NewProp_StartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGameMode_Statics::NewProp_LevelTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGameMode_Statics::ClassParams = {
		&ABaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGameMode, 456052428);
	template<> THE_ELEMENTALISTS_API UClass* StaticClass<ABaseGameMode>()
	{
		return ABaseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGameMode(Z_Construct_UClass_ABaseGameMode, &ABaseGameMode::StaticClass, TEXT("/Script/The_Elementalists"), TEXT("ABaseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
