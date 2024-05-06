// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstelarBuilder.h"
#include "TallerMejorasEnergiaBuilder.generated.h"

class AEstancia;

UCLASS()
class PRIMERPARCIALGALAGA_API ATallerMejorasEnergiaBuilder : public AActor, public IEstelarBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATallerMejorasEnergiaBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildEstancia(FVector UbiEstans) override;
	virtual void BuildTaller() override;
	virtual void BuildCuarto() override;
	virtual void BuildTorre() override;
	virtual void BuildMesh() override;
	class UStaticMesh* Taller = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/ASETS/TALLERES/TALLER4/acbd4da2de25_casas_flotantes_fut.acbd4da2de25_casas_flotantes_fut'"));
	virtual class AEstancia * GetEstancia() override;
	AEstancia* Estancia;
};
