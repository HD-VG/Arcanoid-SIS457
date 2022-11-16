// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryCapsuleActor.h"

AInventoryCapsuleActor::AInventoryCapsuleActor()
{
	
}

void AInventoryCapsuleActor::BeginPlay()
{
	Super::BeginPlay();
}

void AInventoryCapsuleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInventoryCapsuleActor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AInventoryCapsuleActor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}

void AInventoryCapsuleActor::OrderInventoryCapsuleActor(FString Category)
{
	//Create the Potion and log its name
	/*APotion* Potion = ConcoctPotion(Category);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Concocting %s"), *Potion->GetPotionName()));
	*///Start the concoct process
	/*Potion->Boil();
	Potion->Bubble();
	Potion->Brew();
	Potion->Bottle();*/
	//Returns the created potion
	//return Potion;
	//Create the Potion and log its name
	/*AInventoryCapsuleActor* CapsuleActor; 
	CapsuleActor-> ConcoctInventoryCapsuleActor(Category);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Concocting %s"), CapsuleActor->GetInventoryCapsuleActor()));*/
	//Start the concoct process
	/*Potion->Boil();
	Potion->Bubble();
	Potion->Brew();
	Potion->Bottle();*/
	//Returns the created potion
	//return Potion;
}

//void AInventoryCapsuleActor::ConcoctInventoryCapsuleActor(FString CategoryCapsule)
//{
//	if (CategoryCapsule.Equals("Damage")) {
//		return GetWorld()->SpawnActor<AInventoryCapsuleActor>(AInventoryCapsuleActor::StaticClass());
//	}
//	else if (PotionSKU.Equals("Power")) {
//		return GetWorld()->SpawnActor<AInnerRealmPowerPotion>
//			(AInnerRealmPowerPotion::StaticClass());
//	}
//	else if (PotionSKU.Equals("Skill")) {
//		return GetWorld()->SpawnActor<AInnerRealmSkillPotion>
//			(AInnerRealmSkillPotion::StaticClass());
//	}
//	else return nullptr; //Return null if the string isn't valid
//}
	//return AInventoryCapsuleActor();
//}

void AInventoryCapsuleActor::GetInventoryCapsuleActor()
{
	//return AInventoryCapsuleActor();
}

