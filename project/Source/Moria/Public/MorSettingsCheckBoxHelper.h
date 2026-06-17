#pragma once
#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "MorSettingsCheckBoxHelper.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorSettingsCheckBoxHelper : public UCheckBox {
    GENERATED_BODY()
public:
    UMorSettingsCheckBoxHelper();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetPressedCheckBox();
    
};

