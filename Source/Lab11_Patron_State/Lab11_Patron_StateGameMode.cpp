// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab11_Patron_StateGameMode.h"
#include "Lab11_Patron_StatePawn.h"
#include "Jugador.h"

ALab11_Patron_StateGameMode::ALab11_Patron_StateGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALab11_Patron_StatePawn::StaticClass();
}

/*
ALab11_Patron_StateGameMode::ALab11_Patron_StateGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}
*/

void ALab11_Patron_StateGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Spawneamos el jugador
	Jugador = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());

	//Inicializamos el estado esperando
	Jugador->InicializarEstadosJugador("Esperando");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Jugador->J_ObtenerEstadoActual()));
	Jugador->JugadorEsperando();

	//Cambiamos a la nave de Ataque
	Jugador->InicializarEstadosJugador("Nave_de_Ataque");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Jugador->J_ObtenerEstadoActual()));
	Jugador->JugadorNaveAtaque();


	//Cambiamos a la Nave de Detección
	Jugador->InicializarEstadosJugador("Nave_Detectora");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Jugador->J_ObtenerEstadoActual()));
	Jugador->JugadorNaveDetector();

	//Cambiamos a la Nave de Escudo
	Jugador->InicializarEstadosJugador("Nave_de_Escudo_de_Fuerza");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Jugador->J_ObtenerEstadoActual()));
	Jugador->JugadorNaveEscudo();

	//Cambiamos a la Nave Mecanica
	Jugador->InicializarEstadosJugador("Nave_Mecánico");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *Jugador->J_ObtenerEstadoActual()));
	Jugador->JugadorNaveMecanico();



}

void ALab11_Patron_StateGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}