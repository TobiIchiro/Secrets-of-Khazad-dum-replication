#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorCalloutTargetRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCalloutTargetRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorCalloutTargetRowHandle();
};

