// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estado.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstado : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class LAB11_PATRON_STATE_API IEstado
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//...
	// Establecer el jugador
	virtual void EstablecerJugador(class AJugador* _Jugador) = 0;
	// Establecer la salud de las diferentes naves acompaniantes
	virtual void Mecanico() = 0;
	virtual void Detector() = 0;
	virtual void Ataque() = 0;
	virtual void Escudo() = 0;
	virtual void Espera() = 0;
	// Visualizar el estado de las naves acompaniantes
	virtual FString ObtenerEstado() = 0;

};
