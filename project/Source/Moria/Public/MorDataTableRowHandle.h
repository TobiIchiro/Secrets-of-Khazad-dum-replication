#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableRowHandle.h"
#include "MorDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDataTableRowHandle : public FFGKDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorDataTableRowHandle();
};

