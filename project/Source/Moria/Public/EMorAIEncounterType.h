#pragma once
#include "CoreMinimal.h"
#include "EMorAIEncounterType.generated.h"

UENUM(BlueprintType)
enum class EMorAIEncounterType : uint8 {
    Reinforcements,
    HuntingParty,
    FallbackSettings,
};

