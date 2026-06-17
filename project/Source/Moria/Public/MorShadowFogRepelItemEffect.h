#pragma once
#include "CoreMinimal.h"
#include "MorItemEffect.h"
#include "MorShadowFogRepelItemEffect.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorShadowFogRepelItemEffect : public UMorItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UMorShadowFogRepelItemEffect();

};

