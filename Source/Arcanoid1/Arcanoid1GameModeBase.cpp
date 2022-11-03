// Copyright Epic Games, Inc. All Rights Reserved.


#include "Arcanoid1GameModeBase.h"
#include "Brick.h"
#include "Paddle.h"

void AArcanoid1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SpawnBrick();

	for (int i = 0; i <= 4; i++)
	{

		APaddle* SpawnedPaddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
		}
	}

}

void AArcanoid1GameModeBase::SpawnBrick()
{
	UWorld* const World = GetWorld();
	World->SpawnActor<ABrick>(FVector(400.0f, -400.0f, 200), FRotator::ZeroRotator);

}

void AArcanoid1GameModeBase::Tick(float DeltaSeconds)
{
	//Super::Tick(DeltaSeconds);
	//creacion de ladrillos en forma dinamica
	UE_LOG(LogTemp, Warning, TEXT("Creando Ladrillo"));
	float newX = rand() % 100 + 1;
	float newZ = rand() % 100 + 1;
	UWorld* const World = GetWorld();
	World->SpawnActor<ABrick>(FVector(-130, 0,380), FRotator::ZeroRotator);
	

	//insertar los ladrillos en la pila
	//template <class T>
	//Pila<T>::Insertar(T ABrick);
	//Pila<T>::Insertar(T *ABrick);
}

AArcanoid1GameModeBase::AArcanoid1GameModeBase()
{
}

