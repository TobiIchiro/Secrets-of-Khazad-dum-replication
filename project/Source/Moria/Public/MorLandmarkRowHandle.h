#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorLandmarkRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorLandmarkRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorLandmarkRowHandle();
};

