#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorStartingEquipmentOverrideRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorStartingEquipmentOverrideRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorStartingEquipmentOverrideRowHandle();
};

