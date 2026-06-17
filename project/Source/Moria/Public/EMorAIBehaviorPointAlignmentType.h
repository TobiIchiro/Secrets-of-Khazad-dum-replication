#pragma once
#include "CoreMinimal.h"
#include "EMorAIBehaviorPointAlignmentType.generated.h"

UENUM(BlueprintType)
enum class EMorAIBehaviorPointAlignmentType : uint8 {
    NoAlignment,
    WithPoint,
    FaceActor,
};

