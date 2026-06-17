#pragma once
#include "CoreMinimal.h"
#include "MorChallengeRecipeFragmentRewardsRequestRow.h"
#include "MorChallengeRecipeFragmentRewardsRequest.generated.h"

USTRUCT(BlueprintType)
struct FMorChallengeRecipeFragmentRewardsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredHighCardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMorChallengeRecipeFragmentRewardsRequestRow> OtherRewardsCount;
    
    MORIA_API FMorChallengeRecipeFragmentRewardsRequest();
};

