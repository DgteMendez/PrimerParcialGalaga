// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

class UStaticMeshComponent;

UCLASS()
class PRIMERPARCIALGALAGA_API AProyectil : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere);
	UStaticMeshComponent* ProyectilMesh;
	float dano;
	float velocidad;
	float volumen;
	FString nombre;

public:
	FORCEINLINE float GetDano() const { return dano; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVolumen() const { return volumen; }
	FORCEINLINE FString GetNombre() const { return nombre; }

	FORCEINLINE void SetDano(float _Dano) { dano = _Dano; }
	FORCEINLINE void SetVelocidad(float _Velocidad) { velocidad = _Velocidad; }
	FORCEINLINE void SetVolumen(float _Volumen) { volumen = _Volumen; }
	FORCEINLINE void SetNombre(FString _Nombre) { nombre = _Nombre; }
	
public:	
	// Sets default values for this actor's properties
	AProyectil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
