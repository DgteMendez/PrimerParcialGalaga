// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/ComponenteMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMovimiento() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UComponenteMovimiento_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UComponenteMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
// End Cross Module References
	void UComponenteMovimiento::StaticRegisterNativesUComponenteMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UComponenteMovimiento_NoRegister()
	{
		return UComponenteMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteIzquierda_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteIzquierda;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteDerecha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteDerecha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verificacion_MetaData[];
#endif
		static void NewProp_Verificacion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Verificacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMovimiento.h" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, Velocidad), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteIzquierda_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteIzquierda = { "LimiteIzquierda", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, LimiteIzquierda), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteIzquierda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteIzquierda_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteDerecha_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteDerecha = { "LimiteDerecha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, LimiteDerecha), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteDerecha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteDerecha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	void Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion_SetBit(void* Obj)
	{
		((UComponenteMovimiento*)Obj)->Verificacion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion = { "Verificacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UComponenteMovimiento), &Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteIzquierda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_LimiteDerecha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_Verificacion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMovimiento_Statics::ClassParams = {
		&UComponenteMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMovimiento, 804769540);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<UComponenteMovimiento>()
	{
		return UComponenteMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMovimiento(Z_Construct_UClass_UComponenteMovimiento, &UComponenteMovimiento::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("UComponenteMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
