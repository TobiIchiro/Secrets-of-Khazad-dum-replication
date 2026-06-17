#pragma once
#include "CoreMinimal.h"
#include "EMorBubbleActivationState.generated.h"

UENUM(BlueprintType)
enum class EMorBubbleActivationState : uint8 {
    Inactive,
    Loading,
    Loaded,
    InitializingBubbleInstance,
    SpawningInterfacePassages,
    CreatingMeshInstances,
    CreatingLevelBreakableInstances,
    SettingUpBreakableAttachment,
    UpdatingConstructions,
    RealizingProxies,
    InitializingBubbleInstanceContent,
    CreatingMeshInstanceColliders,
    UpdatingInstancedBubbleGroup,
    Realized,
    FinishingActivation,
    Activated,
    Deactivated,
    FirstRealizingState = InitializingBubbleInstance,
    LastRealizingState = UpdatingInstancedBubbleGroup,
};

