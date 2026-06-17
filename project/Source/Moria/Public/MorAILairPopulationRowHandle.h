#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAILairPopulationRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAILairPopulationRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAILairPopulationRowHandle();
};

