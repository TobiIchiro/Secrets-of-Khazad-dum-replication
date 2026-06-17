#include "VoxelInvokerWithPredictionComponent.h"

UVoxelInvokerWithPredictionComponent::UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnablePrediction = false;
    this->PredictionTime = 1.00f;
}


