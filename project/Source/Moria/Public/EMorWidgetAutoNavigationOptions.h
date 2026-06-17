#pragma once
#include "CoreMinimal.h"
#include "EMorWidgetAutoNavigationOptions.generated.h"

UENUM(BlueprintType)
enum class EMorWidgetAutoNavigationOptions : uint8 {
    None,
    OverrideExisting,
    SetNextPrevious,
    PreventEscape = 4,
};

