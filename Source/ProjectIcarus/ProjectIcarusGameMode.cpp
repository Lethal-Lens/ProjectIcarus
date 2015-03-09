// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectIcarus.h"
#include "ProjectIcarusGameMode.h"
#include "ProjectIcarusHUD.h"
#include "ProjectIcarusCharacter.h"

AProjectIcarusGameMode::AProjectIcarusGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectIcarusHUD::StaticClass();
}
