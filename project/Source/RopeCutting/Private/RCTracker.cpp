#include "RCTracker.h"

URCTracker::URCTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RCT_SplineComponent = NULL;
    this->RCT_PositionNumber = 0;
    this->RCT_SplineMeshComponent = NULL;
    this->RCT_PrimarySphereColl = NULL;
    this->RCT_SecondarySphereColl = NULL;
    this->RCT_PhysicsConstraint = NULL;
    this->IsFirstOfCutLength = false;
    this->IsLastOfCutLength = false;
}

void URCTracker::SetSplineMesh(USplineMeshComponent* SplineMeshIn) {
}

void URCTracker::SetSplineComponent(USplineComponent* SplineComponentIn) {
}

void URCTracker::SetSecondarySphereCollisionName(FName SecondarySphereCollisionNameIn) {
}

void URCTracker::SetSecondarySphereCollision(USphereComponent* SecondarySphereCollisionIn) {
}

void URCTracker::SetPrimarySphereCollisionName(FName PrimarySphereCollisionNameIn) {
}

void URCTracker::SetPrimarySphereCollision(USphereComponent* PrimarySphereCollisionIn) {
}

void URCTracker::SetPositionNumber(int32 PositionNumberIn) {
}

void URCTracker::SetPhysicsConstraint(UPhysicsConstraintComponent* PrimaryPhysicsConstraintIn) {
}

void URCTracker::SetIsLastOfCutLength(bool IsLastOfCutLengthIn) {
}

void URCTracker::SetIsFirstOfCutLength(bool IsFirstOfCutLengthIn) {
}

USplineMeshComponent* URCTracker::GetSplineMesh() {
    return NULL;
}

USplineComponent* URCTracker::GetSplineComponent() {
    return NULL;
}

FName URCTracker::GetSecondarySphereCollisionName() {
    return NAME_None;
}

USphereComponent* URCTracker::GetSecondarySphereCollision() {
    return NULL;
}

FName URCTracker::GetPrimarySphereCollisionName() {
    return NAME_None;
}

USphereComponent* URCTracker::GetPrimarySphereCollision() {
    return NULL;
}

int32 URCTracker::GetPositionNumber() {
    return 0;
}

UPhysicsConstraintComponent* URCTracker::GetPhysicsConstraint() {
    return NULL;
}

bool URCTracker::GetIsLastOfCutLength() {
    return false;
}

bool URCTracker::GetIsFirstOfCutLength() {
    return false;
}


