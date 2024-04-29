// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/FortalezaEstelar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortalezaEstelar() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AFortalezaEstelar_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AFortalezaEstelar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void AFortalezaEstelar::StaticRegisterNativesAFortalezaEstelar()
	{
	}
	UClass* Z_Construct_UClass_AFortalezaEstelar_NoRegister()
	{
		return AFortalezaEstelar::StaticClass();
	}
	struct Z_Construct_UClass_AFortalezaEstelar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortalezaEstelar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortalezaEstelar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FortalezaEstelar.h" },
		{ "ModuleRelativePath", "FortalezaEstelar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortalezaEstelar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortalezaEstelar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFortalezaEstelar_Statics::ClassParams = {
		&AFortalezaEstelar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFortalezaEstelar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFortalezaEstelar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFortalezaEstelar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFortalezaEstelar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFortalezaEstelar, 1143730355);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<AFortalezaEstelar>()
	{
		return AFortalezaEstelar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFortalezaEstelar(Z_Construct_UClass_AFortalezaEstelar, &AFortalezaEstelar::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("AFortalezaEstelar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortalezaEstelar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
