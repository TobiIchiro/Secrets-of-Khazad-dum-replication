#pragma once
#include "CoreMinimal.h"
#include "MorChallengeRowHandle.h"
#include "MorCountedChallenge.generated.h"

USTRUCT(BlueprintType)
struct FMorCountedChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    MORIA_API FMorCountedChallenge();
};

