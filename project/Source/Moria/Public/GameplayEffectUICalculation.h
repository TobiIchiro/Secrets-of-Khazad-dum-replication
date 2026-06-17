#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "GameplayEffectUICalculation.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UGameplayEffectUICalculation : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UGameplayEffectUICalculation();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplay(const AActor* EffectInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float CalculateProgressPercentage(const AActor* EffectInstigator) const;
    
};

