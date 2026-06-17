#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorSurfaceContextRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSurfaceContextRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorSurfaceContextRowHandle();
};

