// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LBGameModeBase.generated.h"

UENUM(BlueprintType)
enum class ELBGameVersion : uint8
{
	Team,
	Master,
	MasterDebug,
	Core
};

/**
 * 
 */
UCLASS(BlueprintType)
class LABYRINTHCORE_API ALBGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
};
