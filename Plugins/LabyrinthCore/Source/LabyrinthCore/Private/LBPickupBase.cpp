// Fill out your copyright notice in the Description page of Project Settings.


#include "LBPickupBase.h"

// Sets default values
ALBPickupBase::ALBPickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	// タグコンテナにタグを足す
	GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("ActorType.Pickup")));

}

// Called when the game starts or when spawned
void ALBPickupBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALBPickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}