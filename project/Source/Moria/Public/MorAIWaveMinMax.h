#pragma once
#include "CoreMinimal.h"
#include "MorAIWaveMinMax.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIWaveMinMax {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    FMorAIWaveMinMax();
};

