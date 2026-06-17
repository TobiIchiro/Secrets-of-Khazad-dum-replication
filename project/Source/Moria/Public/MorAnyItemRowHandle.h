#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAnyItemRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAnyItemRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAnyItemRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorAnyItemRowHandle) { return 0; }

