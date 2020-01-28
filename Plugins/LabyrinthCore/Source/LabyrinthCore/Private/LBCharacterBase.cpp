// Fill out your copyright notice in the Description page of Project Settings.


#include "LBCharacterBase.h"

// Sets default values
ALBCharacterBase::ALBCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALBCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALBCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALBCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

