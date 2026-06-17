#pragma once
#include "CoreMinimal.h"
#include "FGKAIAdditionalSpawnParameters.h"
#include "MorAIAdditionalSpawnParameters.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIAdditionalSpawnParameters : public FFGKAIAdditionalSpawnParameters {
    GENERATED_BODY()
public:
    FMorAIAdditionalSpawnParameters();
};

