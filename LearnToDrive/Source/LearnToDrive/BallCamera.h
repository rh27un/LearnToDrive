// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GolfBall.h"
#include "BallCamera.generated.h"

UCLASS()
class LEARNTODRIVE_API ABallCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallCamera();
	UPROPERTY(EditDefaultsOnly)
		UCameraComponent* camera;
	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* arrow;

	AGolfBall* ball;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Angle(float value);
	void Aim(float value);
	
};
