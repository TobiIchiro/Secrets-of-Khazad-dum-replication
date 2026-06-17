#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorEarthquakeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorEarthquakeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMorEarthquakeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEarthquake();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideEarthquake();
    
    UFUNCTION(BlueprintCallable)
    void EarthquakeStarted();
    
};

