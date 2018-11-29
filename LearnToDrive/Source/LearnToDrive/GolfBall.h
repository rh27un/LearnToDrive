// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "GolfBall.generated.h"

UCLASS()
class LEARNTODRIVE_API AGolfBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGolfBall();

	UStaticMeshComponent* staticMeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bPowerMode = false;
	bool bRolling = false;

	FVector strikeDirection;

	float golfPower;
	float strikeTime;
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	AActor* playerPawn;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION(BlueprintCallable)
		void SetForwardVector(FVector fwd);
	
	void HitBall();

	UPROPERTY(EditDefaultsOnly, Category = Golf)
		float powerMod;

	UPROPERTY(EditDefaultsOnly, Category = Golf)
		float maxPower;
	UPROPERTY(EditDefaultsOnly, Category = Golf)
		float swingSpeed;
	UPROPERTY(EditDefaultsOnly, Category = Golf)
		UMaterialInterface* GolfMat;

	bool IsPowerMode();
};
