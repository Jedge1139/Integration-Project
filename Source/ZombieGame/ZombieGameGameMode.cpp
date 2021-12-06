// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZombieGameGameMode.h"
#include "ZombieGameCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ZombieStateBase.h"

AZombieGameGameMode::AZombieGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}


	PointsToWin = 15;


}

void AZombieGameGameMode::OnZombieHit() {
	
	if (AZombieStateBase* GS = Cast<AZombieStateBase>(GameState)) {
		
		GS->Points++;

		if (GS->Points >= PointsToWin) {
                  UE_LOG(LogTemp, Warning, TEXT("You Survived!"));
		
		} 
		else {
             UE_LOG(LogTemp, Warning, TEXT("You Killed A Zombie. %d remain"), GS->Points);

                
		}

	}

}
