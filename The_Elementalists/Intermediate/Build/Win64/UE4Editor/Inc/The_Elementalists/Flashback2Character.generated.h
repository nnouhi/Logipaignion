// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_ELEMENTALISTS_Flashback2Character_generated_h
#error "Flashback2Character.generated.h already included, missing '#pragma once' in Flashback2Character.h"
#endif
#define THE_ELEMENTALISTS_Flashback2Character_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeSensitivity); \
	DECLARE_FUNCTION(execGetHealthPercentage);


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeSensitivity); \
	DECLARE_FUNCTION(execGetHealthPercentage);


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlashback2Character(); \
	friend struct Z_Construct_UClass_AFlashback2Character_Statics; \
public: \
	DECLARE_CLASS(AFlashback2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashback2Character)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFlashback2Character(); \
	friend struct Z_Construct_UClass_AFlashback2Character_Statics; \
public: \
	DECLARE_CLASS(AFlashback2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashback2Character)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlashback2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlashback2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashback2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashback2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashback2Character(AFlashback2Character&&); \
	NO_API AFlashback2Character(const AFlashback2Character&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashback2Character(AFlashback2Character&&); \
	NO_API AFlashback2Character(const AFlashback2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashback2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashback2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlashback2Character)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(AFlashback2Character, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AFlashback2Character, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__LineTraceDistance() { return STRUCT_OFFSET(AFlashback2Character, LineTraceDistance); } \
	FORCEINLINE static uint32 __PPO__CoughSound() { return STRUCT_OFFSET(AFlashback2Character, CoughSound); } \
	FORCEINLINE static uint32 __PPO__CoughingTime() { return STRUCT_OFFSET(AFlashback2Character, CoughingTime); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFlashback2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__LookUpSensitivity() { return STRUCT_OFFSET(AFlashback2Character, LookUpSensitivity); } \
	FORCEINLINE static uint32 __PPO__TurnSensitivity() { return STRUCT_OFFSET(AFlashback2Character, TurnSensitivity); }


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AFlashback2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_Flashback2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
