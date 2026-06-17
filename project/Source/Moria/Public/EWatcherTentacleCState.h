#pragma once
#include "CoreMinimal.h"
#include "EWatcherTentacleCState.generated.h"

UENUM(BlueprintType)
enum class EWatcherTentacleCState : uint8 {
    CSt_WatcherTentacle_FromBody,
    CSt_WatcherTentacle_StandardAttackAnticipate,
    CSt_WatcherTentacle_StandardAttackSlash,
};

