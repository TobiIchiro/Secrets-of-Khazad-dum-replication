#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorZoneResourceLootPassRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneResourceLootPassRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorZoneResourceLootPassRowHandle();
};

