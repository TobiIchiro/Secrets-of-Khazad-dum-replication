#include "FGKAITargetingComponent.h"

UFGKAITargetingComponent::UFGKAITargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HostileTargetQueryTemplate = NULL;
    this->NeutralTargetQueryTemplate = NULL;
    this->FriendlyTargetQueryTemplate = NULL;
    this->ControllerOwner = NULL;
    this->PerceptionComponent = NULL;
    this->EvaluationInterval = 1.00f;
}

void UFGKAITargetingComponent::OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}


