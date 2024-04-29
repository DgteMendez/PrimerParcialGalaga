// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/EstelarBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstelarBuilder() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UEstelarBuilder_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UEstelarBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void UEstelarBuilder::StaticRegisterNativesUEstelarBuilder()
	{
	}
	UClass* Z_Construct_UClass_UEstelarBuilder_NoRegister()
	{
		return UEstelarBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEstelarBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstelarBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstelarBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstelarBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstelarBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstelarBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstelarBuilder_Statics::ClassParams = {
		&UEstelarBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstelarBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstelarBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstelarBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstelarBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstelarBuilder, 184453743);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<UEstelarBuilder>()
	{
		return UEstelarBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstelarBuilder(Z_Construct_UClass_UEstelarBuilder, &UEstelarBuilder::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("UEstelarBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstelarBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
