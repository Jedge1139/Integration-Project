// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef ZOMBIEGAME_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define ZOMBIEGAME_Bullet_generated_h

#define ZombieGame_Source_ZombieGame_Bullet_h_13_SPARSE_DATA
#define ZombieGame_Source_ZombieGame_Bullet_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBulletHit);


#define ZombieGame_Source_ZombieGame_Bullet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBulletHit);


#define ZombieGame_Source_ZombieGame_Bullet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define ZombieGame_Source_ZombieGame_Bullet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZombieGame"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define ZombieGame_Source_ZombieGame_Bullet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define ZombieGame_Source_ZombieGame_Bullet_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define ZombieGame_Source_ZombieGame_Bullet_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletMesh() { return STRUCT_OFFSET(ABullet, BulletMesh); } \
	FORCEINLINE static uint32 __PPO__BulletMovement() { return STRUCT_OFFSET(ABullet, BulletMovement); }


#define ZombieGame_Source_ZombieGame_Bullet_h_10_PROLOG
#define ZombieGame_Source_ZombieGame_Bullet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_Bullet_h_13_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_Bullet_h_13_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_Bullet_h_13_RPC_WRAPPERS \
	ZombieGame_Source_ZombieGame_Bullet_h_13_INCLASS \
	ZombieGame_Source_ZombieGame_Bullet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZombieGame_Source_ZombieGame_Bullet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZombieGame_Source_ZombieGame_Bullet_h_13_PRIVATE_PROPERTY_OFFSET \
	ZombieGame_Source_ZombieGame_Bullet_h_13_SPARSE_DATA \
	ZombieGame_Source_ZombieGame_Bullet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_Bullet_h_13_INCLASS_NO_PURE_DECLS \
	ZombieGame_Source_ZombieGame_Bullet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBIEGAME_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZombieGame_Source_ZombieGame_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
