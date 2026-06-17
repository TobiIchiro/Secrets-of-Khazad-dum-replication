#pragma once
#include "CoreMinimal.h"
#include "EPathfindingAlgorithm.generated.h"

UENUM(BlueprintType)
enum class EPathfindingAlgorithm : uint8 {
    AStar,
    LazyThetaStar,
    ThetaStar,
};

