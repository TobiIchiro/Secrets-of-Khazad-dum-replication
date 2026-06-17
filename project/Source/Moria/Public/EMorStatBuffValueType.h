#pragma once
#include "CoreMinimal.h"
#include "EMorStatBuffValueType.generated.h"

UENUM(BlueprintType)
enum class EMorStatBuffValueType : uint8 {
    Absolute,
    Percent,
};

