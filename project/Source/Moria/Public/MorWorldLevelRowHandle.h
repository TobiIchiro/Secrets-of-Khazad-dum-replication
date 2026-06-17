#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorWorldLevelRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLevelRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorWorldLevelRowHandle();
};

