#pragma once
#include "CoreMinimal.h"
#include "EMorSiegeRole.generated.h"

UENUM(BlueprintType)
enum class EMorSiegeRole : uint8 {
    Breacher,
    Artillery,
    Hunter,
    Vandal,
};

