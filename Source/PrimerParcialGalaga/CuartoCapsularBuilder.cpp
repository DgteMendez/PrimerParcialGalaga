// Fill out your copyright notice in the Description page of Project Settings.


#include "CuartoCapsularBuilder.h"
#include "CapsulaVelocidad.h"
#include "Estancia.h"

// Sets default values
ACuartoCapsularBuilder::ACuartoCapsularBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACuartoCapsularBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACuartoCapsularBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuartoCapsularBuilder::BuildEstancia(FVector UbiEstans)
{
	Estancia = GetWorld()->SpawnActor<AEstancia>(AEstancia::StaticClass(), UbiEstans, FRotator::ZeroRotator);
	Estancia->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Estancia) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void ACuartoCapsularBuilder::BuildTaller()
{
	/*if (!Estancia) { UE_LOG(LogTemp, Error, TEXT("BuildTaller():Lodging is NULL, make sure it's initialized.")); return; }
	Estancia->SetTaller("Taller");*/
}

void ACuartoCapsularBuilder::BuildMesh()
{
	Estancia->MeshEdificio->SetStaticMesh(Cuarto);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MeshTaller"));
}

void ACuartoCapsularBuilder::BuildCuarto()
{
	if (!Estancia) { UE_LOG(LogTemp, Error, TEXT("BuildCuarto():Lodging is NULL, make sure it's initialized.")); return; }
	Estancia->SetCuarto("CuartoDeCapsulas");
	UWorld* const World = GetWorld();
	if (World!=nullptr)
	{
		FVector ubicacionCapsula = FVector(-1100.0f, 1300.0f, 215.0f) - FVector(100.0f, 0.0f, 0.0f);
		World->SpawnActor<ACapsulaVelocidad>(ubicacionCapsula, FRotator::ZeroRotator);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la capsula"));
	}
}

AEstancia* ACuartoCapsularBuilder::GetEstancia()
{
	return Estancia;
}
