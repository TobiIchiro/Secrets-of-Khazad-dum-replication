#include "MorDirectHazardController.h"

UMorDirectHazardController::UMorDirectHazardController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OurAbilitySystem = NULL;
    this->bIsActiveByTimer = true;
    this->ActivationInTime = NULL;
    this->ActivationInTimePeriod = 4.00f;
    this->ActivationInTimeValue = 0.50f;
    this->NotifyPreActivationValue = 0.40f;
    this->bCanBeBlockedByObstacle = false;
    this->CoverCheckPeriod = 1.00f;
    this->EffectToApply = NULL;
    this->bRemoveEffectWhenLeavingArea = true;
    this->MaximumVerticalDistance = -1.00f;
}

void UMorDirectHazardController::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UMorDirectHazardController::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


