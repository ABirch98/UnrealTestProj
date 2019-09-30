// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLTEST_Switch_generated_h
#error "Switch.generated.h already included, missing '#pragma once' in Switch.h"
#endif
#define SIDESCROLLTEST_Switch_generated_h

#define sidescrolltest_Source_sidescrolltest_Switch_h_16_RPC_WRAPPERS
#define sidescrolltest_Source_sidescrolltest_Switch_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define sidescrolltest_Source_sidescrolltest_Switch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwitch(); \
	friend struct Z_Construct_UClass_ASwitch_Statics; \
public: \
	DECLARE_CLASS(ASwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ASwitch)


#define sidescrolltest_Source_sidescrolltest_Switch_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASwitch(); \
	friend struct Z_Construct_UClass_ASwitch_Statics; \
public: \
	DECLARE_CLASS(ASwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ASwitch)


#define sidescrolltest_Source_sidescrolltest_Switch_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitch(ASwitch&&); \
	NO_API ASwitch(const ASwitch&); \
public:


#define sidescrolltest_Source_sidescrolltest_Switch_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitch(ASwitch&&); \
	NO_API ASwitch(const ASwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwitch)


#define sidescrolltest_Source_sidescrolltest_Switch_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementAmount() { return STRUCT_OFFSET(ASwitch, MovementAmount); } \
	FORCEINLINE static uint32 __PPO__MeshBody() { return STRUCT_OFFSET(ASwitch, MeshBody); } \
	FORCEINLINE static uint32 __PPO__SwitchRoot() { return STRUCT_OFFSET(ASwitch, SwitchRoot); } \
	FORCEINLINE static uint32 __PPO__SwitchBox() { return STRUCT_OFFSET(ASwitch, SwitchBox); } \
	FORCEINLINE static uint32 __PPO__isActive() { return STRUCT_OFFSET(ASwitch, isActive); }


#define sidescrolltest_Source_sidescrolltest_Switch_h_13_PROLOG
#define sidescrolltest_Source_sidescrolltest_Switch_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_RPC_WRAPPERS \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_INCLASS \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescrolltest_Source_sidescrolltest_Switch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_INCLASS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_Switch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLTEST_API UClass* StaticClass<class ASwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescrolltest_Source_sidescrolltest_Switch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
