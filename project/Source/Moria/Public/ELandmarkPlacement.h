#pragma once
#include "CoreMinimal.h"
#include "ELandmarkPlacement.generated.h"

UENUM(BlueprintType)
enum class ELandmarkPlacement : uint8 {
    Normalized,
    Fixed,
    Random,
    RotateAndClamp,
};

