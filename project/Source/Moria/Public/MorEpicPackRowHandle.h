#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorEpicPackRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorEpicPackRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorEpicPackRowHandle();
};

