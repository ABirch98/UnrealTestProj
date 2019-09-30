// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLTEST_TestItem_generated_h
#error "TestItem.generated.h already included, missing '#pragma once' in TestItem.h"
#endif
#define SIDESCROLLTEST_TestItem_generated_h

#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_RPC_WRAPPERS
#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestItem(); \
	friend struct Z_Construct_UClass_ATestItem_Statics; \
public: \
	DECLARE_CLASS(ATestItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ATestItem)


#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestItem(); \
	friend struct Z_Construct_UClass_ATestItem_Statics; \
public: \
	DECLARE_CLASS(ATestItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/sidescrolltest"), NO_API) \
	DECLARE_SERIALIZER(ATestItem)


#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestItem(ATestItem&&); \
	NO_API ATestItem(const ATestItem&); \
public:


#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestItem(ATestItem&&); \
	NO_API ATestItem(const ATestItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestItem)


#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_PRIVATE_PROPERTY_OFFSET
#define sidescrolltest_Source_sidescrolltest_TestItem_h_9_PROLOG
#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_RPC_WRAPPERS \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_INCLASS \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescrolltest_Source_sidescrolltest_TestItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_PRIVATE_PROPERTY_OFFSET \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_INCLASS_NO_PURE_DECLS \
	sidescrolltest_Source_sidescrolltest_TestItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLTEST_API UClass* StaticClass<class ATestItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescrolltest_Source_sidescrolltest_TestItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
