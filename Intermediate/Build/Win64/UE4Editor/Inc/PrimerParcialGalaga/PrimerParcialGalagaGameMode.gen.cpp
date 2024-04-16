// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/PrimerParcialGalagaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimerParcialGalagaGameMode() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_APrimerParcialGalagaGameMode_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_APrimerParcialGalagaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void APrimerParcialGalagaGameMode::StaticRegisterNativesAPrimerParcialGalagaGameMode()
	{
	}
	UClass* Z_Construct_UClass_APrimerParcialGalagaGameMode_NoRegister()
	{
		return APrimerParcialGalagaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PrimerParcialGalagaGameMode.h" },
		{ "ModuleRelativePath", "PrimerParcialGalagaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimerParcialGalagaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::ClassParams = {
		&APrimerParcialGalagaGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimerParcialGalagaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrimerParcialGalagaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrimerParcialGalagaGameMode, 2465963987);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<APrimerParcialGalagaGameMode>()
	{
		return APrimerParcialGalagaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimerParcialGalagaGameMode(Z_Construct_UClass_APrimerParcialGalagaGameMode, &APrimerParcialGalagaGameMode::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("APrimerParcialGalagaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimerParcialGalagaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
