#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorCosmeticConvertRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCosmeticConvertRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorCosmeticConvertRowHandle();
};

