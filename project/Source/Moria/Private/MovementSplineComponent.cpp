#include "MovementSplineComponent.h"

UMovementSplineComponent::UMovementSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinSpeed = 100.00f;
    this->MaxSpeed = 500.00f;
    this->MaxAcceleration = 1000.00f;
    this->MaxBrakingDeceleration = 2048.00f;
    this->ExitSpeed = 200.00f;
    this->ExitJumpBoost2D = 0.00f;
    this->bFaceMovementDirection = false;
    this->CapsuleReferencePoint = -1.00f;
    this->HorizontalOffset = 0.00f;
    this->PaddingStart = 0.00f;
    this->PaddingEnd = 0.00f;
    this->SnapToSplineSpeed = 500.00f;
    this->SnapToSplineDistanceMin = 5.00f;
}


