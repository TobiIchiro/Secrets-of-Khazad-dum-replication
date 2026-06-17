#pragma once
#include "CoreMinimal.h"
#include "MorDecoVolumeProbeLayer.h"
#include "MorDecoVolumeProbe.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDecoVolumeProbe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDecoVolumeProbeLayer> Layers;
    
    FMorDecoVolumeProbe();
};

