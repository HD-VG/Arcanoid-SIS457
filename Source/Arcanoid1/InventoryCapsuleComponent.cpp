// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryCapsuleComponent.h"

// Sets default values for this component's properties
UInventoryCapsuleComponent::UInventoryCapsuleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryCapsuleComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryCapsuleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int32 UInventoryCapsuleComponent::AddToInventory(AInventoryCapsuleActor* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UInventoryCapsuleComponent::RemoveFromInventory(AInventoryCapsuleActor* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

