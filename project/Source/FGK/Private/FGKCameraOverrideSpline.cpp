#include "FGKCameraOverrideSpline.h"
#include "Components/SplineComponent.h"

AFGKCameraOverrideSpline::AFGKCameraOverrideSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
}


