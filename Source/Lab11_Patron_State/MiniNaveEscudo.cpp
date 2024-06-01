// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniNaveEscudo.h"
#include "Jugador.h"

// Sets default values
AMiniNaveEscudo::AMiniNaveEscudo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMiniNaveEscudo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMiniNaveEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//...
void AMiniNaveEscudo::EstablecerJugador(AJugador* _Jugador)
{
	Jugador = Cast<AJugador>(_Jugador);
}

void AMiniNaveEscudo::Escudo()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Se acoplo el apoyo de Escudo de Fuerza")));
}

FString AMiniNaveEscudo::ObtenerEstado()
{
	return "Esperando nave de apoyo de Escudo";
}
