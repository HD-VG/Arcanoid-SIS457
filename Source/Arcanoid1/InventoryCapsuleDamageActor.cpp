// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryCapsuleDamageActor.h"

AInventoryCapsuleDamageActor::AInventoryCapsuleDamageActor()
{
	CategoryCapsule = "Damage";
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);

	if (!MyCapsuleDamage) {
		MyCapsuleDamage = nullptr;
	}

	if (CapsuleDamageObj) {
		MyCapsuleDamage = GetWorld()->SpawnActor<AInventoryCapsuleDamageActor>(CapsuleDamageObj, SpawnLocationCapsuleDamage, SpawnRotatorCapsuleDamage, SpawnInfoCapsuleDamage);
	}
}
