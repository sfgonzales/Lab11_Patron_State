// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniNaveMecanico.h"
#include "Jugador.h"

// Sets default values
AMiniNaveMecanico::AMiniNaveMecanico()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMiniNaveMecanico::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMiniNaveMecanico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AMiniNaveMecanico::EstablecerJugador(AJugador* _Jugador)
{
	Jugador = Cast<AJugador>(_Jugador);
}

void AMiniNaveMecanico::Mecanico()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Se acoplo el apoyo Mecanico")));
}

FString AMiniNaveMecanico::ObtenerEstado()
{
	return "Esperando nave de apoyo Mecanico";
}

