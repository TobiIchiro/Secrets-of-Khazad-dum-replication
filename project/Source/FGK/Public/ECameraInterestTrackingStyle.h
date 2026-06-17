#pragma once
#include "CoreMinimal.h"
#include "ECameraInterestTrackingStyle.generated.h"

UENUM(BlueprintType)
enum class ECameraInterestTrackingStyle : uint8 {
    Time,
    DistanceFromInterest,
    Spline,
};

