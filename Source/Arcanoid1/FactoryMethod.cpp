// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod.h"

// Sets default values
AFactoryMethod::AFactoryMethod()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//CategoryCapsula = "Damage";
	//CreatorCapsuleActor(CategoryCapsula);
}
void AFactoryMethod::BeginPlay()
{
	Super::BeginPlay();
	AInventoryCapsuleDamageActor* NewInventoryCapsuleDamage = GetWorld()->SpawnActor<AInventoryCapsuleDamageActor>(AInventoryCapsuleDamageActor::StaticClass());
	AInventoryCapsulePowerActor* NewInventoryCapsulePower = GetWorld()->SpawnActor<AInventoryCapsulePowerActor>(AInventoryCapsulePowerActor::StaticClass());
	/*CreatorCapsuleActor(CategoryCapsula);*/
	if (NewInventoryCapsuleDamage)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		InventoryCapsuleDamage = NewInventoryCapsuleDamage;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created capsule Damage"), *InventoryCapsuleDamage->GetName()));
	}
	if (NewInventoryCapsulePower)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		InventoryCapsulePower = NewInventoryCapsulePower;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created capsule Power"), *InventoryCapsulePower->GetName()));
	}
}
void AFactoryMethod::CreatorCapsuleActor(FString CategoryCapsule)
{
	/*if (CategoryCapsule.Equals("Damage")) {
		GetWorld()->SpawnActor<AInventoryCapsuleActor>(AInventoryCapsuleActor::StaticClass());
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando capsule damage %s"), *InventoryCapsuleDamage->GetName()));
	}
	if (CategoryCapsule.Equals("Power")) {
		GetWorld()->SpawnActor<AInventoryCapsuleActor>(AInventoryCapsuleActor::StaticClass());
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando capsule damage %s"), *InventoryCapsulePower->GetName()));

	}*/
}


// Called when the game starts or when spawned

// Called every frame
void AFactoryMethod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

