#pragma once
#include "CoreMinimal.h"
#include "EWaterParticleEmitterType.generated.h"

UENUM(BlueprintType)
enum class EWaterParticleEmitterType : uint8 {
    SourceSkeletalMesh,
    Point,
};

