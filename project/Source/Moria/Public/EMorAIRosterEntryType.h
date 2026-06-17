#pragma once
#include "CoreMinimal.h"
#include "EMorAIRosterEntryType.generated.h"

UENUM(BlueprintType)
enum class EMorAIRosterEntryType : uint8 {
    Permanent,
    UntilDeath,
    UntilSleep,
};

