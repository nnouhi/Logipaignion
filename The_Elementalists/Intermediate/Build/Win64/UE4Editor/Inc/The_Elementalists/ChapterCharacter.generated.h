// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_ELEMENTALISTS_ChapterCharacter_generated_h
#error "ChapterCharacter.generated.h already included, missing '#pragma once' in ChapterCharacter.h"
#endif
#define THE_ELEMENTALISTS_ChapterCharacter_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execIsDead);


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execIsDead);


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChapterCharacter(); \
	friend struct Z_Construct_UClass_AChapterCharacter_Statics; \
public: \
	DECLARE_CLASS(AChapterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AChapterCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAChapterCharacter(); \
	friend struct Z_Construct_UClass_AChapterCharacter_Statics; \
public: \
	DECLARE_CLASS(AChapterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AChapterCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChapterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChapterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChapterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChapterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChapterCharacter(AChapterCharacter&&); \
	NO_API AChapterCharacter(const AChapterCharacter&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChapterCharacter(AChapterCharacter&&); \
	NO_API AChapterCharacter(const AChapterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChapterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChapterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChapterCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(AChapterCharacter, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AChapterCharacter, ProjectileClass); }


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AChapterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_ChapterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
