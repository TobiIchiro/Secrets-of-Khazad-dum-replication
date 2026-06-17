#include "MorTorchComponent.h"

UMorTorchComponent::UMorTorchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlameMaterial = NULL;
    this->AkRtpc = NULL;
    this->FlameLength = 45.00f;
    this->FlameFollowRate = 0.20f;
    this->LerpErrorCorrectionDistSq = 600.00f;
    this->FlameP3FollowRateMultiplier = 0.30f;
    this->CurrentWSVelocity = 0.00f;
    this->RaycastMesh = NULL;
    this->FlameMID = NULL;
    this->AkComponent = NULL;
    this->MorPointLight = NULL;
    this->Owner = NULL;
}

void UMorTorchComponent::SetIsBurning(bool InIsBurning) {
}

void UMorTorchComponent::Init(UStaticMeshComponent* InRaycastMesh, UAkComponent* InAkComponent, UMorPointLightComponent* InMorPointLight) {
}


