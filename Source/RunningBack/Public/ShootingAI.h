// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "RunningBackPawn.h"
#include "AICharacter.h"
#include "ShootingAI.generated.h"

UCLASS()
class RUNNINGBACK_API AShootingAI : public AAICharacter
{
	GENERATED_BODY()

public:
	FTimerHandle FireDelayHandle;

	// Sets default values for this character's properties
	AShootingAI();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	void Shoot();

	void DelayedShoot();

	ARunningBackPawn* FindEnemy();
	
};
