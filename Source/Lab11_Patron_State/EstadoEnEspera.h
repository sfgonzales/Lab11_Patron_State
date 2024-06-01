// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Estado.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEnEspera.generated.h"

UCLASS()
class LAB11_PATRON_STATE_API AEstadoEnEspera : public AActor, public IEstado
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstadoEnEspera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//...
protected:
	UPROPERTY(VisibleAnywhere, Category = "Estado Nave Acompaniante Mecánico")
	class AJugador* Jugador;

public:
	//Establecemos el jugador
	void EstablecerJugador(class AJugador* _Jugador) override;
	//Establecemos los diferentes estados
	void Espera() override;
	//Visualizamos los estados actuales del jugador
	FORCEINLINE FString ObtenerEstado() override;

private:
	void Ataque() override {};
	void Detector() override {};
	void Escudo() override {};
	void Mecanico() override {};

};
