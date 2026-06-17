#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOrcTrapRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOrcTrapRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOrcTrapRowHandle();
};

