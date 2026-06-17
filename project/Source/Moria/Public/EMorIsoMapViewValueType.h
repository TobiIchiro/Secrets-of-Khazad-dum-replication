#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapViewValueType.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapViewValueType : uint8 {
    Absolute,
    Relative,
};

