#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorChallengeRecipeFragmentRewardRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeRecipeFragmentRewardRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorChallengeRecipeFragmentRewardRowHandle();
};

