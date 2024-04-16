// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class PRIMERPARCIALGALAGA_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadBombas;
	float tiempoExplosion=0;
	float TiempoTranscurrido=0;

public:
	ANaveEnemigaCaza();

	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }

	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	
public:
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
};
