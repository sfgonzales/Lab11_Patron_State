// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniNaveAtaque.h"
#include "Jugador.h"

// Sets default values
AMiniNaveAtaque::AMiniNaveAtaque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMiniNaveAtaque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMiniNaveAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AMiniNaveAtaque::EstablecerJugador(AJugador* _Jugador)
{
	Jugador = Cast<AJugador>(_Jugador);
}

void AMiniNaveAtaque::Ataque()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Se acoplo el apoyo de Ataque")));
}

FString AMiniNaveAtaque::ObtenerEstado()
{
	return "Esperando nave de apoyo de Ataque";
}

