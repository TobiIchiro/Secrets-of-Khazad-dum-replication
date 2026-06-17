#pragma once
#include "CoreMinimal.h"
#include "MorCatalogedContextMarker.h"
#include "MorLightProxyProperties.generated.h"

USTRUCT(BlueprintType)
struct FMorLightProxyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCatalogedContextMarker ContextMarker;
    
    MORIA_API FMorLightProxyProperties();
};

