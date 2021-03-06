// Fill out your copyright notice in the Description page of Project Settings.

#include "GolfBall.h"
#include "Kismet/GameplayStatics.h"

//press space, place ball, take away character control (do this in golfstart)
	//probably cycle states from first person, aiming, and hitting.
//aim with wsad probably
//press space to start stroke
//golfing power increases from zero to 1, then back down to zero (shm?)
//press space again to hit, apply current golfing power to ball.
//camera follows ball?
//if golfing power hits zero again, you fuck up hitting the ball and it just kinda rolls.

// Sets default values
AGolfBall::AGolfBall()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	staticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticComponent"));
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/BasicShapes/Sphere")));
	if (meshToUse) {
		staticMeshComponent->SetStaticMesh(meshToUse);
		float scale = 0.1f;
		staticMeshComponent->SetWorldScale3D(FVector(scale, scale, scale));
		staticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
		staticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		staticMeshComponent->SetNotifyRigidBodyCollision(true);
		staticMeshComponent->OnComponentHit.AddDynamic(this, &AGolfBall::OnHit);
		staticMeshComponent->SetSimulatePhysics(true);
		staticMeshComponent->SetLinearDamping(1.f);
	}
	RootComponent = staticMeshComponent;
}

// Called when the game starts or when spawned
void AGolfBall::BeginPlay()
{
	Super::BeginPlay();
	strikeDirection = FVector(0.f, 0.f, 1.f);
	golfPower = 0.f;
	staticMeshComponent->SetMaterial(0, GolfMat);
	playerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);
}

// Called every frame
void AGolfBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bPowerMode) {
		strikeTime += DeltaTime;
		golfPower = ((-FMath::Cos(strikeTime * swingSpeed) + 1.f) / 2.f) * maxPower;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Golf Power: %f"), golfPower));
		if (!FMath::IsNearlyZero(strikeTime, 0.1f)) {
			if (FMath::IsNearlyZero(golfPower, 0.0001f)) {
				HitBall();
			}
		}
	} if (bRolling) {
		//
	}
}

void AGolfBall::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit) {
	
	if (!OtherActor->ActorHasTag("Start")) {
		if(GetVelocity().Size() < 100.f)
			staticMeshComponent->AddForce(-GetVelocity() * GetVelocity().Size() / 10);
		if (GetVelocity().Size() < 20.f) {
			staticMeshComponent->SetSimulatePhysics(false);
			FViewTargetTransitionParams Params;
			GetWorld()->GetFirstPlayerController()->SetViewTarget(playerPawn, Params);
		}
	}
}

void AGolfBall::SetForwardVector(FVector fwd) {
	strikeDirection = fwd;
}

void AGolfBall::HitBall() {
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Space Pressed"));
	//
	
	if (GetVelocity().Size() < 10.f) {
		if (!bPowerMode) {
			bRolling = false;
			bPowerMode = true;
			strikeTime = 0.f;
			staticMeshComponent->SetSimulatePhysics(false);
		} else {
			staticMeshComponent->SetSimulatePhysics(true);
			bPowerMode = false;
			staticMeshComponent->AddImpulse(strikeDirection * powerMod);// *golfPower);
		}
	}
}

bool AGolfBall::IsPowerMode() {
	return bPowerMode;
}

