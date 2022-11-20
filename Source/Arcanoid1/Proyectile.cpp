// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectile.h"

// Sets default values
AProyectile::AProyectile()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ProyectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectileMesh"));
	RootComponent = ProyectileMeshComponent;
	ProyectileName = "Proyectile";
}

// Called when the game starts or when spawned
void AProyectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AProyectile::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

