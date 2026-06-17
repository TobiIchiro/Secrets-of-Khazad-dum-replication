#pragma once
#include "CoreMinimal.h"
#include "EMorBlockedPlayersListState.generated.h"

UENUM(BlueprintType)
enum class EMorBlockedPlayersListState : uint8 {
    Inactive,
    Loading,
    Prepared,
    PreparedSaving,
};

