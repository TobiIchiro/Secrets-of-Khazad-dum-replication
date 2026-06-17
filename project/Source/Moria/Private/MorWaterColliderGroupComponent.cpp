#include "MorWaterColliderGroupComponent.h"

UMorWaterColliderGroupComponent::UMorWaterColliderGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionSphereRadius = 10.00f;
    this->MinColliderSpeed = 1.00f;
    this->MaxColliderSpeed = 600.00f;
    this->bEnableDebugDraw = false;
    this->InitialTriggerDelay = 0.50f;
    this->EmitterType = EWaterParticleEmitterType::SourceSkeletalMesh;
    this->MaxAllowedActiveVisualEffects = -1;
    this->WaterColliderTriggerBoxManager = NULL;
}

void UMorWaterColliderGroupComponent::OnCharacterSkeletalMeshUpdated() {
}


