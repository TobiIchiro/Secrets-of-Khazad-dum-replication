#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorUniqueNpcRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorUniqueNpcRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorUniqueNpcRowHandle();
};

