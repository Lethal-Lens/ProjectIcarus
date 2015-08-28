// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectIcarus.h"
#include "ProjectIcarusGameMode.h"
#include "ProjectIcarusHUD.h"
#include "ProjectIcarusCharacter.h"
#include "ProjectIcarusPlayerController.h"

AProjectIcarusGameMode::AProjectIcarusGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
    static ConstructorHelpers::FClassFinder<APlayerController> PlayerController(TEXT("/Game/FirstPerson/Blueprints/FirstPersonConroller"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
    
    PlayerControllerClass = PlayerController.Class;

	// use our custom HUD class
	HUDClass = AProjectIcarusHUD::StaticClass();
    
    TypeGame == EGameType::E_FREE;
}


AProjectIcarusGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Black, "Hello");
}