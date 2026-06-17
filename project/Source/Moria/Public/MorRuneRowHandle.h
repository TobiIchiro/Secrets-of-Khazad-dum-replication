#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorRuneRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRuneRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorRuneRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorRuneRowHandle) { return 0; }

