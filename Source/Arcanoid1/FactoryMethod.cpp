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
	Super::BeginPlay();//implemetar las condiciones para la creacion de capsulas
	//AInventoryCapsuleDamageActor* NewInventoryCapsuleDamage = GetWorld()->SpawnActor<AInventoryCapsuleDamageActor>(AInventoryCapsuleDamageActor::StaticClass());
	//AInventoryCapsulePowerActor* NewInventoryCapsulePower = GetWorld()->SpawnActor<AInventoryCapsulePowerActor>(AInventoryCapsulePowerActor::StaticClass());
	CreatorCapsuleActor("Power");
	CreatorCapsuleActor("Damage");
	
	
}
void AFactoryMethod::CreatorCapsuleActor(FString CategoryCapsule)
{
	/*if (Categorycapsule.equals("power") {
		getworld()->spawnactor<ainventorycapsuleactor>(ainventorycapsuleactor::staticclass());
		gengine->addonscreendebugmessage(-1, 15.f, fcolor::yellow, fstring::printf(text("creando capsule damage %s"), *inventorycapsuledamage->getname()));
	}
	if (Categorycapsule.equals("power")) {
		getworld()->spawnactor<ainventorycapsuleactor>(ainventorycapsuleactor::staticclass());
		gengine->addonscreendebugmessage(-1, 15.f, fcolor::yellow, fstring::printf(text("creando capsule damage %s"), *inventorycapsulepower->getname()));

	}*/

	if (CategoryCapsule.Equals("Damage")) {
		SpawnNewCapsuleDamage();
	}
	if (CategoryCapsule.Equals("Power")) {
		SpawnNewCapsulePower();
	}
}


// Called when the game starts or when spawned

void AFactoryMethod::SpawnNewCapsuleDamage()
{
	AInventoryCapsuleDamageActor* NewInventoryCapsuleDamage = GetWorld()->SpawnActor<AInventoryCapsuleDamageActor>(AInventoryCapsuleDamageActor::StaticClass());
	if (NewInventoryCapsuleDamage)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		InventoryCapsuleDamage = NewInventoryCapsuleDamage;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created capsule Damage"), *InventoryCapsuleDamage->GetName()));
	}
}

void AFactoryMethod::SpawnNewCapsulePower()
{
	AInventoryCapsulePowerActor* NewInventoryCapsulePower = GetWorld()->SpawnActor<AInventoryCapsulePowerActor>(AInventoryCapsulePowerActor::StaticClass());
	if (NewInventoryCapsulePower)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		InventoryCapsulePower = NewInventoryCapsulePower;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created capsule Power"), *InventoryCapsulePower->GetName()));
	}
}

// Called every frame
void AFactoryMethod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

