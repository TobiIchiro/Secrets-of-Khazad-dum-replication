#pragma once
#include "CoreMinimal.h"
#include "EMorZoneToastAppearance.generated.h"

UENUM(BlueprintType)
enum class EMorZoneToastAppearance : uint8 {
    None,
    ManualTrigger,
    Automatic,
};

