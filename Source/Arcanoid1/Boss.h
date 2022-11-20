// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Ship.h"
#include "Proyectile.h"
#include "Brick.h"
#include "BuilderInterface.h"
#include "Boss.generated.h"

UCLASS()
class ARCANOID1_API ABoss : public APawn , public IBuilderInterface
{
	GENERATED_BODY()

public:

	
	// Sets default values for this pawn's properties
	ABoss();

	UPROPERTY()
		class AProyectile* NewProyectile;
	UPROPERTY()
		class AShip* NewShip;
	UPROPERTY()
		class ABrick* NewBrick;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Especification();
	/*virtual ABrick* GetBrick();

	virtual AProyectile* GetProyectil();

	virtual AShip* GetShip();*/
	virtual void GetBrick() override;

	virtual void GetProyectile() override;

	virtual void GetShip() override;
};

