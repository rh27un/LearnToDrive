// Fill out your copyright notice in the Description page of Project Settings.

#include "BallCamera.h"


// Sets default values
ABallCamera::ABallCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(RootComponent);

	arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/VREditor/TransformGizmo/TranslateArrowHandle")));
	if (meshToUse) {
		arrow->SetStaticMesh(meshToUse);
		arrow->SetCollisionProfileName(TEXT("NoCollision"));
	}
	arrow->SetupAttachment(RootComponent);
	
	
}

// Called when the game starts or when spawned
void ABallCamera::BeginPlay()
{
	Super::BeginPlay();
	EnableInput(GetWorld()->GetFirstPlayerController());
	InputComponent->BindAxis("Forward", this, &ABallCamera::Angle);
	InputComponent->BindAxis("Right", this, &ABallCamera::Aim);
	InputComponent->BindAction("Hit Ball", IE_Pressed, this, &ABallCamera::HitBall);
}

// Called every frame
void ABallCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (ball) {
		SetActorLocation(ball->GetActorLocation());
		if(arrow)
		ball->SetForwardVector(arrow->GetForwardVector());
	}
}

void ABallCamera::Angle(float value)
{

	FRotator deltaRot = FRotator(value, 0.f, 0.f);
	arrow->AddRelativeRotation(deltaRot);
	
}

void ABallCamera::Aim(float value)
{
	FRotator deltaRot = FRotator(0.f, value, 0.f);
	SetActorRotation(GetActorRotation() + deltaRot);
}

void ABallCamera::HitBall() {
	
	if (ball->IsPowerMode()) {
		arrow->DestroyComponent();
	}
	ball->HitBall();
}