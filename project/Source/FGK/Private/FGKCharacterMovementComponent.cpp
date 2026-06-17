#include "FGKCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

UFGKCharacterMovementComponent::UFGKCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FGKCharacterOwner = NULL;
    this->SmoothedLeanFB = 0.00f;
    this->SmoothedLeanLR = 0.00f;
    this->PrevMovementMode = MOVE_None;
    this->PrevCustomMode = 0;
    this->LastTimeOnGround = 0.00f;
    this->LeaveGroundZ = 0.00f;
    this->DefaultGravityScale = 1.00f;
    this->LastFloorDistanceOnServer = 0.00f;
}

void UFGKCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKCharacterMovementComponent, LastFloorDistanceOnServer);
}


