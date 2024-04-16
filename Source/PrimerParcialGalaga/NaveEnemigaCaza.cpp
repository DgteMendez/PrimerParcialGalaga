// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Bomba.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveEnemigaCazaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	NaveEnemigaMesh->SetStaticMesh(NaveEnemigaCazaMesh.Object);
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);

	TiempoTranscurrido++;
	if (TiempoTranscurrido > 500)
	{
		
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionBomba = GetActorLocation() + FVector(0.0f, 100.0f, 0.0f);
			World->SpawnActor<ABomba>(ubicacionBomba, FRotator::ZeroRotator);
		}
		
		TiempoTranscurrido = 0;
	}
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
}
