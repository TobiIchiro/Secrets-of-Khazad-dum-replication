#pragma once
#include "CoreMinimal.h"
#include "EMorBubblePriority.generated.h"

UENUM(BlueprintType)
enum class EMorBubblePriority : uint8 {
    None = 0,
    PlayerSpawn = 1,
    Zoomie,
    PlayerPosition,
    NeighborCell = 15,
    PlayerRespawn = 30,
    Unimportant = 254,
    Irrelevant,
    HighPriorityLimit = PlayerPosition,
    ActivationLimitOnZoomie = NeighborCell,
    ActivationLimitOnZoomieEditor = PlayerPosition,
    PrioritizedMakeVisibleLimit = NeighborCell,
    MaxValue = Irrelevant,
};

