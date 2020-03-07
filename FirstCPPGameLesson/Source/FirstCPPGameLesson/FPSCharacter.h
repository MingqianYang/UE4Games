// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FIRSTCPPGAMELESSON_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()
		
public:
	// Sets default values for this character's properties
	AFPSCharacter();

	// can be editied in bule print, world outliner, or in yor game
	UPROPERTY(EditAnywhere, Category = "Weapon")
		float weaponRange{1000};// curly bracket {} is used to initialize variable 

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void fireWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FHitResult instantShot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
