#pragma once
#include "CoreMinimal.h"
#include "EMorChallengeRecipeFragmentRewardPriority.generated.h"

UENUM(BlueprintType)
enum class EMorChallengeRecipeFragmentRewardPriority : uint8 {
    High,
    Low,
    Bonus,
};

