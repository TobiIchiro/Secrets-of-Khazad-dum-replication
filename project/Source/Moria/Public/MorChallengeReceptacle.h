#pragma once
#include "CoreMinimal.h"
#include "MorResourceReceptacle.h"
#include "MorChallengeReceptacle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorChallengeReceptacle : public AMorResourceReceptacle {
    GENERATED_BODY()
public:
    AMorChallengeReceptacle(const FObjectInitializer& ObjectInitializer);

};

