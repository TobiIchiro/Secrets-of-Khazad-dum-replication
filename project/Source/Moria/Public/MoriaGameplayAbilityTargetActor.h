#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor.h"
#include "MoriaGameplayAbilityTargetActor.generated.h"

class AGameplayAbilityWorldReticle;

UCLASS(Blueprintable)
class MORIA_API AMoriaGameplayAbilityTargetActor : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGameplayAbilityWorldReticle> ReticleActor;
    
public:
    AMoriaGameplayAbilityTargetActor(const FObjectInitializer& ObjectInitializer);

};

