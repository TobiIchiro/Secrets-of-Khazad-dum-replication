#include "MorBreakableFXComponent.h"

UMorBreakableFXComponent::UMorBreakableFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebrisLifetime = 5.00f;
    this->DustCloudSystem = NULL;
    this->NearestSurfaceSystem = NULL;
    this->NearestSurfaceNormalMinDotProduct = 0.25f;
}

void UMorBreakableFXComponent::SpawnRestoreDust(const FBoxSphereBounds& RestoredMeshBounds) {
}

void UMorBreakableFXComponent::SpawnDustCloud(const FBoxSphereBounds& CloudBounds) {
}


