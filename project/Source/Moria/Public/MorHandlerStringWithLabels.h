#pragma once
#include "CoreMinimal.h"
#include "MorHandlerValuesWithLabelsBase.h"
#include "MorHandlerStringWithLabels.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorHandlerStringWithLabels : public UMorHandlerValuesWithLabelsBase {
    GENERATED_BODY()
public:
    UMorHandlerStringWithLabels();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentValue(FString& OutValue, const FString& DefaultValue) const;
    
};

