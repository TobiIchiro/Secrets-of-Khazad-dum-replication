#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAIChallengeSpawnsRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIChallengeSpawnsRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAIChallengeSpawnsRowHandle();
};

