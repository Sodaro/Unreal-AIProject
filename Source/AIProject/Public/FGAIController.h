// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "FGAIController.generated.h"

/**
 * 
 */
class UAIPerceptionComponent;
UCLASS(Blueprintable)
class AIPROJECT_API AFGAIController : public AAIController
{
	GENERATED_BODY()

	AFGAIController();

	UPROPERTY(EditDefaultsOnly)
	UAIPerceptionComponent* PerceptionComp = nullptr;

	UFUNCTION()
	void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

protected:
	virtual void BeginPlay() override;

};
