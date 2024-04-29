// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimerParcialGalaga/Inventario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventario() {}
// Cross Module References
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UInventario_NoRegister();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_UInventario();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrimerParcialGalaga();
	PRIMERPARCIALGALAGA_API UClass* Z_Construct_UClass_ACapsulaVelocidad_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventario::execRemoveFromInventario)
	{
		P_GET_OBJECT(ACapsulaVelocidad,Z_Param_CapsulaToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventario(Z_Param_CapsulaToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventario::execAddToInventario)
	{
		P_GET_OBJECT(ACapsulaVelocidad,Z_Param_CapsulaToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddToInventario(Z_Param_CapsulaToAdd);
		P_NATIVE_END;
	}
	void UInventario::StaticRegisterNativesUInventario()
	{
		UClass* Class = UInventario::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventario", &UInventario::execAddToInventario },
			{ "RemoveFromInventario", &UInventario::execRemoveFromInventario },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventario_AddToInventario_Statics
	{
		struct Inventario_eventAddToInventario_Parms
		{
			ACapsulaVelocidad* CapsulaToAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsulaToAdd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventario_AddToInventario_Statics::NewProp_CapsulaToAdd = { "CapsulaToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventario_eventAddToInventario_Parms, CapsulaToAdd), Z_Construct_UClass_ACapsulaVelocidad_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventario_AddToInventario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventario_eventAddToInventario_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventario_AddToInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventario_AddToInventario_Statics::NewProp_CapsulaToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventario_AddToInventario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventario_AddToInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventario_AddToInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventario, nullptr, "AddToInventario", nullptr, nullptr, sizeof(Inventario_eventAddToInventario_Parms), Z_Construct_UFunction_UInventario_AddToInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventario_AddToInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventario_AddToInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventario_AddToInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventario_AddToInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventario_AddToInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics
	{
		struct Inventario_eventRemoveFromInventario_Parms
		{
			ACapsulaVelocidad* CapsulaToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsulaToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::NewProp_CapsulaToRemove = { "CapsulaToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventario_eventRemoveFromInventario_Parms, CapsulaToRemove), Z_Construct_UClass_ACapsulaVelocidad_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::NewProp_CapsulaToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventario, nullptr, "RemoveFromInventario", nullptr, nullptr, sizeof(Inventario_eventRemoveFromInventario_Parms), Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventario_RemoveFromInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventario_RemoveFromInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventario_NoRegister()
	{
		return UInventario::StaticClass();
	}
	struct Z_Construct_UClass_UInventario_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsulasVelocidad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsulasVelocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsulasVelocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimerParcialGalaga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventario_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventario_AddToInventario, "AddToInventario" }, // 3880068424
		{ &Z_Construct_UFunction_UInventario_RemoveFromInventario, "RemoveFromInventario" }, // 1335960380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventario.h" },
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad_Inner = { "CapsulasVelocidad", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACapsulaVelocidad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad_MetaData[] = {
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad = { "CapsulasVelocidad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventario, CapsulasVelocidad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventario_Statics::NewProp_CapsulasVelocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventario_Statics::ClassParams = {
		&UInventario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventario_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventario, 3913056964);
	template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<UInventario>()
	{
		return UInventario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventario(Z_Construct_UClass_UInventario, &UInventario::StaticClass, TEXT("/Script/PrimerParcialGalaga"), TEXT("UInventario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
