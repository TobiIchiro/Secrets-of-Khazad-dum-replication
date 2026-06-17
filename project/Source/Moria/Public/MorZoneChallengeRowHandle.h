#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneChallengeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneChallengeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneChallengeRowHandle();
};

