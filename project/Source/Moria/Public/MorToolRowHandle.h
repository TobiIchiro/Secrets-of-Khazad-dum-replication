#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorToolRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorToolRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorToolRowHandle();
};

