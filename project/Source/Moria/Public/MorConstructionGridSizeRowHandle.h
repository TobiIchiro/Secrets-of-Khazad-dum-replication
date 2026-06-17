#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorConstructionGridSizeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionGridSizeRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorConstructionGridSizeRowHandle();
};

