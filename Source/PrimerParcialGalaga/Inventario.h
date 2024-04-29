// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CapsulaVelocidad.h"
#include "Inventario.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRIMERPARCIALGALAGA_API UInventario : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventario();

	UPROPERTY()
	TArray<ACapsulaVelocidad*> CapsulasVelocidad;

	UFUNCTION()
	int32 AddToInventario(ACapsulaVelocidad* CapsulaToAdd);

	UFUNCTION()
	void RemoveFromInventario(ACapsulaVelocidad* CapsulaToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
