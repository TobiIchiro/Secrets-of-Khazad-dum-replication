#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorOutdoorVisibilityListener.generated.h"

UINTERFACE(Blueprintable)
class MORIA_API UMorOutdoorVisibilityListener : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorOutdoorVisibilityListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupOutdoorVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOutdoorVisibilityChanged(bool bIsVisible);
    
};

