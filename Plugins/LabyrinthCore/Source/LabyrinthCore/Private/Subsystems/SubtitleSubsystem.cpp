// Fill out your copyright notice in the Description page of Project Settings.


#include "SubtitleSubsystem.h"
#include "LbTypes.h"
//#include "UObject/ConstructorHelpers.h"
//#include "Kismet/GameplayStatics.h"
//#include "Blueprint/UserWidget.h"

void USubtitleSubsystem::Setup(const TSubclassOf<ULbSubtitleWidget> SubtitleWidgetClass)
{
	if (SubtitleWidgetClass)
	{
		if (!SubtitleWidget)
		{
			SubtitleWidget = CreateWidget<ULbSubtitleWidget>(GetWorld(), SubtitleWidgetClass); // Create Widget
			if (!SubtitleWidget)
				return;
			SubtitleWidget->AddToViewport(); // Add it to the viewport so the Construct() method in the UUserWidget:: is run.
			//SubtitleWidget->SetVisibility(ESlateVisibility::Hidden); // Set it to hidden so its not open on spawn.
		}
	}
}

void USubtitleSubsystem::Play(const FName Label, const UDataTable* DataTable)
{
	if (IsValid(SubtitleWidget))
	{
		FCharacterVoice* CharacterVoice = DataTable->FindRow<FCharacterVoice>(Label, "");

		if (CharacterVoice)
		{
			SubtitleWidget->Play(CharacterVoice->Text1, CharacterVoice->Text2, CharacterVoice->Duration);
		}
	}
}

void USubtitleSubsystem::Stop()
{
	if (IsValid(SubtitleWidget))
	{
		SubtitleWidget->Stop();
	}
}