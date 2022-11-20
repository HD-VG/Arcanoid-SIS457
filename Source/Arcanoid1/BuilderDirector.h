// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Boss.h"
#include "BuilderDirector.generated.h"

UCLASS()
class ARCANOID1_API ABuilderDirector : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABuilderDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY()
		class ABoss* Boss;
public:	
	/*UPROPERTY()
		interface IBuilderInterface* BuilderInterace;*/
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	/*virtual void GetBrick() ;

	virtual void GetProyectil() ;

	virtual void GetShip() ;*/
	void CreatorBoss();
};
