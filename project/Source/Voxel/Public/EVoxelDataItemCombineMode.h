#pragma once
#include "CoreMinimal.h"
#include "EVoxelDataItemCombineMode.generated.h"

UENUM()
enum class EVoxelDataItemCombineMode : int32 {
    Min,
    Max,
    Sum,
};

