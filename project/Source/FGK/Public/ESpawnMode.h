#pragma once
#include "CoreMinimal.h"
#include "ESpawnMode.generated.h"

UENUM(BlueprintType)
enum class ESpawnMode : uint8 {
    Random,
    Grid,
    OffsetGrid,
};

