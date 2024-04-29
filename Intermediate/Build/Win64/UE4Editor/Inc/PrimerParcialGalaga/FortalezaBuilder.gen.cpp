// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/FortalezaBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortalezaBuilder() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AFortalezaBuilder_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AFortalezaBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void AFortalezaBuilder::StaticRegisterNativesAFortalezaBuilder()
	{
	}
	UClass* Z_Construct_UClass_AFortalezaBuilder_NoRegister()
	{
		return AFortalezaBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AFortalezaBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortalezaBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortalezaBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FortalezaBuilder.h" },
		{ "ModuleRelativePath", "FortalezaBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortalezaBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortalezaBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFortalezaBuilder_Statics::ClassParams = {
		&AFortalezaBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFortalezaBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFortalezaBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFortalezaBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFortalezaBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFortalezaBuilder, 3665856905);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<AFortalezaBuilder>()
	{
		return AFortalezaBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFortalezaBuilder(Z_Construct_UClass_AFortalezaBuilder, &AFortalezaBuilder::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("AFortalezaBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortalezaBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
