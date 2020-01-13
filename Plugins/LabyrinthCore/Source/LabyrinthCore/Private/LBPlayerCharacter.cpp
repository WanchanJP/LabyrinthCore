// Fill out your copyright notice in the Description page of Project Settings.


#include "LBPlayerCharacter.h"

// Sets default values
ALBPlayerCharacter::ALBPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALBPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALBPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALBPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

