// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Estado.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jugador.generated.h"

UCLASS()
class LAB11_PATRON_STATE_API AJugador : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//...
public:
	//Inicializamos los estados del jugador
	void InicializarEstadosJugador(FString _Estados);

	//Declaramos los diferentes estados del jugador
	IEstado* EstadoEsperando;
	IEstado* EstadoNaveAtaque;
	IEstado* EstadoNaveDetector;
	IEstado* EstadoNaveEscudo;
	IEstado* EstadoNaveMecanico;
	IEstado* Estado;

	//Funciones para cambiar de estado
	FORCEINLINE void EstablecerEstados(IEstado* _Estado);

	void JugadorEsperando();
	void JugadorNaveAtaque();
	void JugadorNaveDetector();
	void JugadorNaveEscudo();
	void JugadorNaveMecanico();

	//Funciones para obtener los estados
	FORCEINLINE IEstado* J_ObtenerEstado();
	FORCEINLINE IEstado* J_ObtenerEstadoEsperando();
	FORCEINLINE IEstado* J_ObtenerEstadoNaveAtaque();
	FORCEINLINE IEstado* J_ObtenerEstadoNaveDetector();
	FORCEINLINE IEstado* J_ObtenerEstadoNaveEscudo();
	FORCEINLINE IEstado* J_ObtenerEstadoNaveMecanico();
	FORCEINLINE FString J_ObtenerEstadoActual();

};
