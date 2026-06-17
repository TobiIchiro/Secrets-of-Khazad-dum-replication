#include "MorBubbleActivationManager.h"

UMorBubbleActivationManager::UMorBubbleActivationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxLoadingBubblesCount = 1;
    this->MaxActivatingBubblesCount = 2;
    this->MaxUnloadingBubblesCount = 1;
    this->AlowedHighPriorityBubbleLimitExceed = 1;
    this->bShouldClientActivateAllBubbles = false;
    this->InactivityDelayToActivateRespawnBubble = 60.00f;
    this->StaleDelayToUnloadBubble = 5.00f;
    this->ClientBubblePointBudget = 10000;
    this->ServerLowBubblePointBudget = 10000;
    this->ServerHighBubblePointBudget = 16000;
    this->CurrentBubbleLimit = 0;
    this->CurrentBubbleBudget = 0;
    this->InstancedMeshManager = NULL;
}


