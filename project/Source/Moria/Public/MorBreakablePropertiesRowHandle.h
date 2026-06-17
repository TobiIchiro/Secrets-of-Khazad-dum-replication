#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorBreakablePropertiesRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakablePropertiesRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorBreakablePropertiesRowHandle();
};

