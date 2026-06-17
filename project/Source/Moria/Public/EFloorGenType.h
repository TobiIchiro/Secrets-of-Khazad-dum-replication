#pragma once
#include "CoreMinimal.h"
#include "EFloorGenType.generated.h"

UENUM(BlueprintType)
enum class EFloorGenType : uint8 {
    None,
    OctTree,
    TriangleFill,
};

