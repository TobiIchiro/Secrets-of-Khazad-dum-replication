#include "MorNpcAISingingComponent.h"

UMorNpcAISingingComponent::UMorNpcAISingingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EQSQueryTemplate = NULL;
    this->EvaluationInterval = 3.00f;
    this->ControllerOwner = NULL;
    this->VoiceComponent = NULL;
    this->MiningSongComponent = NULL;
}


