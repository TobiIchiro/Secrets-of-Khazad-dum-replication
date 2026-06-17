#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FMorZoneRowHandle) { return 0; }

