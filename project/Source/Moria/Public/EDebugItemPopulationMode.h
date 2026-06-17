#pragma once
#include "CoreMinimal.h"
#include "EDebugItemPopulationMode.generated.h"

UENUM(BlueprintType)
enum class EDebugItemPopulationMode : uint8 {
    None,
    AllInFirst,
    ItemPerContainer,
};

