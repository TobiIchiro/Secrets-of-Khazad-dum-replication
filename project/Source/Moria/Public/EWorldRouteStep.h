#pragma once
#include "CoreMinimal.h"
#include "EWorldRouteStep.generated.h"

UENUM(BlueprintType)
enum class EWorldRouteStep : uint8 {
    Preferred,
    Normal,
    Avoided,
    Restricted,
    Forbidden,
};

