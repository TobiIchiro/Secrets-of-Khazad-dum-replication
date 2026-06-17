#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorNPCActivityRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCActivityRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorNPCActivityRowHandle();
};

