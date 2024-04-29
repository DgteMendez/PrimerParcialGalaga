// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrimerParcialGalagaGameMode.h"
#include "PrimerParcialGalagaPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "Proyectil.h"
#include "NaveAmiga.h"
#include "TallerReparacionesBuilder.h"
#include "CuartoCapsularBuilder.h"
#include "TallerEscudosBuilder.h"
#include "TallerMejorasSaludBuilder.h"
#include "TallerMejorasEnergiaBuilder.h"
#include "TallerMejorasArmasBuilder.h"
#include "SuperTaller.h"
#include "IngenieroEstelar.h"
#include "Estancia.h"

APrimerParcialGalagaGameMode::APrimerParcialGalagaGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = APrimerParcialGalagaPawn::StaticClass();
	NaveEnemiga01 = nullptr;
}

void APrimerParcialGalagaGameMode::BeginPlay()
{
	Super::BeginPlay();

	Ingeniero = GetWorld()->SpawnActor<AIngenieroEstelar>(AIngenieroEstelar::StaticClass());
	TallerReparacionesBuilder = GetWorld()->SpawnActor<ATallerReparacionesBuilder>(ATallerReparacionesBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(TallerReparacionesBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1100.0f, 1500.0f, 215.0f));
	CuartoCapsularBuilder = GetWorld()->SpawnActor<ACuartoCapsularBuilder>(ACuartoCapsularBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(CuartoCapsularBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1100.0f, 1300.0f, 215.0f));
	TallerEscudosBuilder = GetWorld()->SpawnActor<ATallerEscudosBuilder>(ATallerEscudosBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(TallerEscudosBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1100.0f, 1100.0f, 215.0f));
	TallerMejorasSaludBuilder = GetWorld()->SpawnActor<ATallerMejorasSaludBuilder>(ATallerMejorasSaludBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(TallerMejorasSaludBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1100.0f, 900.0f, 215.0f));
	TallerMejorasEnergiaBuilder = GetWorld()->SpawnActor<ATallerMejorasEnergiaBuilder>(ATallerMejorasEnergiaBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(TallerMejorasEnergiaBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1300.0f, 700.0f, 215.0f));
	TallerMejorasArmasBuilder = GetWorld()->SpawnActor<ATallerMejorasArmasBuilder>(ATallerMejorasArmasBuilder::StaticClass());
	Ingeniero->SetEstelarBuilder(TallerMejorasArmasBuilder);
	Ingeniero->ConstruirEstancia(FVector(-1500.0f, 700.0f, 215.0f));
	SuperTaller = GetWorld()->SpawnActor<ASuperTaller>(ASuperTaller::StaticClass());
	Ingeniero->SetEstelarBuilder(SuperTaller);
	Ingeniero->ConstruirEstancia(FVector(-1700.0f, 700.0f, 215.0f));

	AEstancia* Estancia = Ingeniero->GetEstancia();
	Estancia->CaracteristicasEstancia();

	FVector ubicacionInicioNavesEnemigasCaza = FVector(0.0f, -500.0f, 200.0f);
	FRotator rotacionInicioNavesEnemigasCaza = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionInicioNavesEnemigasTransporte = FVector(300.0f, -500.0f, 200.0f);
	FRotator rotacionInicioNavesEnemigasTransporte = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionInicioNavesAmigas = FVector(-1000.0f, -1000.0f, 200.0f);
	FRotator rotacionInicioNavesAmigas = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr) 
	{
		for (int i = 0; i < 5; i++)
		{
			ubicacionInicioNavesEnemigasCaza = ubicacionInicioNavesEnemigasCaza + FVector(0.0f, 200.0f, 0.0f);
			ANaveEnemigaCaza* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigaCaza>(ubicacionInicioNavesEnemigasCaza, rotacionInicioNavesEnemigasCaza);
			NavesEnemigas.Push(NaveEnemigaTemporal);
		}

		for (int i = 0; i < 5; i++)
		{
			ubicacionInicioNavesEnemigasTransporte = ubicacionInicioNavesEnemigasTransporte + FVector(0.0f, 200.0f, 0.0f);
			ANaveEnemigaTransporte* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionInicioNavesEnemigasTransporte, rotacionInicioNavesEnemigasTransporte);
			NavesEnemigas.Push(NaveEnemigaTemporal);
		}


		for (int i = 0; i < 10; i++)
		{
			ubicacionInicioNavesAmigas = ubicacionInicioNavesAmigas + FVector(0.0f, 200.0f, 0.0f);
			ANaveAmiga* NaveAmigaTemporal = World->SpawnActor<ANaveAmiga>(ubicacionInicioNavesAmigas, rotacionInicioNavesAmigas);
			NavesAmigas.Push(NaveAmigaTemporal);
		}

		ubicacionInicioNavesAmigas = ubicacionInicioNavesAmigas + FVector(200.0f, -2000.0f, 0.0f);

		for (int i = 0; i < 10; i++)
		{
			ubicacionInicioNavesAmigas = ubicacionInicioNavesAmigas + FVector(0.0f, 200.0f, 0.0f);
			ANaveAmiga* NaveAmigaTemporal = World->SpawnActor<ANaveAmiga>(ubicacionInicioNavesAmigas, rotacionInicioNavesAmigas);
			NavesAmigas.Push(NaveAmigaTemporal);
		}

		ubicacionInicioNavesAmigas = ubicacionInicioNavesAmigas + FVector(200.0f, -2000.0f, 0.0f);

		for (int i = 0; i < 10; i++)
		{
			ubicacionInicioNavesAmigas = ubicacionInicioNavesAmigas + FVector(0.0f, 200.0f, 0.0f);
			ANaveAmiga* NaveAmigaTemporal = World->SpawnActor<ANaveAmiga>(ubicacionInicioNavesAmigas, rotacionInicioNavesAmigas);
			NavesAmigas.Push(NaveAmigaTemporal);
		}
	}
}

void APrimerParcialGalagaGameMode::Tick(float DeltaTime)
{
}

