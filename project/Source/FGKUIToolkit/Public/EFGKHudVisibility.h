#pragma once
#include "CoreMinimal.h"
#include "EFGKHudVisibility.generated.h"

UENUM(BlueprintType)
enum class EFGKHudVisibility : uint8 {
    NoHuds,
    UnderlayHudsOnly,
    OverlayHudsOnly,
    SpecificHudsOnly = 4,
    AllHuds = 3,
};

