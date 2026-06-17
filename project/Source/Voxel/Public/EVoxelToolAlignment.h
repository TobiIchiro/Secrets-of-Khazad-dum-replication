#pragma once
#include "CoreMinimal.h"
#include "EVoxelToolAlignment.generated.h"

UENUM(BlueprintType)
enum class EVoxelToolAlignment : uint8 {
    Surface,
    View,
    Ground,
    Up,
};

