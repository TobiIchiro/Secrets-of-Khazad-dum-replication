#pragma once
#include "CoreMinimal.h"
#include "EMorSubtitleOptions.generated.h"

UENUM(BlueprintType)
enum class EMorSubtitleOptions : uint8 {
    OFF,
    ON,
    KhuzdulOnly,
    Count,
};

