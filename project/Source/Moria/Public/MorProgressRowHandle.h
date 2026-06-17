#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorProgressRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProgressRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorProgressRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorProgressRowHandle) { return 0; }

