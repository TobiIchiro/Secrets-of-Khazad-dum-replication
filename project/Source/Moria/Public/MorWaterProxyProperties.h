#pragma once
#include "CoreMinimal.h"
#include "MorCatalogedContextMarker.h"
#include "MorWaterProxyProperties.generated.h"

USTRUCT(BlueprintType)
struct FMorWaterProxyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCatalogedContextMarker ContextMarker;
    
    MORIA_API FMorWaterProxyProperties();
};

