#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Layout/Geometry.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "FGKUserWidget.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class FGKUITOOLKIT_API UFGKUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnAxisAction, float, AxisValue, float, DeltaTime, const FGeometry&, Geometry);
    
    UFGKUserWidget();

    UFUNCTION(BlueprintCallable)
    void StopListeningForAxis(FName AxisName);
    
    UFUNCTION(BlueprintCallable)
    void ListenForInputActionExtendedCustomController(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecuteWhenPaused, FOnInputAction Callback, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ListenForInputActionExtended(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecuteWhenPaused, FOnInputAction Callback);
    
    UFUNCTION(BlueprintCallable)
    void ListenForAxis(FName AxisName, float DeadZone, bool bConsume, bool bExecuteWhenPaused, UFGKUserWidget::FOnAxisAction Callback);
    
};

