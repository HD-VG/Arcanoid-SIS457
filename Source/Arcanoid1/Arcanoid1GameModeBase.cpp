// Copyright Epic Games, Inc. All Rights Reserved.


#include "Arcanoid1GameModeBase.h"
#include "Brick.h"
#include "Paddle.h"


void AArcanoid1GameModeBase::BeginPlay()
{
	//implemetar el factory metod 
	Super::BeginPlay();
	SpawnBrick();
	//patron singleton
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
	AFactoryMethod* NewFactoryMethod = GetWorld()->SpawnActor<AFactoryMethod>(AFactoryMethod::StaticClass());
	if (NewFactoryMethod)
	{
		//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
		//NewFactoryMethod->CreatorCapsuleActor("Damage");
		FactoryMethod = NewFactoryMethod;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *FactoryMethod->GetName()));
	}
	
	//

	////Spawn Builder and Engineer
	//HotelBuilder = GetWorld()->SpawnActor<AHotelLodgingBuilder>(AHotelLodgingBuilder::StaticClass());
	//Engineer = GetWorld()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass());
	////Set the Builder for the Engineer and create the buildings
	//Engineer->SetLodgingBuilder(HotelBuilder);
	//Engineer->ConstructLodging();
	////Get the Engineer's Lodging and Logs the created buildings
	//ALodging* Lodging = Engineer->GetLodging();
	//Lodging->LodgingCharacteristics();

	//Create the Shops
	//APotionShop* OuterRealmShop = GetWorld() -> SpawnActor<AOuterRealmPotionShop>(AOuterRealmPotionShop::StaticClass());
	//APotionShop* InnerRealmShop = GetWorld() -> SpawnActor<AInnerRealmPotionShop>(AInnerRealmPotionShop::StaticClass());
	//Create an Outer Health Potion and log its name
	//APotion* Potion = OuterRealmShop->OrderPotion("Health");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));

	//patron factory method  cambiar potion por capsule y capsuledamagey capsulepower

	/*AInventoryCapsuleActor* InventoryCapsuleActor1 = GetWorld()->SpawnActor<AInventoryCapsuleActor>(AInventoryCapsuleActor::StaticClass());
	AInventoryCapsuleActor* InventoryCapsuleActor2 = GetWorld()->SpawnActor<AInventoryCapsuleActor>(AInventoryCapsuleActor::StaticClass());*/


	/*AInventoryCapsuleDamageActor* CapsuleDamage=InventoryCapsuleActor1->OrderInventoryCapsuleActor("Health");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("CapsuleDamage is %s"), *AInventoryCapsuleActor->GetInventoryCapsuleActore()));
	*/
	/*
	APotion* Potion = OuterRealmShop->OrderPotion("Health");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Potion is %s"), *Potion->GetPotionName()));*/
}

void AArcanoid1GameModeBase::SpawnBrick()//crear objetos en tiempo de ejecucion
{
	UWorld* const World = GetWorld();
	World->SpawnActor<ABrick>(FVector(400.0f, -400.0f, 200), FRotator::ZeroRotator);

}
//
//void AArcanoid1GameModeBase::CreatorInventoryCapsuleActor(FString CategoryCapsule)
//{
//	AInventoryCapsuleDamageActor* InventoryCapsuleDamage = GetWorld()->SpawnActor<AInventoryCapsuleDamageActor>(AInventoryCapsuleDamageActor::StaticClass());
//	
//	//if (CategoryCapsule.Equals("Damage")) {
//		//InventoryCapsuleDamage = SpawnedInventoryCapsuleDamage;
//		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando capsule damage %s"), InventoryCapsuleDamage->GetName())); 
//	//}
//
//}

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

