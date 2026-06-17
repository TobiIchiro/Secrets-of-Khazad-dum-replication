#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneBubbleFilterRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneBubbleFilterRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneBubbleFilterRowHandle();
};

