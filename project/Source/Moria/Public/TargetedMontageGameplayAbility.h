#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "TargetedMontageGameplayAbility.generated.h"

class UAbilityTask_Rotate;

UCLASS(Blueprintable)
class MORIA_API UTargetedMontageGameplayAbility : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_Rotate* RotationTask;
    
public:
    UTargetedMontageGameplayAbility();

};

