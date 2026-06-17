#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorArchitectureRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorArchitectureRowHandle();
};

