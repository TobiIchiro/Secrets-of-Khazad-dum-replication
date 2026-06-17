#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorChallengeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorChallengeRowHandle();
};

