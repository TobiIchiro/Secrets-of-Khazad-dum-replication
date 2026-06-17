#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneFilterRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneFilterRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneFilterRowHandle();
};

