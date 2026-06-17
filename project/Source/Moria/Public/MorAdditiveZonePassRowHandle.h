#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAdditiveZonePassRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAdditiveZonePassRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAdditiveZonePassRowHandle();
};

