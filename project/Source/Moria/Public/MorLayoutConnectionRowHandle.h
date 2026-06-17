#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLayoutConnectionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLayoutConnectionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLayoutConnectionRowHandle();
};

