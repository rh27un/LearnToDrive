// Fill out your copyright notice in the Description page of Project Settings.

#include "GolfCharacter.h"


// Sets default values
AGolfCharacter::AGolfCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGolfCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGolfCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGolfCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	
	PlayerInputComponent->BindAxis("Forward", this, &AGolfCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &AGolfCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Mouse X", this, &AGolfCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Mouse Y", this, &AGolfCharacter::AddControllerPitchInput);
	//InputComponent->BindAction("Hit Ball", IE_Pressed, this, &AGolfCharacter::HitBall);

}

void AGolfCharacter::MoveForward(float Value) {
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AGolfCharacter::MoveRight(float Value) {
	// Find out which way is "right" and record that the player wants to move that way.

	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AGolfCharacter::HitBall() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Space Pressed"));
	Controller->SetIgnoreLookInput(false);
	Controller->SetIgnoreMoveInput(false);
}

