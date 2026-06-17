#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFGKDistanceType.h"
#include "EFGKInterpolationType.h"
#include "EFGKMovementDirection.h"
#include "FGKMathLibrary.generated.h"

class UCapsuleComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class FGK_API UFGKMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKMathLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WithinDistance(const FVector& Start, const FVector& End, float Distance, EFGKDistanceType Type);
    
    UFUNCTION(BlueprintCallable)
    static FVector VDampen(FVector Current, FVector Goal, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static FTransform TransformSub(const FTransform& T1, const FTransform& T2);
    
    UFUNCTION(BlueprintCallable)
    static FTransform TransformAdd(const FTransform& T1, const FTransform& T2);
    
    UFUNCTION(BlueprintCallable)
    static FVector SplineEvalPos(const FVector& StartPos, const FVector& StartTangent, const FVector& EndPos, const FVector& EndTangent, float A);
    
    UFUNCTION(BlueprintCallable)
    static FRotator RDampen(FRotator Current, FRotator Goal, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static FQuat QDampen(FQuat Current, FQuat Goal, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static bool LineSphereIntersection2D(const FVector& LineOrigin, const FVector& LineDirection, const FVector& SphereCenter, float SphereRadius, float& ResultDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool LineSphereIntersection(const FVector& LineOrigin, const FVector& LineDirection, const FVector& SphereCenter, float SphereRadius, float& ResultDistance);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetYawOnlyQuat(FQuat Quat3D);
    
    UFUNCTION(BlueprintCallable)
    static float GetStandardDeviation(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static float GetMedianAverage(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static float GetMeanAverage(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static float GetInterpolatedValue(float Factor, EFGKInterpolationType interpType, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceSquared(const FVector& Start, const FVector& End, EFGKDistanceType Type);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistance(const FVector& Start, const FVector& End, EFGKDistanceType Type);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetDeltaRotClamp180(FRotator Current, FRotator Goal);
    
    UFUNCTION(BlueprintCallable)
    static float GetDampeningFactor(float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCapsuleLocationFromBase(const FVector& BaseLocation, const float ZOffset, UCapsuleComponent* Capsule);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCapsuleBaseLocation(const float ZOffset, UCapsuleComponent* Capsule);
    
    UFUNCTION(BlueprintCallable)
    static float FDampenAngle(float Current, float Goal, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static float FDampen(float Current, float Goal, float DeltaTime, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    static EFGKMovementDirection CalculateQuadrant(const EFGKMovementDirection Current, const float FRThreshold, const float FLThreshold, const float BRThreshold, const float BLThreshold, const float Buffer, const float Angle);
    
    UFUNCTION(BlueprintCallable)
    static bool AngleInRange(const float Angle, const float MinAngle, const float MaxAngle, const float Buffer, const bool IncreaseBuffer);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetweenVectors(FVector v1, FVector v2);
    
};

