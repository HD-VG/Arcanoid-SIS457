// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderDirector.h"

// Sets default values
ABuilderDirector::ABuilderDirector()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABuilderDirector::BeginPlay()
{
	Super::BeginPlay();
	CreatorBoss();
}

// Called every frame
void ABuilderDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABuilderDirector::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABuilderDirector::CreatorBoss()
{
	ABoss* NewBoss = GetWorld()->SpawnActor<ABoss>(ABoss::StaticClass());
	if (NewBoss)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		Boss = NewBoss;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created Boss"), *Boss->GetName()));
	}
}



//void ABuilderDirector::GetBrick()
//{
//}
//
//void ABuilderDirector::GetProyectil()
//{
//}
//
//void ABuilderDirector::GetShip()
//{
//}

