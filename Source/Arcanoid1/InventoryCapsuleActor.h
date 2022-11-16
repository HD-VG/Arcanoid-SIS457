// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InventoryCapsuleActor.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID1_API AInventoryCapsuleActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AInventoryCapsuleActor();
	FString CategoryCapsule;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PickUp();
	virtual void PutDown(FTransform TargetLocation);
	void OrderInventoryCapsuleActor(FString Category);
	//void ConcoctInventoryCapsuleActor(FString CategoryCapsule);
	void GetInventoryCapsuleActor();
};
