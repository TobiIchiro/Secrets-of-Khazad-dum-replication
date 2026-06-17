#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorBrewRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBrewRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorBrewRowHandle();
};

