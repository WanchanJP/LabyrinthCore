// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DataTable.h"
#include "VoiceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class LABYRINTHCORE_API UVoiceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void Play(const FName Label, const UDataTable* DataTable);

};
