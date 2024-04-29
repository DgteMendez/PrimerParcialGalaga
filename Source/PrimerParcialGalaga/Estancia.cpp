// Fill out your copyright notice in the Description page of Project Settings.


#include "Estancia.h"

// Sets default values
AEstancia::AEstancia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshEdificio = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEdificio"));
	MeshEdificio->SetupAttachment(RootComponent);
	RootComponent = MeshEdificio;
}

// Called when the game starts or when spawned
void AEstancia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstancia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstancia::SetTaller(FString MiTaller)
{
	Taller = MiTaller;
}

void AEstancia::SetMesh(UStaticMeshComponent* MiMeshEdificio)
{
	MeshEdificio = MiMeshEdificio;
}

void AEstancia::SetCuarto(FString MiCuarto)
{
	Cuarto = MiCuarto;
}

void AEstancia::CaracteristicasEstancia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *Taller));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *Cuarto));
}