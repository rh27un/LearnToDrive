// Fill out your copyright notice in the Description page of Project Settings.

#include "GolfStart.h"
#include "BallCamera.h"

// Sets default values
AGolfStart::AGolfStart()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	startArea = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartArea"));
	UStaticMesh* meshToUse = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/BasicShapes/Cube")));
	if (meshToUse) {
		startArea->SetStaticMesh(meshToUse);
		float scale = 1.f;
		startArea->SetWorldScale3D(FVector(scale, scale, scale));
	}
	startArea->SetCollisionProfileName(TEXT("OverlapAll"));
	startArea->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	startArea->OnComponentBeginOverlap.AddDynamic(this, &AGolfStart::OnBeginOverlap);
	startArea->OnComponentEndOverlap.AddDynamic(this, &AGolfStart::OnEndOverlap);
}

void AGolfStart::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) {
	bAcceptInput = true;
}

void AGolfStart::OnEndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex) {
	bAcceptInput = false;
}

// Called when the game starts or when spawned
void AGolfStart::BeginPlay()
{
	Super::BeginPlay();
	EnableInput(GetWorld()->GetFirstPlayerController());
	InputComponent->BindAction("Start Golfing", IE_Pressed, this, &AGolfStart::StartGolfing);
}

// Called every frame
void AGolfStart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGolfStart::StartGolfing() {
	if (bAcceptInput) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Space Pressed"));
		if (GetWorld()) {
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;
			spawnParams.Instigator = Instigator;
			spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AActor* ball = GetWorld()->SpawnActor<AActor>(ballClass, GetActorLocation(), FRotator::ZeroRotator, spawnParams);
			AActor* camActor = GetWorld()->SpawnActor <AActor>(cameraClass, GetActorLocation(), FRotator::ZeroRotator, spawnParams);
			//	UCameraComponent* camComp = Cast<UCameraComponent>(camActor->GetRootComponent());

			
			if (camActor) {
				if (Cast<ABallCamera>(camActor) && Cast<AGolfBall>(ball))
					Cast<ABallCamera>(camActor)->ball = Cast<AGolfBall>(ball);
				FViewTargetTransitionParams Params;

				GetWorld()->GetFirstPlayerController()->SetViewTarget(camActor, Params);
			}
		}
		Destroy();
	}
}

