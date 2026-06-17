#pragma once
#include "CoreMinimal.h"
#include "EMorGameMinimapLayerBehavior.generated.h"

UENUM(BlueprintType)
enum class EMorGameMinimapLayerBehavior : uint8 {
    Default,
    SingleLayer,
    SingleLayerWithFade,
};

