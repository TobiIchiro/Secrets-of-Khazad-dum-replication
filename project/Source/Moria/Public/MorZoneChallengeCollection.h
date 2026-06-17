#pragma once
#include "CoreMinimal.h"
#include "MorChallengeElement.h"
#include "ProxyLocator.h"
#include "MorZoneChallengeCollection.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneChallengeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FProxyLocator, FMorChallengeElement> ChallengeElements;
    
    FMorZoneChallengeCollection();
};

