#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAIPopulationRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPopulationRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAIPopulationRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorAIPopulationRowHandle) { return 0; }

