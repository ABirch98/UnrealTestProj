// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLTEST_DeathFloor_generated_h
#error "DeathFloor.generated.h already included, missing '#pragma once' in DeathFloor.h"
#endif
#define SIDESCROLLTEST_DeathFloor_generated_h

#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_RPC_WRAPPERS
#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathFloor(); \
	friend struct Z_Construct_UClass_ADeathFloor_Statics; \
public: \
	DECLARE_CLASS(ADeathFloor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ADeathFloor)


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADeathFloor(); \
	friend struct Z_Construct_UClass_ADeathFloor_Statics; \
public: \
	DECLARE_CLASS(ADeathFloor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ADeathFloor)


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathFloor(ADeathFloor&&); \
	NO_API ADeathFloor(const ADeathFloor&); \
public:


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathFloor(ADeathFloor&&); \
	NO_API ADeathFloor(const ADeathFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathFloor)


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitBox() { return STRUCT_OFFSET(ADeathFloor, HitBox); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ADeathFloor, Root); }


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_10_PROLOG
#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_RPC_WRAPPERS \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_INCLASS \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_INCLASS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_DeathFloor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLTEST_API UClass* StaticClass<class ADeathFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescrolltest_Source_sidescrolltest_DeathFloor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
