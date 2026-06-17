#pragma once
#include "CoreMinimal.h"
#include "EMorItemHotbarBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorItemHotbarBehavior : uint8 {
    None,
    Equip,
    Use,
};

