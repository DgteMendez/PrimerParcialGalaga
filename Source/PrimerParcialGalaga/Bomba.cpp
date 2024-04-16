// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "NaveAmiga.h"
#include "Kismet/GameplayStatics.h"

ABomba::ABomba()
{
	velocidad = -300.0f;
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	ProyectilMesh->SetStaticMesh(ShipMesh.Object);
}

void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

	tiempoExplosion++;
	if (tiempoExplosion > 300)
	{
		Explotar();
		Destroy();
		tiempoExplosion = 0;
	}
}

void ABomba::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float DesplazamientoX = velocidad * DeltaTime;
	FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);
}

void ABomba::Explotar()
{
	TArray<AActor*> DestruirActores;
	float RadioExplosion = 300.0f;

	// Get all actors within the explosion radius
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), DestruirActores);

	for (AActor* Actor : DestruirActores)
	{
		AActor* auxActor = Actor;
		Actor = Cast<AActor>(Actor);
		if (Actor && Actor->GetDistanceTo(this) <= RadioExplosion)
		{
			Actor->Destroy();
		}

	}

	// Destroy the bomb after a delay
	//FTimerHandle TimerHandle;
	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABomba::Explotar, 1.0f, false);
}
