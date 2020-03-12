// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UltimateGameMode.h"
#include "Target.h"
#include "Engine/World.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	SetRootComponent(BulletMesh);

	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>("BulletMovement");
	BulletMovement->InitialSpeed = 2000.f;
	BulletMovement->MaxSpeed = 2000.f;

	//delegate, when the bullet hit something, it will do somthing in the funciton OnBulletHit
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

void ABullet::OnBulletHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (ATarget* Target = Cast<ATarget>(OtherActor))
	{
		if (AUltimateGameMode* GM = Cast<AUltimateGameMode>(GetWorld()->GetAuthGameMode()))
		{
			GM->OnTargetHit();
		}
		Target->Destroy();

		// dont destory it immediately, but marked it to be destroyed
		Destroy();
	}
	//
}

