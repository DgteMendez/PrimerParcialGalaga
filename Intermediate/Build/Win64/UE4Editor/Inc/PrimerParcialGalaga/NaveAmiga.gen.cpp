// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/NaveAmiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAmiga() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ANaveAmiga_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ANaveAmiga();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAmiga::StaticRegisterNativesANaveAmiga()
	{
	}
	UClass* Z_Construct_UClass_ANaveAmiga_NoRegister()
	{
		return ANaveAmiga::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAmiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveAmigaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveAmigaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAmiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAmiga_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAmiga.h" },
		{ "ModuleRelativePath", "NaveAmiga.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAmiga_Statics::NewProp_NaveAmigaMesh_MetaData[] = {
		{ "Category", "NaveAmiga" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAmiga.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAmiga_Statics::NewProp_NaveAmigaMesh = { "NaveAmigaMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAmiga, NaveAmigaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAmiga_Statics::NewProp_NaveAmigaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAmiga_Statics::NewProp_NaveAmigaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAmiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAmiga_Statics::NewProp_NaveAmigaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAmiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAmiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAmiga_Statics::ClassParams = {
		&ANaveAmiga::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAmiga_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAmiga_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAmiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAmiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAmiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAmiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAmiga, 1381503809);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<ANaveAmiga>()
	{
		return ANaveAmiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAmiga(Z_Construct_UClass_ANaveAmiga, &ANaveAmiga::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("ANaveAmiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAmiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
