// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrimerParcialGalagaGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveTransporte;
class AProyectil;
class ANaveAmiga;

UCLASS(MinimalAPI)
class APrimerParcialGalagaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrimerParcialGalagaGameMode();

protected:
	virtual void BeginPlay() override;

public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveTransporte* NaveTransporte01;
	AProyectil* Proyectil01;
	ANaveAmiga* NaveAmiga01;

	TArray<ANaveEnemiga*> NavesEnemigas;
	TArray<ANaveAmiga*> NavesAmigas;

private:
	virtual void Tick(float DeltaTime) override;
};



