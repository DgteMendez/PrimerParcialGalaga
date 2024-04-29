// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstelarBuilder.h"
#include "IngenieroEstelar.generated.h"

class IEstelarBuilder;

UCLASS()
class PRIMERPARCIALGALAGA_API AIngenieroEstelar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngenieroEstelar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirEstancia(FVector UbicacionEstancia);
	void SetEstelarBuilder(AActor* Builder);
	class AEstancia* GetEstancia();
	IEstelarBuilder* EstelarBuilder;
};
