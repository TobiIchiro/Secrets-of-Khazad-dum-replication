#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorUIFocusWidgetInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class MORIA_API UMorUIFocusWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorUIFocusWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCustomFocusSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCustomFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetFocusableWidget();
    
};

