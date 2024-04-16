// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class PRIMERPARCIALGALAGA_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float almacenamiento;

public:
	ANaveEnemigaTransporte();

	FORCEINLINE int GetAlmacenamiento() const { return almacenamiento; }

	FORCEINLINE void SetAlmacenamiento(float _almacenamiento) { almacenamiento = _almacenamiento; }
	
protected:
	virtual void Mover(float DeltaTime);
};
