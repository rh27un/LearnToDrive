// Fill out your copyright notice in the Description page of Project Settings.

#include "LearnToDriveGameModeBase.h"
#include "GolfCharacter.h"


ALearnToDriveGameModeBase::ALearnToDriveGameModeBase() {
	DefaultPawnClass = AGolfCharacter::StaticClass();
}
