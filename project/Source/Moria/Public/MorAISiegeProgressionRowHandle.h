#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAISiegeProgressionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAISiegeProgressionRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAISiegeProgressionRowHandle();
};

