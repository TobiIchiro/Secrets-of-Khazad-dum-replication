#pragma once
#include "CoreMinimal.h"
#include "MorGameplayLightProducerSample.generated.h"

class UMorGameplayLightProducerComponent;

USTRUCT(BlueprintType)
struct FMorGameplayLightProducerSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorGameplayLightProducerComponent* Producer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightInfluence;
    
    MORIA_API FMorGameplayLightProducerSample();
};

