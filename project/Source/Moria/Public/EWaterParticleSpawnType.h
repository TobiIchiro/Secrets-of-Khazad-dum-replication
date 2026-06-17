#pragma once
#include "CoreMinimal.h"
#include "EWaterParticleSpawnType.generated.h"

UENUM(BlueprintType)
enum class EWaterParticleSpawnType : uint8 {
    InWorld,
    AttachedToBone,
};

