// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Lab11_Patron_StateGameMode.generated.h"

UCLASS(MinimalAPI)
class ALab11_Patron_StateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALab11_Patron_StateGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AJugador* Jugador;
};



