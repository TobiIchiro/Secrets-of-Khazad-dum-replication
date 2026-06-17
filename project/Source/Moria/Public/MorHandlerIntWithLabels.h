#pragma once
#include "CoreMinimal.h"
#include "MorHandlerValuesWithLabelsBase.h"
#include "MorHandlerIntWithLabels.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorHandlerIntWithLabels : public UMorHandlerValuesWithLabelsBase {
    GENERATED_BODY()
public:
    UMorHandlerIntWithLabels();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentValue(int32& OutValue, int32 DefaultValue) const;
    
};

