#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffect_MeleeHit.generated.h"

UCLASS(Blueprintable)
class MORIA_API UGameplayEffect_MeleeHit : public UGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReactResistancePenetration;
    
    UGameplayEffect_MeleeHit();

};

