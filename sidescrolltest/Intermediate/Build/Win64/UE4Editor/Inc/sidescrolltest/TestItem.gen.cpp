// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescrolltest/TestItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestItem() {}
// Cross Module References
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ATestItem_NoRegister();
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ATestItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_sidescrolltest();
// End Cross Module References
	void ATestItem::StaticRegisterNativesATestItem()
	{
	}
	UClass* Z_Construct_UClass_ATestItem_NoRegister()
	{
		return ATestItem::StaticClass();
	}
	struct Z_Construct_UClass_ATestItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescrolltest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestItem.h" },
		{ "ModuleRelativePath", "TestItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestItem_Statics::ClassParams = {
		&ATestItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATestItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestItem, 986275493);
	template<> SIDESCROLLTEST_API UClass* StaticClass<ATestItem>()
	{
		return ATestItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestItem(Z_Construct_UClass_ATestItem, &ATestItem::StaticClass, TEXT("/Script/sidescrolltest"), TEXT("ATestItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
