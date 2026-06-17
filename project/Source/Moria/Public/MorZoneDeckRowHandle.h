#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneDeckRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneDeckRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneDeckRowHandle();
};

