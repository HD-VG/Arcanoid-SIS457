// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"

// Sets default values
ABoss::ABoss()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();
	Especification();
};

// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABoss::Especification()//para 
{
	GetShip();
	GetProyectile();
	GetBrick();
}
void ABoss::GetBrick()
{
	ABrick* SpawnNewBrick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass());
	if (SpawnNewBrick)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		NewBrick = SpawnNewBrick;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created NewBrick"), *NewBrick->GetName()));
	}
}
void ABoss::GetProyectile()
{
	AProyectile* SpawnNewProyectile = GetWorld()->SpawnActor<AProyectile>(AProyectile::StaticClass());
	if (SpawnNewProyectile)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		NewProyectile = SpawnNewProyectile;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created NewProyectile"), *NewProyectile->GetName()));
	}
}
void ABoss::GetShip()
{
	AShip* SpawnNewShip = GetWorld()->SpawnActor<AShip>(AShip::StaticClass());
	if (SpawnNewShip)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		NewShip = SpawnNewShip;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created NewShip"), *NewShip->GetName()));
	}
}
//ABrick* ABoss::GetBrick()
//{
//	return nullptr;
//}
//AProyectile* ABoss::GetProyectil()
//{
//	return nullptr;
//}
//AShip* ABoss::GetShip()
//{
//	return nullptr;
//}

