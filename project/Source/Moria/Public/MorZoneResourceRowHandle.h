#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneResourceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneResourceRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneResourceRowHandle();
};

