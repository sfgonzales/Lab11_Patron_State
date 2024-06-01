// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador.h"
#include "Estado.h"
#include "EstadoEnEspera.h"
#include "MiniNaveAtaque.h"
#include "MiniNaveDetector.h"
#include "MiniNaveEscudo.h"
#include "MiniNaveMecanico.h"

// Sets default values
AJugador::AJugador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AJugador::InicializarEstadosJugador(FString _Estados)
{
	if (_Estados.Equals("Nave_de_Ataque")) {
		EstadoNaveAtaque = GetWorld()->SpawnActor<AMiniNaveAtaque>(AMiniNaveAtaque::StaticClass());
		EstadoNaveAtaque->EstablecerJugador(this);
		EstablecerEstados(EstadoNaveAtaque);
	}
	if (_Estados.Equals("Nave_Detectora")) {
		EstadoNaveDetector = GetWorld()->SpawnActor<AMiniNaveDetector>(AMiniNaveDetector::StaticClass());
		EstadoNaveDetector->EstablecerJugador(this);
		EstablecerEstados(EstadoNaveDetector);
	}
	if (_Estados.Equals("Nave_de_Escudo_de_Fuerza")) {
		EstadoNaveEscudo = GetWorld()->SpawnActor<AMiniNaveEscudo>(AMiniNaveEscudo::StaticClass());
		EstadoNaveEscudo->EstablecerJugador(this);
		EstablecerEstados(EstadoNaveEscudo);
	}
	if (_Estados.Equals("Nave_Mecánico")) {
		EstadoNaveMecanico = GetWorld()->SpawnActor<AMiniNaveMecanico>(AMiniNaveMecanico::StaticClass());
		EstadoNaveMecanico->EstablecerJugador(this);
		EstablecerEstados(EstadoNaveMecanico);
	}
	if (_Estados.Equals("Esperando")) {
		EstadoEsperando = GetWorld()->SpawnActor<AEstadoEnEspera>(AEstadoEnEspera::StaticClass());
		EstadoEsperando->EstablecerJugador(this);
		EstablecerEstados(EstadoEsperando);
	}
}

void AJugador::EstablecerEstados(IEstado* _Estado)
{
	Estado = _Estado;
}

void AJugador::JugadorNaveAtaque()
{
	Estado->Ataque();
}

void AJugador::JugadorNaveDetector()
{
	Estado->Detector();
}

void AJugador::JugadorNaveEscudo()
{
	Estado->Escudo();
}

void AJugador::JugadorNaveMecanico()
{
	Estado->Mecanico();
}

void AJugador::JugadorEsperando()
{
	Estado->Espera();
}

IEstado* AJugador::J_ObtenerEstado()
{
	return Estado;
}

IEstado* AJugador::J_ObtenerEstadoNaveAtaque()
{
	return EstadoNaveAtaque;
}

IEstado* AJugador::J_ObtenerEstadoNaveDetector()
{
	return EstadoNaveDetector;
}

IEstado* AJugador::J_ObtenerEstadoNaveEscudo()
{
	return EstadoNaveEscudo;
}

IEstado* AJugador::J_ObtenerEstadoNaveMecanico()
{
	return EstadoNaveMecanico;
}

IEstado* AJugador::J_ObtenerEstadoEsperando()
{
	return EstadoEsperando;
}

FString AJugador::J_ObtenerEstadoActual()
{
	if (Estado) {
		return "La nave acoplada al jugador es: " + Estado->ObtenerEstado();
	}
	else {
		return "Apoyos no inicializados";
	}
}

