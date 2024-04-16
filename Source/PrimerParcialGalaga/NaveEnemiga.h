// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponenteMovimiento.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class PRIMERPARCIALGALAGA_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* NaveEnemigaMesh;
	float resistencia;
	float velocidad;
	float danoProducido;
	float tiempoDisparo;
	FString nombreNave;
	FVector posicion;

public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FString GetNombreNave() const { return nombreNave; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetNombreNave(FString _nombreNave) { nombreNave = _nombreNave; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

	UComponenteMovimiento* ComponenteMovimiento;

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );

};
