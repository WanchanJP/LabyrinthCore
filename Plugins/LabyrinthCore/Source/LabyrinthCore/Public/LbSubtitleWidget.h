// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LbSubtitleWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, ClassGroup = UI)
class LABYRINTHCORE_API ULbSubtitleWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character Voice")
	void Play(const FString& Text1, const FString& Text2, float Duration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character Voice")
	void Stop();
};
