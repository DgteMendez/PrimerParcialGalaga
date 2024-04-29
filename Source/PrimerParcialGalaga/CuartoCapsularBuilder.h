// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstelarBuilder.h"
#include "CuartoCapsularBuilder.generated.h"

class AEstancia;

UCLASS()
class PRIMERPARCIALGALAGA_API ACuartoCapsularBuilder : public AActor, public IEstelarBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACuartoCapsularBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildEstancia(FVector UbiEstans) override;
	virtual void BuildTaller() override;
	virtual void BuildMesh() override;
	class UStaticMesh* Cuarto = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	virtual void BuildCuarto() override;
	virtual class AEstancia* GetEstancia() override;
	AEstancia* Estancia;
};
