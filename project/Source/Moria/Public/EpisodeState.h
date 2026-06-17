#pragma once
#include "CoreMinimal.h"
#include "EpisodeState.generated.h"

UENUM(BlueprintType)
enum EpisodeState {
    NotStarted,
    InProgress,
    Success,
    Failure,
};

