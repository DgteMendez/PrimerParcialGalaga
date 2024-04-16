// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Bomba.generated.h"

UCLASS()
class PRIMERPARCIALGALAGA_API ABomba : public AProyectil
{
	GENERATED_BODY()

private:
	float tiempoExplosion;
	
public:
	ABomba();

	FORCEINLINE float GetTiempoExplosion() const { return tiempoExplosion; }

	FORCEINLINE void SetTiempoExplosion(float _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

public:

	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime);
	void Explotar();

};
