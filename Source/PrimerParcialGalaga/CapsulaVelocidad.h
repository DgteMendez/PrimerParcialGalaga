// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "CapsulaVelocidad.generated.h"

/**
 * 
 */
UCLASS()
class PRIMERPARCIALGALAGA_API ACapsulaVelocidad : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	//UPROPERTY(EdithAnywhere)
	UStaticMeshComponent* MeshCapsula;
	ACapsulaVelocidad();
	virtual void Levantar();
	virtual void Soltar(FTransform NuevaUbicacion);
};
