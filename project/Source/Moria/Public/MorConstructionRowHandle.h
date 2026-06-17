#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorConstructionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorConstructionRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorConstructionRowHandle) { return 0; }

