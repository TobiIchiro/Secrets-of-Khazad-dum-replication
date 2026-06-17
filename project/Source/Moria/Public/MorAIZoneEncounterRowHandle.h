#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAIZoneEncounterRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIZoneEncounterRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorAIZoneEncounterRowHandle();
};

