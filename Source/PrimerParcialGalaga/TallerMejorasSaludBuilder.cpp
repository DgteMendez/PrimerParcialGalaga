// Fill out your copyright notice in the Description page of Project Settings.


#include "TallerMejorasSaludBuilder.h"
#include "Estancia.h"

// Sets default values
ATallerMejorasSaludBuilder::ATallerMejorasSaludBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATallerMejorasSaludBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATallerMejorasSaludBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATallerMejorasSaludBuilder::BuildEstancia(FVector UbiEstans)
{
	Estancia = GetWorld()->SpawnActor<AEstancia>(AEstancia::StaticClass(), UbiEstans, FRotator::ZeroRotator);
	Estancia->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Estancia) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void ATallerMejorasSaludBuilder::BuildTaller()
{
	if (!Estancia) {UE_LOG(LogTemp, Error, TEXT("BuildTallerReparaciones():Lodging is NULL, make sure it's initialized.")); return; }
	Estancia->SetTaller("TallerMejorasSalud");
}

void ATallerMejorasSaludBuilder::BuildCuarto()
{
	/*if (!Estancia) { UE_LOG(LogTemp, Error, TEXT("BuildTallerReparaciones():Lodging is NULL, make sure it's initialized.")); return; }
			Estancia->SetCuarto("Cuarto");*/
}

void ATallerMejorasSaludBuilder::BuildMesh()
{
	Estancia->MeshEdificio->SetStaticMesh(Taller);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MeshEdificio"));
}

AEstancia* ATallerMejorasSaludBuilder::GetEstancia()
{
	return Estancia;
}

