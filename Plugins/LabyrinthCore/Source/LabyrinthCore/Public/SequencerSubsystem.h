// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelSequencePlayer.h"
#include "SequencerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class LABYRINTHCORE_API USequencerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Play(ULevelSequencePlayer* player);

	UFUNCTION(BlueprintCallable)
	void Stop();

	UFUNCTION(BlueprintCallable)
	void Pause();

	UFUNCTION(BlueprintCallable)
	void FastForward();

	UFUNCTION(BlueprintCallable)
	void Rewind();

private:
	UPROPERTY()
	ULevelSequencePlayer* SequencePlayer;

};
