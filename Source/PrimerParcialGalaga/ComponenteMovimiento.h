// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteMovimiento.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRIMERPARCIALGALAGA_API UComponenteMovimiento : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMovimiento();

	UPROPERTY(EditAnywhere)
	float Velocidad;
	UPROPERTY(EditAnywhere)
	float LimiteIzquierda;
	UPROPERTY(EditAnywhere)
	float LimiteDerecha;
	UPROPERTY(EditAnywhere)
	bool Verificacion;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
