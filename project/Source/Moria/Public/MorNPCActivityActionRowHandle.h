#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCActivityActionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCActivityActionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCActivityActionRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorNPCActivityActionRowHandle) { return 0; }

