// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/TallerEscudosBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallerEscudosBuilder() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ATallerEscudosBuilder_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ATallerEscudosBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UEstelarBuilder_NoRegister();
// End Cross Module References
	void ATallerEscudosBuilder::StaticRegisterNativesATallerEscudosBuilder()
	{
	}
	UClass* Z_Construct_UClass_ATallerEscudosBuilder_NoRegister()
	{
		return ATallerEscudosBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ATallerEscudosBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATallerEscudosBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATallerEscudosBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TallerEscudosBuilder.h" },
		{ "ModuleRelativePath", "TallerEscudosBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATallerEscudosBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstelarBuilder_NoRegister, (int32)VTABLE_OFFSET(ATallerEscudosBuilder, IEstelarBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATallerEscudosBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATallerEscudosBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATallerEscudosBuilder_Statics::ClassParams = {
		&ATallerEscudosBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATallerEscudosBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATallerEscudosBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATallerEscudosBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATallerEscudosBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATallerEscudosBuilder, 1621637102);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<ATallerEscudosBuilder>()
	{
		return ATallerEscudosBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATallerEscudosBuilder(Z_Construct_UClass_ATallerEscudosBuilder, &ATallerEscudosBuilder::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("ATallerEscudosBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATallerEscudosBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
