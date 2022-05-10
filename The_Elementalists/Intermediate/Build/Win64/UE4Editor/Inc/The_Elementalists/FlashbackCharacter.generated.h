// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_ELEMENTALISTS_FlashbackCharacter_generated_h
#error "FlashbackCharacter.generated.h already included, missing '#pragma once' in FlashbackCharacter.h"
#endif
#define THE_ELEMENTALISTS_FlashbackCharacter_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeSensitivity); \
	DECLARE_FUNCTION(execGetHealthPercentage);


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeSensitivity); \
	DECLARE_FUNCTION(execGetHealthPercentage);


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlashbackCharacter(); \
	friend struct Z_Construct_UClass_AFlashbackCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlashbackCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashbackCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFlashbackCharacter(); \
	friend struct Z_Construct_UClass_AFlashbackCharacter_Statics; \
public: \
	DECLARE_CLASS(AFlashbackCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashbackCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlashbackCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlashbackCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashbackCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashbackCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashbackCharacter(AFlashbackCharacter&&); \
	NO_API AFlashbackCharacter(const AFlashbackCharacter&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashbackCharacter(AFlashbackCharacter&&); \
	NO_API AFlashbackCharacter(const AFlashbackCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashbackCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashbackCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlashbackCharacter)


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(AFlashbackCharacter, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AFlashbackCharacter, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFlashbackCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__LookUpSensitivity() { return STRUCT_OFFSET(AFlashbackCharacter, LookUpSensitivity); } \
	FORCEINLINE static uint32 __PPO__TurnSensitivity() { return STRUCT_OFFSET(AFlashbackCharacter, TurnSensitivity); }


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_9_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AFlashbackCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_FlashbackCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
