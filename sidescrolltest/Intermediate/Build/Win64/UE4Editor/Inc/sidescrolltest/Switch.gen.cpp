// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescrolltest/Switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitch() {}
// Cross Module References
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ASwitch_NoRegister();
	SIDESCROLLTEST_API UClass* Z_Construct_UClass_ASwitch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_sidescrolltest();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASwitch::StaticRegisterNativesASwitch()
	{
	}
	UClass* Z_Construct_UClass_ASwitch_NoRegister()
	{
		return ASwitch::StaticClass();
	}
	struct Z_Construct_UClass_ASwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isActive_MetaData[];
#endif
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescrolltest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Switch.h" },
		{ "ModuleRelativePath", "Switch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::NewProp_isActive_MetaData[] = {
		{ "Category", "Active" },
		{ "ModuleRelativePath", "Switch.h" },
	};
#endif
	void Z_Construct_UClass_ASwitch_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((ASwitch*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASwitch_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASwitch), &Z_Construct_UClass_ASwitch_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::NewProp_isActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::NewProp_isActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchBox_MetaData[] = {
		{ "Category", "Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchBox = { "SwitchBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitch, SwitchBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchRoot_MetaData[] = {
		{ "Category", "Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchRoot = { "SwitchRoot", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitch, SwitchRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::NewProp_MeshBody_MetaData[] = {
		{ "Category", "Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Switch.h" },
		{ "ToolTip", "the static mesh for the component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitch_Statics::NewProp_MeshBody = { "MeshBody", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitch, MeshBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::NewProp_MeshBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::NewProp_MeshBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitch_Statics::NewProp_MovementAmount_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwitch_Statics::NewProp_MovementAmount = { "MovementAmount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitch, MovementAmount), METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::NewProp_MovementAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::NewProp_MovementAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitch_Statics::NewProp_isActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitch_Statics::NewProp_SwitchRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitch_Statics::NewProp_MeshBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitch_Statics::NewProp_MovementAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitch_Statics::ClassParams = {
		&ASwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASwitch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASwitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitch, 3419897585);
	template<> SIDESCROLLTEST_API UClass* StaticClass<ASwitch>()
	{
		return ASwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitch(Z_Construct_UClass_ASwitch, &ASwitch::StaticClass, TEXT("/Script/sidescrolltest"), TEXT("ASwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
