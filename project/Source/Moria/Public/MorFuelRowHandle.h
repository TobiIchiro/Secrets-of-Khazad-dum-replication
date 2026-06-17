#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorFuelRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFuelRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorFuelRowHandle();
};

