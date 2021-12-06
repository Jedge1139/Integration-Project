// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBIEGAME_ZombieGameCharacter_generated_h
#error "ZombieGameCharacter.generated.h already included, missing '#pragma once' in ZombieGameCharacter.h"
#endif
#define ZOMBIEGAME_ZombieGameCharacter_generated_h

#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_SPARSE_DATA
#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_RPC_WRAPPERS
#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieGameCharacter(); \
	friend struct Z_Construct_UClass_AZombieGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombieGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(AZombieGameCharacter)


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombieGameCharacter(); \
	friend struct Z_Construct_UClass_AZombieGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombieGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(AZombieGameCharacter)


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGameCharacter(AZombieGameCharacter&&); \
	NO_API AZombieGameCharacter(const AZombieGameCharacter&); \
public:


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGameCharacter(AZombieGameCharacter&&); \
	NO_API AZombieGameCharacter(const AZombieGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieGameCharacter)


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AZombieGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AZombieGameCharacter, FollowCamera); }


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_9_PROLOG
#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_INCLASS \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_ZombieGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class AZombieGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_ZombieGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
