// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Paddle.h"
#include "PaddlePlayerController.generated.h"

/**
 * 
 */
class ABall;
class AInventoryCapsuleDamageActor;
class AInventoryCapsulePowerActor;
UCLASS()
class ARCANOID1_API APaddlePlayerController : public APlayerController
{
	GENERATED_BODY()

	APaddlePlayerController();

	UFUNCTION()
		virtual void SetupInputComponent() override;
protected:
	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);
	void Launch();

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABall> BallObj;
	

	ABall* MyBall;
	FVector SpawnLocationBall = FVector(10.0f, 0.0f, 40.0f);
	FRotator SpawnRotatorBall = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfoBall;

public:
	void SpawnNewBall();
	
};
