#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorCharacterGridWeightRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCharacterGridWeightRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorCharacterGridWeightRowHandle();
};

