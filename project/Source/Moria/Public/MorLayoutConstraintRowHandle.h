#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLayoutConstraintRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLayoutConstraintRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLayoutConstraintRowHandle();
};

