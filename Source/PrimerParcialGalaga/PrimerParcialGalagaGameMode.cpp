// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrimerParcialGalagaGameMode.h"
#include "PrimerParcialGalagaPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "Proyectil.h"
#include "NaveAmiga.h"

APrimerParcialGalagaGameMode::APrimerParcialGalagaGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = APrimerParcialGalagaPawn::StaticClass();
	NaveEnemiga01 = nullptr;
}

void APrimerParcialGalagaGameMode::BeginPlay()
{
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

