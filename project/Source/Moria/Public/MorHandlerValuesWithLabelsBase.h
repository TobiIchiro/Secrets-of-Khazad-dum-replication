#pragma once
#include "CoreMinimal.h"
#include "FGKOptionLabeledValue.h"
#include "MorSettingsElementDataHandlerBase.h"
#include "MorHandlerValuesWithLabelsBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorHandlerValuesWithLabelsBase : public UMorSettingsElementDataHandlerBase {
    GENERATED_BODY()
public:
    UMorHandlerValuesWithLabelsBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FFGKOptionLabeledValue> GetValues();
    
};

