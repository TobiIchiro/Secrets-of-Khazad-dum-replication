#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "MorExecCalc_CheckOwnerHealth.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorExecCalc_CheckOwnerHealth : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UMorExecCalc_CheckOwnerHealth();

};

