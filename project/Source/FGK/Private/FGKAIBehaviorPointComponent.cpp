#include "FGKAIBehaviorPointComponent.h"

UFGKAIBehaviorPointComponent::UFGKAIBehaviorPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bFilterAny = false;
    this->Priority = EFGKAIBehaviorPointPriority::Low;
    this->MaxNumberOfUsersAllowed = 1;
    this->CooldownTime = 45.00f;
    this->ReuseCooldownTime = 0.00f;
    this->bUseStandardInteractState = true;
    this->InteractState = NULL;
    this->GeneralState = NULL;
}


