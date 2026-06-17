#pragma once
#include "CoreMinimal.h"
#include "EInterfacePlugStatus.generated.h"

UENUM(BlueprintType)
enum class EInterfacePlugStatus : uint8 {
    OrePlugAllocated,
    OrePlugPotential,
    DirtPlugAllocated,
};

