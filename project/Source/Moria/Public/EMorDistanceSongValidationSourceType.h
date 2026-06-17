#pragma once
#include "CoreMinimal.h"
#include "EMorDistanceSongValidationSourceType.generated.h"

UENUM(BlueprintType)
enum class EMorDistanceSongValidationSourceType : uint8 {
    AllVoices,
    Leader,
    SourceActor,
};

