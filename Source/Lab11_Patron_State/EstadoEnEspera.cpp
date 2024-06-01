// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoEnEspera.h"
#include "Jugador.h"

// Sets default values
AEstadoEnEspera::AEstadoEnEspera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoEnEspera::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoEnEspera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AEstadoEnEspera::EstablecerJugador(AJugador* _Jugador)
{
	Jugador = Cast<AJugador>(_Jugador);
}

void AEstadoEnEspera::Espera()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Nueva nave de apoyo llegando")));
}

FString AEstadoEnEspera::ObtenerEstado()
{
	return "A la espera de una nave de apoyo ";
}

