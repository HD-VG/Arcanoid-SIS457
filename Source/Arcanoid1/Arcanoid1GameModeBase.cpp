// Copyright Epic Games, Inc. All Rights Reserved.


#include "Arcanoid1GameModeBase.h"
#include "Brick.h"

void AArcanoid1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SpawnBrick();


}

void AArcanoid1GameModeBase::SpawnBrick()
{
	UWorld* const World = GetWorld();
	World->SpawnActor<ABrick>(FVector(400.0f, -400.0f, 200), FRotator::ZeroRotator);

}

void AArcanoid1GameModeBase::Tick(float DeltaSeconds)
{
	UE_LOG(LogTemp, Warning, TEXT("Creando Ladrillo"));
	float newX = rand() % 100 + 1;
	float newZ = rand() % 100 + 1;
	UWorld* const World = GetWorld();
	World->SpawnActor<ABrick>(FVector(-130, 0,380), FRotator::ZeroRotator);

	//insertar los ladrillos en la pila


}

AArcanoid1GameModeBase::AArcanoid1GameModeBase()
{
}
