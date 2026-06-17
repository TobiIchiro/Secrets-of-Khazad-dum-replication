#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLoreRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLoreRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLoreRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorLoreRowHandle) { return 0; }

