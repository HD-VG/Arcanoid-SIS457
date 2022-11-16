// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryCapsuleActor.h"
#include "InventoryCapsuleComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARCANOID1_API UInventoryCapsuleComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryCapsuleComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY()
		TArray<AInventoryCapsuleActor*> CurrentInventory;

	UFUNCTION()
		int32 AddToInventory(AInventoryCapsuleActor* ActorToAdd);

	UFUNCTION()
		void RemoveFromInventory(AInventoryCapsuleActor* ActorToRemove);
		
};
