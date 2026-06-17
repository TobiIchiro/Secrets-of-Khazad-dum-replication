#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorItemSetRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorItemSetRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorItemSetRowHandle();
};

