#pragma once
#include "CoreMinimal.h"
#include "DecorationSamplePoint.h"
#include "MorZGeneratorDecoLayerSamplePointList.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZGeneratorDecoLayerSamplePointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecorationSamplePoint> SamplePoints;
    
    FMorZGeneratorDecoLayerSamplePointList();
};

