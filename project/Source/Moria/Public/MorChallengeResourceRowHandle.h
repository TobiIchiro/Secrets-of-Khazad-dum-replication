#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorChallengeResourceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeResourceRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorChallengeResourceRowHandle();
};

