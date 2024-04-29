// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/TallerMejorasEnergiaBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallerMejorasEnergiaBuilder() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ATallerMejorasEnergiaBuilder_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ATallerMejorasEnergiaBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UEstelarBuilder_NoRegister();
// End Cross Module References
	void ATallerMejorasEnergiaBuilder::StaticRegisterNativesATallerMejorasEnergiaBuilder()
	{
	}
	UClass* Z_Construct_UClass_ATallerMejorasEnergiaBuilder_NoRegister()
	{
		return ATallerMejorasEnergiaBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TallerMejorasEnergiaBuilder.h" },
		{ "ModuleRelativePath", "TallerMejorasEnergiaBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstelarBuilder_NoRegister, (int32)VTABLE_OFFSET(ATallerMejorasEnergiaBuilder, IEstelarBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATallerMejorasEnergiaBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::ClassParams = {
		&ATallerMejorasEnergiaBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATallerMejorasEnergiaBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATallerMejorasEnergiaBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATallerMejorasEnergiaBuilder, 271523246);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<ATallerMejorasEnergiaBuilder>()
	{
		return ATallerMejorasEnergiaBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATallerMejorasEnergiaBuilder(Z_Construct_UClass_ATallerMejorasEnergiaBuilder, &ATallerMejorasEnergiaBuilder::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("ATallerMejorasEnergiaBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATallerMejorasEnergiaBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
