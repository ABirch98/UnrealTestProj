// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescrolltest/DeathFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathFloor() {}
// Cross Module References
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ADeathFloor_NoRegister();
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ADeathFloor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_sidescrolltest();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADeathFloor::StaticRegisterNativesADeathFloor()
	{
	}
	UClass* Z_Construct_UClass_ADeathFloor_NoRegister()
	{
		return ADeathFloor::StaticClass();
	}
	struct Z_Construct_UClass_ADeathFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescrolltest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeathFloor.h" },
		{ "ModuleRelativePath", "DeathFloor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathFloor_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "DeathFloor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeathFloor.h" },
		{ "ToolTip", "To be used as a root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathFloor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathFloor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathFloor_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADeathFloor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathFloor_Statics::NewProp_HitBox_MetaData[] = {
		{ "Category", "DeathFloor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeathFloor.h" },
		{ "ToolTip", "A Box component used to detect when overlap events occur" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathFloor_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathFloor, HitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeathFloor_Statics::NewProp_HitBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADeathFloor_Statics::NewProp_HitBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeathFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathFloor_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathFloor_Statics::NewProp_HitBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathFloor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathFloor_Statics::ClassParams = {
		&ADeathFloor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADeathFloor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADeathFloor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADeathFloor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADeathFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathFloor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathFloor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathFloor, 3032660014);
	template<> SIDESCROLLTEST_API UClass* StaticClass<ADeathFloor>()
	{
		return ADeathFloor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathFloor(Z_Construct_UClass_ADeathFloor, &ADeathFloor::StaticClass, TEXT("/Script/sidescrolltest"), TEXT("ADeathFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathFloor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
