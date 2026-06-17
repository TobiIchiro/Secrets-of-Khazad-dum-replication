#pragma once
#include "CoreMinimal.h"
#include "MorProxyRealizationHandlerConfig.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProxyRealizationHandlerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxParallelHandledProxies;
    
    FMorProxyRealizationHandlerConfig();
};

