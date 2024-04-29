// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstelarBuilder.h"
#include "FortalezaBuilder.generated.h"

UCLASS()
class PRIMERPARCIALGALAGA_API AFortalezaBuilder : public AActor /*public IEstelarBuilder*/
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFortalezaBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*virtual void BuildCuartoCapsulas() override;
	virtual void BuildTallerReparaciones() override;
	virtual void BuildTallerEscudos() override;
	virtual void BuildTallerArmas() override;
	virtual void BuildTallerSalud() override;
	virtual void BuildTallerEnergia() override;
	virtual void BuildCuartoNaves() override;
	virtual void BuildAlmacenRecursos() override;
	virtual void BuildCentroEstadisticas() override;
	virtual class AFortalezaEstelar* GetForatlezaEstelar() override;*/

};
