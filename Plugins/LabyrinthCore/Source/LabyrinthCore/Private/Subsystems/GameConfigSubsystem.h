// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameConfigSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class UGameConfigSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	//UGameConfigSubsystem();

	UFUNCTION(BlueprintCallable, Category = "Game Config")
	void SetFrameRate(const int32 frameRate = 30);

	UFUNCTION(BlueprintPure, Category = "Game Config")
	int32 GetFrameRate() const { return FrameRate; }

	UFUNCTION(BlueprintCallable, Category = "Game Config")
	void AddFrameRate(const int32 AddValue);

	UFUNCTION(BlueprintCallable, Category = "Game Config")
	void SubFrameRate(const int32 SubValue);


	UFUNCTION(BlueprintCallable, Category = "Game Config")
	void SetVariableFrameRate(const bool Value) { bVariableFrameRate = Value; }

	UFUNCTION(BlueprintPure, Category = "Game Config")
	bool GetVariableFrameRate() const { return bVariableFrameRate; }


	UFUNCTION(BlueprintCallable, Category = "Game Config")
	void SetMobileToneMapperFilm(const bool Value);

	UFUNCTION(BlueprintPure, Category = "Game Config")
	bool GetMobileToneMapperFilm() const { return bMobileTonemapperFilm; }

	UFUNCTION(BlueprintPure, Category = "Game Config")
	float ApplyValueAtFPS(const float Value);

private:
	UPROPERTY()
	int32 FrameRate;

	UPROPERTY()
	bool bVariableFrameRate;

	UPROPERTY()
	bool bMobileTonemapperFilm;
};
