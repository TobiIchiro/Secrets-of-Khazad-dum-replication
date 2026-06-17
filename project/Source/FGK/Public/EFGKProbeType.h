#pragma once
#include "CoreMinimal.h"
#include "EFGKProbeType.generated.h"

UENUM(BlueprintType)
enum class EFGKProbeType : uint8 {
    Sphere,
    RayGrid,
    BoxGrid,
    SphereGrid,
    None,
};

