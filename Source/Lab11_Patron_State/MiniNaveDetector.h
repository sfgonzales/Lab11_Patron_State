// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Estado.h"
#include "GameFramework/Actor.h"
#include "MiniNaveDetector.generated.h"

UCLASS()
class LAB11_PATRON_STATE_API AMiniNaveDetector : public AActor, public IEstado
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMiniNaveDetector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//...
protected:
	UPROPERTY(VisibleAnywhere, Category = "Estado Nave Acompaniante de Detección")
	class AJugador* Jugador;

public:
	//Establecemos el jugador
	void EstablecerJugador(class AJugador* _Jugador) override;
	//Establecemos los diferentes estados
	void Detector() override;
	//Visualizamos los estados actuales del jugador
	FORCEINLINE FString ObtenerEstado() override;

private:
	void Mecanico() override {};
	void Ataque() override {};
	void Escudo() override {};
	void Espera() override {};


};
