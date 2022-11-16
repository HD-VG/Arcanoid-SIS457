// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryCapsuleActor.h"
#include "InventoryCapsuleDamageActor.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID1_API AInventoryCapsuleDamageActor : public AInventoryCapsuleActor
{
	GENERATED_BODY()

public:
	
	AInventoryCapsuleDamageActor();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventoryCapsuleDamageActor> CapsuleDamageObj;

	AInventoryCapsuleDamageActor* MyCapsuleDamage;
	FVector SpawnLocationCapsuleDamage = FVector(-100.0f, 0.0f, 250.0f);
	FRotator SpawnRotatorCapsuleDamage = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfoCapsuleDamage;

};
