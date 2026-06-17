#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorMapStoneDirectionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMapStoneDirectionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorMapStoneDirectionRowHandle();
};

