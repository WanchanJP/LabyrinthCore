// Fill out your copyright notice in the Description page of Project Settings.


#include "VoiceSubsystem.h"
#include "LbTypes.h"
#include "Kismet/GameplayStatics.h"

void UVoiceSubsystem::Play(const FName Label, const UDataTable* DataTable)
{
	if (IsValid(DataTable))
	{
		FCharacterVoice* CharacterVoice = DataTable->FindRow<FCharacterVoice>(Label, "");

		if (CharacterVoice && CharacterVoice->SoundCue)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), CharacterVoice->SoundCue);
		}
	}
}