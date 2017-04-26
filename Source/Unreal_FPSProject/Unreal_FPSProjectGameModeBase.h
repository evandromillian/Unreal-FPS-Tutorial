// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "Unreal_FPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_FPSPROJECT_API AUnreal_FPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
	
	
};
