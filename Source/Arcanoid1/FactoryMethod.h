// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryCapsuleDamageActor.h"
#include "InventoryCapsulePowerActor.h"
#include "FactoryMethod.generated.h"

UCLASS()
class ARCANOID1_API AFactoryMethod : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactoryMethod();
	UFUNCTION()
		void CreatorCapsuleActor(FString CategoryCapsule);
	FString CategoryCapsula;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	UPROPERTY()
		class AInventoryCapsuleDamageActor* InventoryCapsuleDamage;
	UPROPERTY()
		class AInventoryCapsulePowerActor* InventoryCapsulePower;
public:	
	void SpawnNewCapsuleDamage();
	void SpawnNewCapsulePower();
	/*AInventoryCapsuleDamageActor* InventoryCapsuleDamage;
	AInventoryCapsulePowerActor* InventoryCapsulePower;*/
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
