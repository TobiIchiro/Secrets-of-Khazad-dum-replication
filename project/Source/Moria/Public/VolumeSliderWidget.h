#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VolumeSliderWidget.generated.h"

class UAkRtpc;
class USlider;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UVolumeSliderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* ValueSlider;
    
    UVolumeSliderWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(float Value);
    
};

