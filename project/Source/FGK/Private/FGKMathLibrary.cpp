#include "FGKMathLibrary.h"

UFGKMathLibrary::UFGKMathLibrary() {
}

bool UFGKMathLibrary::WithinDistance(const FVector& Start, const FVector& End, float Distance, EFGKDistanceType Type) {
    return false;
}

FVector UFGKMathLibrary::VDampen(FVector Current, FVector Goal, float DeltaTime, float Smoothing) {
    return FVector{};
}

FTransform UFGKMathLibrary::TransformSub(const FTransform& T1, const FTransform& T2) {
    return FTransform{};
}

FTransform UFGKMathLibrary::TransformAdd(const FTransform& T1, const FTransform& T2) {
    return FTransform{};
}

FVector UFGKMathLibrary::SplineEvalPos(const FVector& StartPos, const FVector& StartTangent, const FVector& EndPos, const FVector& EndTangent, float A) {
    return FVector{};
}

FRotator UFGKMathLibrary::RDampen(FRotator Current, FRotator Goal, float DeltaTime, float Smoothing) {
    return FRotator{};
}

FQuat UFGKMathLibrary::QDampen(FQuat Current, FQuat Goal, float DeltaTime, float Smoothing) {
    return FQuat{};
}

bool UFGKMathLibrary::LineSphereIntersection2D(const FVector& LineOrigin, const FVector& LineDirection, const FVector& SphereCenter, float SphereRadius, float& ResultDistance) {
    return false;
}

bool UFGKMathLibrary::LineSphereIntersection(const FVector& LineOrigin, const FVector& LineDirection, const FVector& SphereCenter, float SphereRadius, float& ResultDistance) {
    return false;
}

FQuat UFGKMathLibrary::GetYawOnlyQuat(FQuat Quat3D) {
    return FQuat{};
}

float UFGKMathLibrary::GetStandardDeviation(const TArray<float>& Array) {
    return 0.0f;
}

float UFGKMathLibrary::GetMedianAverage(const TArray<float>& Array) {
    return 0.0f;
}

float UFGKMathLibrary::GetMeanAverage(const TArray<float>& Array) {
    return 0.0f;
}

float UFGKMathLibrary::GetInterpolatedValue(float Factor, EFGKInterpolationType interpType, UCurveFloat* Curve) {
    return 0.0f;
}

float UFGKMathLibrary::GetDistanceSquared(const FVector& Start, const FVector& End, EFGKDistanceType Type) {
    return 0.0f;
}

float UFGKMathLibrary::GetDistance(const FVector& Start, const FVector& End, EFGKDistanceType Type) {
    return 0.0f;
}

FRotator UFGKMathLibrary::GetDeltaRotClamp180(FRotator Current, FRotator Goal) {
    return FRotator{};
}

float UFGKMathLibrary::GetDampeningFactor(float DeltaTime, float Smoothing) {
    return 0.0f;
}

FVector UFGKMathLibrary::GetCapsuleLocationFromBase(const FVector& BaseLocation, const float ZOffset, UCapsuleComponent* Capsule) {
    return FVector{};
}

FVector UFGKMathLibrary::GetCapsuleBaseLocation(const float ZOffset, UCapsuleComponent* Capsule) {
    return FVector{};
}

float UFGKMathLibrary::FDampenAngle(float Current, float Goal, float DeltaTime, float Smoothing) {
    return 0.0f;
}

float UFGKMathLibrary::FDampen(float Current, float Goal, float DeltaTime, float Smoothing) {
    return 0.0f;
}

EFGKMovementDirection UFGKMathLibrary::CalculateQuadrant(const EFGKMovementDirection Current, const float FRThreshold, const float FLThreshold, const float BRThreshold, const float BLThreshold, const float Buffer, const float Angle) {
    return EFGKMovementDirection::Forward;
}

bool UFGKMathLibrary::AngleInRange(const float Angle, const float MinAngle, const float MaxAngle, const float Buffer, const bool IncreaseBuffer) {
    return false;
}

float UFGKMathLibrary::AngleBetweenVectors(FVector v1, FVector v2) {
    return 0.0f;
}


