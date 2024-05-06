// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroEstelar.h"
#include "Estancia.h"

// Sets default values
AIngenieroEstelar::AIngenieroEstelar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroEstelar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngenieroEstelar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroEstelar::SetEstelarBuilder(AActor* Builder)
{
	EstelarBuilder = Cast<IEstelarBuilder>(Builder);

	if (!EstelarBuilder) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se puede construir la estancia"));
	}
}

AEstancia* AIngenieroEstelar::GetEstancia()
{
	if(EstelarBuilder)
	{
		return EstelarBuilder->GetEstancia();
	}

	UE_LOG(LogTemp, Error, TEXT("GetLodgin(): Return nullptr"));
	return nullptr;
}

void AIngenieroEstelar::ConstruirEstancia(FVector UbicacionEstancia)
{
	if (!EstelarBuilder) 
	{
		UE_LOG(LogTemp, Error, TEXT("No se puede construir la estancia"));
		return;
	}

	EstelarBuilder->BuildEstancia(UbicacionEstancia);
	EstelarBuilder->BuildTaller();
	EstelarBuilder->BuildCuarto();
	EstelarBuilder->BuildTorre();
	EstelarBuilder->BuildMesh();
}
