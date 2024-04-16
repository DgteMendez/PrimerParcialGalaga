// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMovimiento.h"

// Sets default values for this component's properties
UComponenteMovimiento::UComponenteMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Velocidad = -250.0f;
	LimiteIzquierda = -1800.0f;
	LimiteDerecha = 1800.0f;
	Verificacion = true;

	// ...
}


// Called when the game starts
void UComponenteMovimiento::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Actor = GetOwner();
	if (Actor) 
	{
		if (Verificacion) 
		{
			auto NewPos = Actor->GetActorLocation() + FVector(0.0f, Velocidad * DeltaTime, 0.0f);
			Actor->SetActorLocation(NewPos);
		}
		else 
		{
			auto NewPos = Actor->GetActorLocation() + FVector(0.0f, -Velocidad * DeltaTime, 0.0f);
			Actor->SetActorLocation(NewPos);
		}
		if (Actor->GetActorLocation().Y < LimiteIzquierda)
		{
			Verificacion = false;
		}
		else if (Actor->GetActorLocation().Y > LimiteDerecha)
		{
			Verificacion = true;
		}
	}
	// ...
}

