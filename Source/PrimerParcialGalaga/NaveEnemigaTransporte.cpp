// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveEnemigaTransporteMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigaMesh->SetStaticMesh(NaveEnemigaTransporteMesh.Object);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
}
