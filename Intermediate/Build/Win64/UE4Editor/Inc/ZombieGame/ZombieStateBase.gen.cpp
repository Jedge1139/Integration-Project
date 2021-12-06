// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieGame/ZombieStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieStateBase() {}
// Cross Module References
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AZombieStateBase_NoRegister();
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AZombieStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ZombieGame();
// End Cross Module References
	void AZombieStateBase::StaticRegisterNativesAZombieStateBase()
	{
	}
	UClass* Z_Construct_UClass_AZombieStateBase_NoRegister()
	{
		return AZombieStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AZombieStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieStateBase.h" },
		{ "ModuleRelativePath", "ZombieStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieStateBase_Statics::ClassParams = {
		&AZombieStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieStateBase, 1773508640);
	template<> ZOMBIEGAME_API UClass* StaticClass<AZombieStateBase>()
	{
		return AZombieStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieStateBase(Z_Construct_UClass_AZombieStateBase, &AZombieStateBase::StaticClass, TEXT("/Script/ZombieGame"), TEXT("AZombieStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
