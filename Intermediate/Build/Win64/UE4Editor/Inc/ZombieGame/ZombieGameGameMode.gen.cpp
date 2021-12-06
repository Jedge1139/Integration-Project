// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZombieGame/ZombieGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieGameGameMode() {}
// Cross Module References
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AZombieGameGameMode_NoRegister();
	ZOMBIEGAME_API UClass* Z_Construct_UClass_AZombieGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ZombieGame();
// End Cross Module References
	void AZombieGameGameMode::StaticRegisterNativesAZombieGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AZombieGameGameMode_NoRegister()
	{
		return AZombieGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AZombieGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointsToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZombieGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieGameGameMode.h" },
		{ "ModuleRelativePath", "ZombieGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieGameGameMode_Statics::NewProp_PointsToWin_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "ZombieGameGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZombieGameGameMode_Statics::NewProp_PointsToWin = { "PointsToWin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieGameGameMode, PointsToWin), METADATA_PARAMS(Z_Construct_UClass_AZombieGameGameMode_Statics::NewProp_PointsToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieGameGameMode_Statics::NewProp_PointsToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieGameGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieGameGameMode_Statics::NewProp_PointsToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieGameGameMode_Statics::ClassParams = {
		&AZombieGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieGameGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieGameGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AZombieGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieGameGameMode, 836866258);
	template<> ZOMBIEGAME_API UClass* StaticClass<AZombieGameGameMode>()
	{
		return AZombieGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieGameGameMode(Z_Construct_UClass_AZombieGameGameMode, &AZombieGameGameMode::StaticClass, TEXT("/Script/ZombieGame"), TEXT("AZombieGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
