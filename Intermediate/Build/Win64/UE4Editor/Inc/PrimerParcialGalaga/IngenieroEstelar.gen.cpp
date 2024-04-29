// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/IngenieroEstelar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIngenieroEstelar() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AIngenieroEstelar_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AIngenieroEstelar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void AIngenieroEstelar::StaticRegisterNativesAIngenieroEstelar()
	{
	}
	UClass* Z_Construct_UClass_AIngenieroEstelar_NoRegister()
	{
		return AIngenieroEstelar::StaticClass();
	}
	struct Z_Construct_UClass_AIngenieroEstelar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngenieroEstelar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngenieroEstelar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IngenieroEstelar.h" },
		{ "ModuleRelativePath", "IngenieroEstelar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngenieroEstelar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngenieroEstelar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIngenieroEstelar_Statics::ClassParams = {
		&AIngenieroEstelar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIngenieroEstelar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIngenieroEstelar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIngenieroEstelar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIngenieroEstelar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIngenieroEstelar, 1286620449);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<AIngenieroEstelar>()
	{
		return AIngenieroEstelar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIngenieroEstelar(Z_Construct_UClass_AIngenieroEstelar, &AIngenieroEstelar::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("AIngenieroEstelar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIngenieroEstelar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
