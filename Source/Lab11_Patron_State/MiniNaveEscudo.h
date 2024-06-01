// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Estado.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiniNaveEscudo.generated.h" 

UCLASS()
class LAB11_PATRON_STATE_API AMiniNaveEscudo : public AActor, public IEstado
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMiniNaveEscudo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//...
protected:
	UPROPERTY(VisibleAnywhere, Category = "Estado Nave Acompaniante de Escudo")
	class AJugador* Jugador;

public:
	//Establecemos el jugador
	void EstablecerJugador(class AJugador* _Jugador) override;
	//Establecemos los diferentes estados
	void Escudo() override;
	//Visualizamos los estados actuales del jugador
	FORCEINLINE FString ObtenerEstado() override;

private:
	void Mecanico() override {};
	void Detector() override {};
	void Ataque() override {};
	void Espera() override {};

};
