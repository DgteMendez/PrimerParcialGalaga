// Fill out your copyright notice in the Description page of Project Settings.


#include "MunicionTorre.h"
#include "NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"


AMunicionTorre::AMunicionTorre()
{
	velocidad = -2000.0f;
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/ASETS/PROYECTILES/BALAS1/5ceb07fa0e47_una_bala_futurista_.5ceb07fa0e47_una_bala_futurista_'"));
	ProyectilMesh->SetStaticMesh(ShipMesh.Object);

	// Create mesh component for the projectile sphere
	ProyectilMesh->BodyInstance.SetCollisionProfileName("Proyectil");
	ProyectilMesh->OnComponentHit.AddDynamic(this, &AMunicionTorre::OnHit);		// set up a notification for when this component hits something

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AMunicionTorre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AMunicionTorre::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	//float DesplazamientoY = velocidad * DeltaTime;
	float DesplazamientoX = velocidad * DeltaTime;
	FVector NuevaPosicion = FVector(PosicionActual.X - DesplazamientoX, PosicionActual.Y, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);
}

void AMunicionTorre::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision"));
	Destroy();
}
