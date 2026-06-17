#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKHitEffects.h"
#include "FGKHitProperties.h"
#include "FGKActionEffect_Hit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_Hit : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHitProperties Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHitEffects HitEffects;
    
public:
    UFGKActionEffect_Hit();

};

