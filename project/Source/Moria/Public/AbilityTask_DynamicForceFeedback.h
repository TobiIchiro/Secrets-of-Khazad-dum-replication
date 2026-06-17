#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_DynamicForceFeedback.generated.h"

class AMorPlayerController;
class UAbilityTask_DynamicForceFeedback;
class UCurveFloat;
class UGameplayAbility;

UCLASS(Blueprintable)
class MORIA_API UAbilityTask_DynamicForceFeedback : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* Controller;
    
public:
    UAbilityTask_DynamicForceFeedback();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DynamicForceFeedback* CreateDynamicForceFeedbackTask(UGameplayAbility* OwningAbility, float Duration, UCurveFloat* NewCurve);
    
};

