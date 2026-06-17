#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "MorIsoMapVirtualCursorEventReceiver.generated.h"

UINTERFACE(Blueprintable)
class MORIA_API UMorIsoMapVirtualCursorEventReceiver : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorIsoMapVirtualCursorEventReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVirtualMouseOnMouseLeave(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVirtualMouseOnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVirtualMouseMove(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVirtualMouseClick(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent);
    
};

