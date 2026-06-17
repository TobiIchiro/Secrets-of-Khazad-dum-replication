#pragma once
#include "CoreMinimal.h"
#include "WorldLayoutParameters.h"
#include "MorWorldLayoutProperties.generated.h"

USTRUCT(BlueprintType)
struct FMorWorldLayoutProperties : public FWorldLayoutParameters {
    GENERATED_BODY()
public:
    MORIA_API FMorWorldLayoutProperties();
};

