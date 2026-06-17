#pragma once
#include "CoreMinimal.h"
#include "MorChallengeTrailCellParameters.h"
#include "ProxyLocator.h"
#include "MorChallengeTrailsInCell.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeTrailsInCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FProxyLocator, FMorChallengeTrailCellParameters> TrailParams;
    
    FMorChallengeTrailsInCell();
};

