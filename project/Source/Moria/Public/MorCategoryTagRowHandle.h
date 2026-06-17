#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorCategoryTagRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCategoryTagRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorCategoryTagRowHandle();
};

