#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAIPatrolRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPatrolRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAIPatrolRowHandle();
};

