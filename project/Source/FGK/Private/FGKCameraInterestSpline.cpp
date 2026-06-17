#include "FGKCameraInterestSpline.h"
#include "Components/SplineComponent.h"

AFGKCameraInterestSpline::AFGKCameraInterestSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
    this->DeadZone = 0.10f;
}


