// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDESCROLLTEST_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define SIDESCROLLTEST_MyActor_generated_h

#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapStart) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AMyActor, Text); } \
	FORCEINLINE static uint32 __PPO__HitBox() { return STRUCT_OFFSET(AMyActor, HitBox); } \
	FORCEINLINE static uint32 __PPO__TextRoot() { return STRUCT_OFFSET(AMyActor, TextRoot); }


#define sidescrolltest_Source_sidescrolltest_MyActor_h_11_PROLOG
#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_RPC_WRAPPERS \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_INCLASS \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescrolltest_Source_sidescrolltest_MyActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_INCLASS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_MyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLTEST_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescrolltest_Source_sidescrolltest_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
