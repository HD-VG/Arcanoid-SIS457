// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder.h"

// Sets default values
ABuilder::ABuilder()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABuilder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

ABrick* ABuilder::GetBrick()
{
	return nullptr;
}

AProyectile* ABuilder::GetProyectil()
{
	return nullptr;
}

AShip* ABuilder::GetShip()
{
	return nullptr;
}





