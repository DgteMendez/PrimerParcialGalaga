// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "MunicionTorre.generated.h"

UCLASS()
class PRIMERPARCIALGALAGA_API AMunicionTorre : public AProyectil
{
	GENERATED_BODY()
	
private:
	int cantidadMunicion;

public:
	AMunicionTorre();

	FORCEINLINE int GetCantidadMunicion() const { return cantidadMunicion; }

	FORCEINLINE void SetCantidadMunicion(float _cantidadMunicion) { cantidadMunicion = _cantidadMunicion; }

public:
	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
