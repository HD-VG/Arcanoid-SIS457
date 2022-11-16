// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryCapsulePowerActor.h"

AInventoryCapsulePowerActor::AInventoryCapsulePowerActor()
{
	CategoryCapsule = "Power";
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
	if (!MyCapsulePower) {
		MyCapsulePower = nullptr;
	}

	if (CapsulePowerObj) {
		MyCapsulePower = GetWorld()->SpawnActor<AInventoryCapsulePowerActor>(CapsulePowerObj, SpawnLocationCapsulePower, SpawnRotatorCapsulePower, SpawnInfoCapsulePower);
	}
}
