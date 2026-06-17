#pragma once
#include "CoreMinimal.h"
#include "EFGKBodySocket.generated.h"

UENUM(BlueprintType)
enum class EFGKBodySocket : uint8 {
    Root,
    Capsule,
    Head,
    Chest,
    Centroid,
};

