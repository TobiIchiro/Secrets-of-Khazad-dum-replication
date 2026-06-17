#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapViewValueChange.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapViewValueChange : uint8 {
    Transition,
    Immediate,
    ImmediateIfAtTarget,
};

