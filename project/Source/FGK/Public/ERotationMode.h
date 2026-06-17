#pragma once
#include "CoreMinimal.h"
#include "ERotationMode.generated.h"

UENUM(BlueprintType)
enum class ERotationMode : uint8 {
    None,
    Random,
    FollowActor,
    AlignToTerrain,
};

