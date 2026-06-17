#include "GameplayAbilityTargetActor_Placement.h"

AGameplayAbilityTargetActor_Placement::AGameplayAbilityTargetActor_Placement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloorDistanceCheckDown = 150.00f;
    this->FloorDistanceCheckUp = 100.00f;
    this->MaxFloorBoxExtents = 120.00f;
    this->MaxHeight = 850.00f;
    this->MaxDepth = 850.00f;
    this->AboveGroundCameraMinAngle = 20.00f;
    this->MaxSnapDistance = 50.00f;
    this->MinSnapToSnapDotProduct = 0.00f;
    this->EdgeToEdgeBonus = 10.00f;
    this->EdgeToSurfaceBonus = 5.00f;
    this->SurfaceToEdgeBonus = 0.00f;
    this->SurfaceToSurfaceBonus = 0.00f;
    this->OccupiedSnapPenalty = 10.00f;
    this->AboveGroundDistanceCheck = 300.00f;
    this->MaxDebrisHeightAllowance = 10.00f;
    this->DefaultOverlapStepSize = 50.00f;
    this->ValidInitialScore = 0.00f;
    this->MarginallyStableInitialScore = -50.00f;
    this->UnstableInitialScore = -200.00f;
    this->InvalidInitialScore = -1000.00f;
    this->PriorityScoringWeight = 50.00f;
    this->OrientationScoringWeight = 50.00f;
    this->SnapDistanceScoringWeight = 1.00f;
    this->SameActorScoreBonus = 30.00f;
    this->VoxelScorePenalty = 35.00f;
    this->MinLocationDistanceDelta = 1.00f;
    this->MaxTargetDistance = 1000.00f;
    this->RecipeResultActor = NULL;
    this->DefaultDistance = 250.00f;
    this->MinForwardDistance = 100.00f;
    this->MaxForwardDistance = 400.00f;
    this->MaxLeftDistance = 1000.00f;
    this->MaxRightDistance = 1000.00f;
    this->PushPullAirDistance = 1000.00f;
    this->SnapRotateIncrement = 90.00f;
    this->FreePlaceRotateIncrement = 45.00f;
    this->SnapCooldownTime = 0.00f;
    this->SnapLerpSpeed = 2000.00f;
}

FMorPerformTraceResults AGameplayAbilityTargetActor_Placement::GetTraceResults() const {
    return FMorPerformTraceResults{};
}

AActor* AGameplayAbilityTargetActor_Placement::GetTargetedActor() const {
    return NULL;
}

AGameplayAbilityWorldReticle_Placement* AGameplayAbilityTargetActor_Placement::GetReticleActor() const {
    return NULL;
}


