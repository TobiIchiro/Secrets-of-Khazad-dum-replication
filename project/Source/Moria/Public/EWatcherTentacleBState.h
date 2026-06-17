#pragma once
#include "CoreMinimal.h"
#include "EWatcherTentacleBState.generated.h"

UENUM(BlueprintType)
enum class EWatcherTentacleBState : uint8 {
    BSt_WatcherTentacle_FromBody,
    BSt_WatcherTentacle_StandardAttackAnticipate,
    BSt_WatcherTentacle_StandardAttackSlash,
};

