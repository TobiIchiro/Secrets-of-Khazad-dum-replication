#include "FGKTargetingComponent.h"
#include "Net/UnrealNetwork.h"

UFGKTargetingComponent::UFGKTargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Target = NULL;
    this->LastMeleeTarget = NULL;
    this->CharacterOwner = NULL;
    this->TargetAcquisitionMaxDistance = 10000.00f;
    this->TargetRangeEquivalentTo90Degrees = 5000.00f;
    this->TargetRenderedWithinSeconds = 0.20f;
    this->bSoftTargetInMoveDirection = true;
    this->TargetSwitchAngleThreshold = 45.00f;
    this->bTargetSwitchOnMove = true;
    this->bMoveTargetSwitchCharacters = false;
    this->bMoveTargetSwitchWhileAiming = false;
    this->TargetSwitchScreenDistEquivalentTo90Degrees = 0.50f;
    this->PotentialTarget = NULL;
    this->MaxTargetAcquisitionMaxDistance = 10000.00f;
    this->CameraTarget = NULL;
    this->KilledTarget = NULL;
}

void UFGKTargetingComponent::SetTarget(UFGKTargetableComponent* NewTarget) {
}

void UFGKTargetingComponent::Server_TargetLockInternal_Implementation(bool bValue) {
}

void UFGKTargetingComponent::Server_SetTargetPositionInternal_Implementation(int32 TargetIdx, FVector Position) {
}

void UFGKTargetingComponent::Server_ChangeTargetInternal_Implementation(UFGKTargetableComponent* NewTarget) {
}

void UFGKTargetingComponent::Multicast_TargetLockInternal_Implementation(bool bValue) {
}

void UFGKTargetingComponent::Multicast_ChangeTargetInternal_Implementation(UFGKTargetableComponent* NewTarget) {
}

bool UFGKTargetingComponent::IsLockedOnTarget() const {
    return false;
}

void UFGKTargetingComponent::GetTargetResultsForIndexedTarget(int32 TargetIdx, FFGKTargetDisplayInfo& OutResults) {
}

UFGKTargetableComponent* UFGKTargetingComponent::GetTarget() const {
    return NULL;
}

UFGKTargetableComponent* UFGKTargetingComponent::GetPotentialTarget() const {
    return NULL;
}

UFGKTargetableComponent* UFGKTargetingComponent::GetLastMeleeTarget() const {
    return NULL;
}

void UFGKTargetingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKTargetingComponent, ForcedTargets);
    DOREPLIFETIME(UFGKTargetingComponent, WorldTargets);
}


