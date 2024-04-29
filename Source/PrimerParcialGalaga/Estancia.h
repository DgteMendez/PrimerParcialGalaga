// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CentroEstelar.h"
#include "Estancia.generated.h"

UCLASS()
class PRIMERPARCIALGALAGA_API AEstancia : public AActor, public ICentroEstelar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstancia();

private:

	UPROPERTY(VisibleAnywhere, Category = "Estancia")
	FString Taller;
	UPROPERTY(VisibleAnywhere, Category = "Estancia")
	FString Cuarto;

public:
	UPROPERTY(VisibleAnywhere, Category = "Estancia")
	UStaticMeshComponent* MeshEdificio;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetTaller(FString MiTaller);
	void SetMesh(UStaticMeshComponent* MiMeshEdificio);
	void SetCuarto(FString MiCuarto);
	void CaracteristicasEstancia();
};
