// Fill out your copyright notice in the Description page of Project Settings.


#include "FGAIController.h"
#include "Perception/AIPerceptionComponent.h"


AFGAIController::AFGAIController()
{
	PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AFGAIController::OnPerceptionUpdated);
}


void AFGAIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Yellow, TEXT("AITargetPerception Updated"));
}

void AFGAIController::BeginPlay()
{

}

