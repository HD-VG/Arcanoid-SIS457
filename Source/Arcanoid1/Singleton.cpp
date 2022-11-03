// Fill out your copyright notice in the Description page of Project Settings.


#include "Singleton.h"
#include "Paddle.h"

// Sets default values
ASingleton::ASingleton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleton::BeginPlay()
{
	Super::BeginPlay();
	//Create 4 Inventory

	//for (int i = 0; i <= 4; i++)
	//{
	//	APaddle* SpawnedPaddle = GetWorld() -> SpawnActor<APaddle>(APaddle::StaticClass());
	//	if (SpawnedPaddle)
	//	{
	//		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
	//			Paddle = SpawnedPaddle;
	//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
	//	}
	//}

}

// Called every frame
void ASingleton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

