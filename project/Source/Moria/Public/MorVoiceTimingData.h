#pragma once
#include "CoreMinimal.h"
#include "MorVoiceTimingData.generated.h"

USTRUCT(BlueprintType)
struct FMorVoiceTimingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Timings;
    
    MORIA_API FMorVoiceTimingData();
};

