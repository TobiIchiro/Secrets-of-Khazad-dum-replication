#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorBGMRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBGMRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorBGMRowHandle();
};

