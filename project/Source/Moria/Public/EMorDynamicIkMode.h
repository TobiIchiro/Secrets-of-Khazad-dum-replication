#pragma once
#include "CoreMinimal.h"
#include "EMorDynamicIkMode.generated.h"

UENUM(BlueprintType)
enum class EMorDynamicIkMode : uint8 {
    None,
    DragonIk,
    PowerIk,
    ControlRig,
};

