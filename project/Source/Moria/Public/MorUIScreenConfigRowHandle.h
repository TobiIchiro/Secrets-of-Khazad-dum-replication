#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorUIScreenConfigRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorUIScreenConfigRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorUIScreenConfigRowHandle();
};

