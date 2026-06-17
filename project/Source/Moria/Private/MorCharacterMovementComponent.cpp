#include "MorCharacterMovementComponent.h"

UMorCharacterMovementComponent::UMorCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProjectNavMeshWalking = true;
    this->bProjectNavMeshOnBothWorldChannels = true;
    this->TeeterAbility = NULL;
    this->bCanTeeterWhenSprinting = false;
    this->bCanTeeterWhenCrouching = false;
    this->bCanTeeterWhenWalking = true;
    this->TeeterHoldDisableTime = 0.20f;
    this->TeeterMinHeight = 200.00f;
}


