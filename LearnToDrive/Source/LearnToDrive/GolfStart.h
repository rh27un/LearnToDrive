// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "GolfStart.generated.h"

UCLASS()
class LEARNTODRIVE_API AGolfStart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGolfStart();

	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bAcceptInput = false;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = GolfStart)
		TSubclassOf<class AActor> ballClass;
	UPROPERTY(EditDefaultsOnly, Category = GolfStart)
		TSubclassOf<class AActor> cameraClass;
	UPROPERTY(EditAnywhere, Category = GolfStart)
		UStaticMeshComponent* startArea;

	void StartGolfing();

};
