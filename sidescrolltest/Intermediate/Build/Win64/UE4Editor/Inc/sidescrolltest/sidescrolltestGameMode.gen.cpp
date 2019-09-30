// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescrolltest/sidescrolltestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesidescrolltestGameMode() {}
// Cross Module References
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_AsidescrolltestGameMode_NoRegister();
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_AsidescrolltestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_sidescrolltest();
// End Cross Module References
	void AsidescrolltestGameMode::StaticRegisterNativesAsidescrolltestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AsidescrolltestGameMode_NoRegister()
	{
		return AsidescrolltestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AsidescrolltestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsidescrolltestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescrolltest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsidescrolltestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "sidescrolltestGameMode.h" },
		{ "ModuleRelativePath", "sidescrolltestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsidescrolltestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsidescrolltestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsidescrolltestGameMode_Statics::ClassParams = {
		&AsidescrolltestGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AsidescrolltestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AsidescrolltestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsidescrolltestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsidescrolltestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsidescrolltestGameMode, 3834885585);
	template<> SIDESCROLLTEST_API UClass* StaticClass<AsidescrolltestGameMode>()
	{
		return AsidescrolltestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsidescrolltestGameMode(Z_Construct_UClass_AsidescrolltestGameMode, &AsidescrolltestGameMode::StaticClass, TEXT("/Script/sidescrolltest"), TEXT("AsidescrolltestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsidescrolltestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
