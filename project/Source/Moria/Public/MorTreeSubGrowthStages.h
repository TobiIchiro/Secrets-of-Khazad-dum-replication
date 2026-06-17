#pragma once
#include "CoreMinimal.h"
#include "MorTreeSubGrowthStages.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTreeSubGrowthStages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SproutSubStageScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> GrowingSubStageScales;
    
    FMorTreeSubGrowthStages();
};

