#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorChallengeRecipeFragmentRewardPriority.h"
#include "MorAnyItemRowHandle.h"
#include "MorChallengeRowHandle.h"
#include "MorLoreRowHandle.h"
#include "MorZoneRowHandle.h"
#include "MorChallengeRecipeFragmentRewardDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeRecipeFragmentRewardDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorChallengeRowHandle> ChallengeSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> ZoneSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorChallengeRecipeFragmentRewardPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SandboxUnlockOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCardCountFromNumFragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorAnyItemRowHandle, int32> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> RewardLore;
    
    FMorChallengeRecipeFragmentRewardDefinition();
};

