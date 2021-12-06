// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ZombieGameGameMode.h"
#include "Zombie.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");

	SetRootComponent(BulletMesh);

	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>("BulletMovement");
    BulletMovement-> InitialSpeed = 2000.f;
	BulletMovement-> MaxSpeed = 2000.f;

	OnActorHit.AddDynamic(this, &ABullet::OnBulletHit);

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABullet::OnBulletHit(AActor* SelfActor, AActor* OtherActor,FVector NormalImpulse, const FHitResult& Hit) {
	
	if (AZombie* Zombie = Cast<AZombie>(OtherActor)) {
		if (AZombieGameGameMode* GM = Cast<AZombieGameGameMode>(GetWorld()->GetAuthGameMode())) {
            GM->OnZombieHit();

		}
  
	}
    

}

