#include "FGKSplineTracker.h"
#include "Components/SceneComponent.h"

AFGKSplineTracker::AFGKSplineTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->bTrackLocalPlayer = true;
    this->bCompareToEnd = true;
    this->bWorldUnits = true;
    this->CompareType = ESplineCompare::MAX;
}

void AFGKSplineTracker::SetTarget(AActor* InTarget) {
}


void AFGKSplineTracker::EnableSplineTrackingByName(FName SplineName, bool bEnableTracking) {
}

void AFGKSplineTracker::EnableSplineTracking(USplineComponent* Spline, bool bEnableTracking) {
}


