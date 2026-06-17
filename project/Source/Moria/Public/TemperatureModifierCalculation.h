#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "TemperatureModifierCalculation.generated.h"

UCLASS(Blueprintable)
class MORIA_API UTemperatureModifierCalculation : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UTemperatureModifierCalculation();

};

