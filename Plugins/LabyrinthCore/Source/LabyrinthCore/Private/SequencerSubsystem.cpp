// Fill out your copyright notice in the Description page of Project Settings.


#include "SequencerSubsystem.h"
#include "Misc/QualifiedFrameTime.h"
#include "Engine/World.h"

static const float SEQUENCER_SKIP_TIME = 2.0f;

void USequencerSubsystem::Play(ULevelSequencePlayer* player)
{
	if (IsValid(player))
	{
		SequencePlayer = player;
		SequencePlayer->Play();
	}
}

void USequencerSubsystem::Stop()
{
	if (IsValid(SequencePlayer))
	{
		SequencePlayer->Stop();
	}
}

void USequencerSubsystem::Pause()
{
	if (IsValid(SequencePlayer))
	{
		if (SequencePlayer->IsPlaying())
		{
			SequencePlayer->Pause();
		}
		else
		{
			SequencePlayer->Play();
		}
	}
}

void USequencerSubsystem::FastForward()
{
	if (IsValid(SequencePlayer))
	{
		float current = SequencePlayer->GetCurrentTime().AsSeconds();
		float skip = SequencePlayer->IsPlaying() ? SEQUENCER_SKIP_TIME : (SEQUENCER_SKIP_TIME + 1.0f);
		float target = current + (GetWorld()->GetDeltaSeconds() * skip);

		SequencePlayer->JumpToSeconds(target);
	}
}

void USequencerSubsystem::Rewind()
{
	if (IsValid(SequencePlayer))
	{
		float current = SequencePlayer->GetCurrentTime().AsSeconds();
		float skip = SequencePlayer->IsPlaying() ? (SEQUENCER_SKIP_TIME + 2.0f) : (SEQUENCER_SKIP_TIME + 1.0f);
		float target = current - (GetWorld()->GetDeltaSeconds() * skip);

		SequencePlayer->JumpToSeconds(target);
	}
}