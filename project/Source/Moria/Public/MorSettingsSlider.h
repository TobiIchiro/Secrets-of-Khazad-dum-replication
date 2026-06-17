#pragma once
#include "CoreMinimal.h"
#include "MorSettingsElement.h"
#include "OnSliderValueChangeDelegate.h"
#include "MorSettingsSlider.generated.h"

class USlider;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorSettingsSlider : public UMorSettingsElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* OptionSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderStepSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderValueChange SliderValueChangeDelegate;
    
public:
    UMorSettingsSlider();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float Value);
    
};

