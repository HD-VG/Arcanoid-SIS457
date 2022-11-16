// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
ACapsula::ACapsula()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	SM_Capsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Capsula->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACapsula::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

