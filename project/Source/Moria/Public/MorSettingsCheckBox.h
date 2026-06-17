#pragma once
#include "CoreMinimal.h"
#include "MorSettingsElement.h"
#include "MorSettingsCheckBox.generated.h"

class UCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsCheckBox : public UMorSettingsElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* OptionCheckBox;
    
public:
    UMorSettingsCheckBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCheckBoxStateChanged(bool bState);
    
};

