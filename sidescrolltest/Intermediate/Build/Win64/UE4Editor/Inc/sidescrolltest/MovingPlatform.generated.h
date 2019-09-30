// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLTEST_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define SIDESCROLLTEST_MovingPlatform_generated_h

#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_RPC_WRAPPERS
#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlatformMesh() { return STRUCT_OFFSET(AMovingPlatform, PlatformMesh); } \
	FORCEINLINE static uint32 __PPO__PlatformRoot() { return STRUCT_OFFSET(AMovingPlatform, PlatformRoot); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(AMovingPlatform, Direction); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AMovingPlatform, MovementSpeed); }


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_10_PROLOG
#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_RPC_WRAPPERS \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_INCLASS \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLTEST_API UClass* StaticClass<class AMovingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescrolltest_Source_sidescrolltest_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
