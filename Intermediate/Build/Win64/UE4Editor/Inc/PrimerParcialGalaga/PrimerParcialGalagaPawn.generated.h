// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
class ACapsulaVelocidad;
#ifdef PRIMERPARCIALGALAGA_PrimerParcialGalagaPawn_generated_h
#error "PrimerParcialGalagaPawn.generated.h already included, missing '#pragma once' in PrimerParcialGalagaPawn.h"
#endif
#define PRIMERPARCIALGALAGA_PrimerParcialGalagaPawn_generated_h

#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_SPARSE_DATA
#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTomarCapsula); \
	DECLARE_FUNCTION(execDropCapsula);


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTomarCapsula); \
	DECLARE_FUNCTION(execDropCapsula);


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimerParcialGalagaPawn(); \
	friend struct Z_Construct_UClass_APrimerParcialGalagaPawn_Statics; \
public: \
	DECLARE_CLASS(APrimerParcialGalagaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerParcialGalaga"), NO_API) \
	DECLARE_SERIALIZER(APrimerParcialGalagaPawn)


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPrimerParcialGalagaPawn(); \
	friend struct Z_Construct_UClass_APrimerParcialGalagaPawn_Statics; \
public: \
	DECLARE_CLASS(APrimerParcialGalagaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimerParcialGalaga"), NO_API) \
	DECLARE_SERIALIZER(APrimerParcialGalagaPawn)


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrimerParcialGalagaPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrimerParcialGalagaPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerParcialGalagaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerParcialGalagaPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerParcialGalagaPawn(APrimerParcialGalagaPawn&&); \
	NO_API APrimerParcialGalagaPawn(const APrimerParcialGalagaPawn&); \
public:


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimerParcialGalagaPawn(APrimerParcialGalagaPawn&&); \
	NO_API APrimerParcialGalagaPawn(const APrimerParcialGalagaPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimerParcialGalagaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimerParcialGalagaPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimerParcialGalagaPawn)


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(APrimerParcialGalagaPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(APrimerParcialGalagaPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APrimerParcialGalagaPawn, CameraBoom); }


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_11_PROLOG
#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_SPARSE_DATA \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_RPC_WRAPPERS \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_INCLASS \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_SPARSE_DATA \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_INCLASS_NO_PURE_DECLS \
	PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRIMERPARCIALGALAGA_API UClass* StaticClass<class APrimerParcialGalagaPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrimerParcialGalaga_Source_PrimerParcialGalaga_PrimerParcialGalagaPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
