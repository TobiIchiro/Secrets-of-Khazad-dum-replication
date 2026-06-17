#include "MorGameplayLightReflectorComponent.h"
#include "Net/UnrealNetwork.h"

UMorGameplayLightReflectorComponent::UMorGameplayLightReflectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsPrism = false;
    this->PrismRadius = 500.00f;
    this->UseBounceLight = false;
    this->UseLightMesh = false;
    this->LightProducerTraceDistTolerance = 5.00f;
    this->MaxRaycastDistance = 2000.00f;
    this->LightIntensityMultiplier = 0.20f;
    this->LightSourceDetectionRadius = 200.00f;
    this->bDrawLightIntersectionDetectionBp = false;
    this->LightIntersectionSphereDetectionRadius = 50.00f;
    this->SpotLightLengthAddon = 120.00f;
    this->SpotLightOuterRadiusMin = 7.00f;
    this->SpotLightOuterRadiusMax = 60.00f;
    this->SpotLightOuterRadiusDistanceThresholdMin = 10.00f;
    this->SpotLightOuterRadiusDistanceThresholdMax = 1000.00f;
    this->LightshaftRadius = 50.00f;
    this->ReflectLightFunctionMaterial = false;
    this->BounceSurfaceDistance = 80.00f;
    this->ReflectLightForward = false;
    this->CheckInputAngle = false;
    this->InputAngle = 90.00f;
    this->CheckReflectingSpotLightOuterAngle = true;
    this->CheckReflectingLightObstruction = true;
    this->InterpolationRate = 25.00f;
    this->RotationRate = 25.00f;
    this->UseRotationAnglesMinMax = false;
    this->ClampPitch = false;
    this->ViewPitchMin = -44.90f;
    this->ViewPitchMax = 44.90f;
    this->ClampYaw = false;
    this->ViewYawMin = 0.00f;
    this->ViewYawMax = 360.00f;
    this->ClampRoll = false;
    this->ViewRollMin = 0.00f;
    this->ViewRollMax = 0.00f;
    this->DeltaRotationSnap = false;
    this->DeltaRotationSnapTolerance = 5.00f;
}

void UMorGameplayLightReflectorComponent::SetBlockApplyReceivedReplication(const bool Toggle) {
}

void UMorGameplayLightReflectorComponent::RotateReflectorTo(const FRotator& TargetRotation) {
}

FRotator UMorGameplayLightReflectorComponent::RotateReflector(const FVector Direction) {
    return FRotator{};
}

void UMorGameplayLightReflectorComponent::OnRep_ReflectorWorldRotation() {
}

bool UMorGameplayLightReflectorComponent::IsReflectingLight() const {
    return false;
}

bool UMorGameplayLightReflectorComponent::IsOverlappingLightProducer(bool bCheckReceivingAngles, bool bMustProduceLight) {
    return false;
}

bool UMorGameplayLightReflectorComponent::IsIntersectingSpotLight(bool bCheckReceivingAngles, const USpotLightComponent* SpotLight, const FVector& LightHitLocation) const {
    return false;
}

bool UMorGameplayLightReflectorComponent::IsIntersectingReflectorLight(bool bCheckReceivingAngles, const UMorGameplayLightReflectorComponent* OtherReflector) const {
    return false;
}

bool UMorGameplayLightReflectorComponent::IsIntersectingAnyOtherReflector(bool bCheckOtherPrisms, bool bCheckReceivingAngles, bool bMustProduceLight) {
    return false;
}

FRotator UMorGameplayLightReflectorComponent::GetLastReflectionDirection() {
    return FRotator{};
}

bool UMorGameplayLightReflectorComponent::GetIsPrism() const {
    return false;
}

bool UMorGameplayLightReflectorComponent::GetHasHitReflectionLocation() const {
    return false;
}

void UMorGameplayLightReflectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorGameplayLightReflectorComponent, ReflectorWorldRotation);
}


