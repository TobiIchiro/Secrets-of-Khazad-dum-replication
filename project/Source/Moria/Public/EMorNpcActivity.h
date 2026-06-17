#pragma once
#include "CoreMinimal.h"
#include "EMorNpcActivity.generated.h"

UENUM(BlueprintType)
enum class EMorNpcActivity : uint8 {
    Idle,
    Frustrated,
    Working,
    Resting,
    Eating,
    Relaxing,
    Guarding,
    Fighting,
    Cowering,
    Interacting,
    NoWorkstation,
    CantReach,
    NothingToDo,
    NeedMaterials,
    None,
};

