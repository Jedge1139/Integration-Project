// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ZombieStateBase.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIEGAME_API AZombieStateBase : public AGameStateBase
{
	GENERATED_BODY()



public:

	AZombieStateBase();

	int32 Points;
	
};
