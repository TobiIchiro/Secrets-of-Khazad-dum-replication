#pragma once
#include "CoreMinimal.h"
#include "EBubbleState.generated.h"

UENUM(BlueprintType)
enum class EBubbleState : uint8 {
    Inactive,
    Loading,
    MakingVisible,
    Loaded,
    BegunPlay,
    Realizing,
    Realized,
    SaveSystemDoWork,
    SetupFallbackContainer,
    FinishActivation,
    BuildingVoxels,
    BuildingNavMesh,
    ReadyToActivate,
    GameplayActive,
    Unloading,
    MinServerOpenState = BuildingVoxels,
    MaxServerOpenState = GameplayActive,
    MinClientOpenState = GameplayActive,
    MaxClientOpenState = GameplayActive,
};

