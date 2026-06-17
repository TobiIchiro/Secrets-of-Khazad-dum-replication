#pragma once
#include "CoreMinimal.h"
#include "ENeighborDirection.generated.h"

UENUM(BlueprintType)
enum class ENeighborDirection : uint8 {
    None,
    Vertical,
    Horizontal,
    Both,
};

