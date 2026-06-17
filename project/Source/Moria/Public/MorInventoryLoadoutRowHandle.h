#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorInventoryLoadoutRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorInventoryLoadoutRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorInventoryLoadoutRowHandle();
};

