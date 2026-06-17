#pragma once
#include "CoreMinimal.h"
#include "EMorChallengeRecipeFragmentRewardPriority.h"
#include "MorChallengeRecipeFragmentRewardsRequestRow.generated.h"

USTRUCT(BlueprintType)
struct FMorChallengeRecipeFragmentRewardsRequestRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorChallengeRecipeFragmentRewardPriority, int32> RewardCounts;
    
    MORIA_API FMorChallengeRecipeFragmentRewardsRequestRow();
};

