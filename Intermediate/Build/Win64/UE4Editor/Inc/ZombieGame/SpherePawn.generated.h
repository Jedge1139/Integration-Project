// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBIEGAME_SpherePawn_generated_h
#error "SpherePawn.generated.h already included, missing '#pragma once' in SpherePawn.h"
#endif
#define ZOMBIEGAME_SpherePawn_generated_h

#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_SPARSE_DATA
#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_RPC_WRAPPERS
#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpherePawn(); \
	friend struct Z_Construct_UClass_ASpherePawn_Statics; \
public: \
	DECLARE_CLASS(ASpherePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ASpherePawn)


#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpherePawn(); \
	friend struct Z_Construct_UClass_ASpherePawn_Statics; \
public: \
	DECLARE_CLASS(ASpherePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ASpherePawn)


#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpherePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpherePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePawn(ASpherePawn&&); \
	NO_API ASpherePawn(const ASpherePawn&); \
public:


#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePawn(ASpherePawn&&); \
	NO_API ASpherePawn(const ASpherePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpherePawn)


#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletClass() { return STRUCT_OFFSET(ASpherePawn, BulletClass); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASpherePawn, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ASpherePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(ASpherePawn, CameraArm); }


#define ZombieGame_Source_ZombieGame_SpherePawn_h_9_PROLOG
#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_INCLASS \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_SpherePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_SpherePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class ASpherePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_SpherePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
