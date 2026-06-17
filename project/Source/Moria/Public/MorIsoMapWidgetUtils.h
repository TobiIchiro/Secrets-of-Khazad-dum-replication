#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorIsoMapWidgetUtils.generated.h"

class UCanvasPanelSlot;
class UMorIsoMapViewWidget;
class UWidget;

UCLASS(Blueprintable)
class MORIA_API UMorIsoMapWidgetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorIsoMapWidgetUtils();

    UFUNCTION(BlueprintCallable)
    static bool SetSlotAnchorToHoverCell(UCanvasPanelSlot* Slot, UMorIsoMapViewWidget* IsoMapViewWidget, const FVector& CellPosition, bool bClampInsideParent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCanvasPanelChildAnchorToHoverCell(UWidget* Widget, UMorIsoMapViewWidget* IsoMapViewWidget, const FVector& CellPosition, bool bClampInsideParent);
    
};

