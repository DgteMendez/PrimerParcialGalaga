// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/Estancia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstancia() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AEstancia_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_AEstancia();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UCentroEstelar_NoRegister();
// End Cross Module References
	void AEstancia::StaticRegisterNativesAEstancia()
	{
	}
	UClass* Z_Construct_UClass_AEstancia_NoRegister()
	{
		return AEstancia::StaticClass();
	}
	struct Z_Construct_UClass_AEstancia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Taller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Taller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cuarto_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cuarto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEdificio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEdificio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstancia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstancia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Estancia.h" },
		{ "ModuleRelativePath", "Estancia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstancia_Statics::NewProp_Taller_MetaData[] = {
		{ "Category", "Estancia" },
		{ "ModuleRelativePath", "Estancia.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEstancia_Statics::NewProp_Taller = { "Taller", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstancia, Taller), METADATA_PARAMS(Z_Construct_UClass_AEstancia_Statics::NewProp_Taller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstancia_Statics::NewProp_Taller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstancia_Statics::NewProp_Cuarto_MetaData[] = {
		{ "Category", "Estancia" },
		{ "ModuleRelativePath", "Estancia.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEstancia_Statics::NewProp_Cuarto = { "Cuarto", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstancia, Cuarto), METADATA_PARAMS(Z_Construct_UClass_AEstancia_Statics::NewProp_Cuarto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstancia_Statics::NewProp_Cuarto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstancia_Statics::NewProp_MeshEdificio_MetaData[] = {
		{ "Category", "Estancia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Estancia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstancia_Statics::NewProp_MeshEdificio = { "MeshEdificio", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstancia, MeshEdificio), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstancia_Statics::NewProp_MeshEdificio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstancia_Statics::NewProp_MeshEdificio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstancia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstancia_Statics::NewProp_Taller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstancia_Statics::NewProp_Cuarto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstancia_Statics::NewProp_MeshEdificio,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstancia_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCentroEstelar_NoRegister, (int32)VTABLE_OFFSET(AEstancia, ICentroEstelar), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstancia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstancia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstancia_Statics::ClassParams = {
		&AEstancia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstancia_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstancia_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstancia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstancia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstancia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstancia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstancia, 1307480102);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<AEstancia>()
	{
		return AEstancia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstancia(Z_Construct_UClass_AEstancia, &AEstancia::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("AEstancia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstancia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
