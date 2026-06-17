#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorStabilityTier.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorStabilityTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPctStability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FMorStabilityTier();
};

