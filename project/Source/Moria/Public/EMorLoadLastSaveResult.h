#pragma once
#include "CoreMinimal.h"
#include "EMorLoadLastSaveResult.generated.h"

UENUM(BlueprintType)
enum class EMorLoadLastSaveResult : uint8 {
    PreparedSinglePlayer,
    PreparedMultiPlayer,
    NoPremiumSubscription,
    NoCharacters,
    NoWorlds,
    LogicError,
};

