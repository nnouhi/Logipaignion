// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THE_ELEMENTALISTS_Flashback_PlayerController_generated_h
#error "Flashback_PlayerController.generated.h already included, missing '#pragma once' in Flashback_PlayerController.h"
#endif
#define THE_ELEMENTALISTS_Flashback_PlayerController_generated_h

#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_SPARSE_DATA
#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResume);


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResume);


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlashback_PlayerController(); \
	friend struct Z_Construct_UClass_AFlashback_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AFlashback_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashback_PlayerController)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFlashback_PlayerController(); \
	friend struct Z_Construct_UClass_AFlashback_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AFlashback_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The_Elementalists"), NO_API) \
	DECLARE_SERIALIZER(AFlashback_PlayerController)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlashback_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlashback_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashback_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashback_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashback_PlayerController(AFlashback_PlayerController&&); \
	NO_API AFlashback_PlayerController(const AFlashback_PlayerController&); \
public:


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlashback_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashback_PlayerController(AFlashback_PlayerController&&); \
	NO_API AFlashback_PlayerController(const AFlashback_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashback_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashback_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlashback_PlayerController)


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectiveHUDClass() { return STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveHUDClass); } \
	FORCEINLINE static uint32 __PPO__ObjectiveWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, ObjectiveWidget); } \
	FORCEINLINE static uint32 __PPO__MinimapHUDClass() { return STRUCT_OFFSET(AFlashback_PlayerController, MinimapHUDClass); } \
	FORCEINLINE static uint32 __PPO__MinimapWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, MinimapWidget); } \
	FORCEINLINE static uint32 __PPO__MapHUDClass() { return STRUCT_OFFSET(AFlashback_PlayerController, MapHUDClass); } \
	FORCEINLINE static uint32 __PPO__MapWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, MapWidget); } \
	FORCEINLINE static uint32 __PPO__HealthbarClass() { return STRUCT_OFFSET(AFlashback_PlayerController, HealthbarClass); } \
	FORCEINLINE static uint32 __PPO__HealthbarWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, HealthbarWidget); } \
	FORCEINLINE static uint32 __PPO__GameOverClass() { return STRUCT_OFFSET(AFlashback_PlayerController, GameOverClass); } \
	FORCEINLINE static uint32 __PPO__GameOverWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, GameOverWidget); } \
	FORCEINLINE static uint32 __PPO__StartTimerClass() { return STRUCT_OFFSET(AFlashback_PlayerController, StartTimerClass); } \
	FORCEINLINE static uint32 __PPO__StartTimerWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, StartTimerWidget); } \
	FORCEINLINE static uint32 __PPO__LevelClearClass() { return STRUCT_OFFSET(AFlashback_PlayerController, LevelClearClass); } \
	FORCEINLINE static uint32 __PPO__LevelClearWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, LevelClearWidget); } \
	FORCEINLINE static uint32 __PPO__InfoHUDClass() { return STRUCT_OFFSET(AFlashback_PlayerController, InfoHUDClass); } \
	FORCEINLINE static uint32 __PPO__InfoWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, InfoWidget); } \
	FORCEINLINE static uint32 __PPO__GasMaskClass() { return STRUCT_OFFSET(AFlashback_PlayerController, GasMaskClass); } \
	FORCEINLINE static uint32 __PPO__GasMaskWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, GasMaskWidget); } \
	FORCEINLINE static uint32 __PPO__BlurClass() { return STRUCT_OFFSET(AFlashback_PlayerController, BlurClass); } \
	FORCEINLINE static uint32 __PPO__BlurWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, BlurWidget); } \
	FORCEINLINE static uint32 __PPO__PauseClass() { return STRUCT_OFFSET(AFlashback_PlayerController, PauseClass); } \
	FORCEINLINE static uint32 __PPO__PauseWidget() { return STRUCT_OFFSET(AFlashback_PlayerController, PauseWidget); }


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_12_PROLOG
#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_RPC_WRAPPERS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_INCLASS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_SPARSE_DATA \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE_ELEMENTALISTS_API UClass* StaticClass<class AFlashback_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID The_Elementalists_Source_The_Elementalists_Public_Flashback_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
