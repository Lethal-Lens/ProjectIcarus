// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "ProjectIcarusGameMode.generated.h"

UENUM(BlueprintType)
enum EGameType
{
    E_FREE,
    E_CTF,
    E_DM
};

UCLASS(minimalapi)
class AProjectIcarusGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AProjectIcarusGameMode(const FObjectInitializer& ObjectInitializer);
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameType)
    TEnumAsByte<EGameType> TypeGame;
    
    virtual void BeginPlay() override;

};



