// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescrolltest/VerticalMovingPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalMovingPlatform() {}
// Cross Module References
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_AVerticalMovingPlatform_NoRegister();
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_AVerticalMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_sidescrolltest();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVerticalMovingPlatform::StaticRegisterNativesAVerticalMovingPlatform()
	{
	}
	UClass* Z_Construct_UClass_AVerticalMovingPlatform_NoRegister()
	{
		return AVerticalMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AVerticalMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVerticalMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescrolltest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VerticalMovingPlatform.h" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MaxPosition_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MaxPosition = { "MaxPosition", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, MaxPosition), METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MaxPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MaxPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MinPosition_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MinPosition = { "MinPosition", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, MinPosition), METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MinPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MinPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MovementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, Direction), METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "VerticalMovingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, Platform), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Platform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "VerticalMovingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VerticalMovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVerticalMovingPlatform, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVerticalMovingPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MaxPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MinPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVerticalMovingPlatform_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVerticalMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVerticalMovingPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVerticalMovingPlatform_Statics::ClassParams = {
		&AVerticalMovingPlatform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVerticalMovingPlatform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVerticalMovingPlatform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVerticalMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVerticalMovingPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVerticalMovingPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVerticalMovingPlatform, 1882711344);
	template<> SIDESCROLLTEST_API UClass* StaticClass<AVerticalMovingPlatform>()
	{
		return AVerticalMovingPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVerticalMovingPlatform(Z_Construct_UClass_AVerticalMovingPlatform, &AVerticalMovingPlatform::StaticClass, TEXT("/Script/sidescrolltest"), TEXT("AVerticalMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVerticalMovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
