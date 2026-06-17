#pragma once
#include "CoreMinimal.h"
#include "EMorWaypointCreatorType.generated.h"

UENUM(BlueprintType)
enum class EMorWaypointCreatorType : uint8 {
    NoCreator,
    RemotePlayer,
    LocalPlayer,
};

