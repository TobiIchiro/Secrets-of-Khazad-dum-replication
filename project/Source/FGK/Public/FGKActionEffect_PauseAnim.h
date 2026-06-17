#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_PauseAnim.generated.h"

class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_PauseAnim : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseTime;
    
public:
    UFGKActionEffect_PauseAnim();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerEnd(UAnimInstance* Instance, UAnimMontage* Montage);
    
};

