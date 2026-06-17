#pragma once
#include "CoreMinimal.h"
#include "EMorIsoMapVerticalInterfaceHatchVisibility.generated.h"

UENUM(BlueprintType)
enum class EMorIsoMapVerticalInterfaceHatchVisibility : uint8 {
    Always,
    BottomHidesTop,
    TopHidesBottom,
};

