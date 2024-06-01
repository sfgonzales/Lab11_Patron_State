// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniNaveDetector.h"
#include "Jugador.h"

// Sets default values
AMiniNaveDetector::AMiniNaveDetector()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMiniNaveDetector::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMiniNaveDetector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AMiniNaveDetector::EstablecerJugador(AJugador* _Jugador)
{
	Jugador = Cast<AJugador>(_Jugador);
}

void AMiniNaveDetector::Detector()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Se acoplo el apoyo de Deteccion")));
}

FString AMiniNaveDetector::ObtenerEstado()
{
	return "Esperando nave de apoyo Detectora";
}

