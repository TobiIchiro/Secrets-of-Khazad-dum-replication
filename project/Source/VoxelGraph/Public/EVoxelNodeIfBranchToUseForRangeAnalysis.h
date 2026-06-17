#pragma once
#include "CoreMinimal.h"
#include "EVoxelNodeIfBranchToUseForRangeAnalysis.generated.h"

UENUM(BlueprintType)
enum class EVoxelNodeIfBranchToUseForRangeAnalysis : uint8 {
    None,
    UseTrue,
    UseFalse,
};

