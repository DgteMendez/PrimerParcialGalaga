// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVelocidad.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/CollisionProfile.h"

ACapsulaVelocidad::ACapsulaVelocidad()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaVelocidad(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshCapsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapsulaVelocidad"));
	MeshCapsula->SetStaticMesh(CapsulaVelocidad.Object);
	RootComponent = MeshCapsula;

	if (CapsulaVelocidad.Object != nullptr) 
	{
		GetStaticMeshComponent()->SetStaticMesh(CapsulaVelocidad.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void ACapsulaVelocidad::Levantar()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ACapsulaVelocidad::Soltar(FTransform NuevaUbicacion)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(NuevaUbicacion.GetLocation());
}
