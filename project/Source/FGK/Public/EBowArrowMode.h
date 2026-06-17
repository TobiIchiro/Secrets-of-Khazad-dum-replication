#pragma once
#include "CoreMinimal.h"
#include "EBowArrowMode.generated.h"

UENUM(BlueprintType)
enum class EBowArrowMode : uint8 {
    Hidden,
    Held,
    Nocked,
    Ready,
};

