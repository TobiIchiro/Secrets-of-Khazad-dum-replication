#pragma once
#include "CoreMinimal.h"
#include "EVoxelCellularReturnType.generated.h"

UENUM(BlueprintType)
enum class EVoxelCellularReturnType : uint8 {
    CellValue,
    Distance,
    Distance2,
    Distance2Add,
    Distance2Sub,
    Distance2Mul,
    Distance2Div,
};

