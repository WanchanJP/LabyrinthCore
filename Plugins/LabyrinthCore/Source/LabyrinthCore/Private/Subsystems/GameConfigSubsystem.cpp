// Fill out your copyright notice in the Description page of Project Settings.


#include "GameConfigSubsystem.h"
#include "Kismet/GameplayStatics.h"

/*
UGameConfigSubsystem::UGameConfigSubsystem()
	: FrameRate(30)
	, bVariableFrameRate(true)
	, bMobileTonemapperFilm(true)
{
	SetFrameRate(FrameRate);
	SetMobileToneMapperFilm(bMobileTonemapperFilm);
}
*/

void UGameConfigSubsystem::SetFrameRate(const int32 frameRate)
{
	FrameRate = frameRate;

	FString MyCommandString = "t.MaxFPS ";
	FString Fps = FString::FromInt(FrameRate);
	FString Final = MyCommandString + Fps;

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (IsValid(PlayerController))
	{
		PlayerController->ConsoleCommand(Final);
	}
}

void UGameConfigSubsystem::AddFrameRate(const int32 AddValue)
{
	const int32 NewValue = FrameRate + AddValue;
	SetFrameRate(NewValue);
}

void UGameConfigSubsystem::SubFrameRate(const int32 SubValue)
{
	const int32 NewValue = FrameRate - SubValue;
	SetFrameRate(NewValue);
}

void UGameConfigSubsystem::SetMobileToneMapperFilm(const bool Value)
{
	bMobileTonemapperFilm = Value;

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	if (IsValid(PlayerController))
	{
		if (bMobileTonemapperFilm)
		{
			PlayerController->ConsoleCommand(TEXT("r.Mobile.TonemapperFilm 1"));
		}
		else
		{
			PlayerController->ConsoleCommand(TEXT("r.Mobile.TonemapperFilm 0"));
		}
	}
}

float UGameConfigSubsystem::ApplyValueAtFPS(const float Value)
{
	if (bVariableFrameRate)
	{
		return (Value * GetWorld()->GetDeltaSeconds() * static_cast<float>(FrameRate));
	}
	else
	{
		return Value;
	}
}