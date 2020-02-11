// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DataTable.h"
//#include "LbSubtitleWidget.h"
#include "SubtitleSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class LABYRINTHCORE_API USubtitleSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Setup(const TSubclassOf<ULbSubtitleWidget> SubtitleWidgetClass);

	UFUNCTION(BlueprintCallable)
	void Play(const FName Label, const UDataTable* DataTable);

	UFUNCTION(BlueprintCallable)
	void Stop();

private:
	UPROPERTY()
	ULbSubtitleWidget* SubtitleWidget;
};
