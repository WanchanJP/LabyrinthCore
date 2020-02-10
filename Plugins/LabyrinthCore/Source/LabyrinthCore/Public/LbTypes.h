// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "Sound/SoundCue.h"
#include "LbTypes.generated.h"

/** Struct representing a slot for an item, shown in the UI */
USTRUCT(BlueprintType)
struct LABYRINTHCORE_API FCharacterVoice : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	FString Label;

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	FString Character;

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	FString Text1;

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	FString Text2;

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	float Duration;

	UPROPERTY(EditAnywhere, Category = "Character Voice")
	USoundCue* SoundCue;
};
