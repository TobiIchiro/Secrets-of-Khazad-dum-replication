#include "MorPathFollowingComponent.h"

UMorPathFollowingComponent::UMorPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PendingJumpLinkCheckInterval = 0.50f;
    this->bUseHackJump = false;
    this->LaunchForceMagnitude = 200.00f;
    this->LaunchAdditionalZ = 3.00f;
}


