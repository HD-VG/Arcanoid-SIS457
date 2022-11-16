// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryCapsuleActor.h"
#include "InventoryCapsulePowerActor.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID1_API AInventoryCapsulePowerActor : public AInventoryCapsuleActor
{
	GENERATED_BODY()
public:
	AInventoryCapsulePowerActor();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventoryCapsulePowerActor> CapsulePowerObj;

	AInventoryCapsulePowerActor* MyCapsulePower;
	FVector SpawnLocationCapsulePower = FVector(100.0f, 0.0f, 250.0f);
	FRotator SpawnRotatorCapsulePower = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfoCapsulePower;
};
