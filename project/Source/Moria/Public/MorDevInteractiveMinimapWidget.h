#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorDevInteractiveMinimapWidget.generated.h"

class AMorMinimapManager;
class UCheckBox;
class UMorBubbleInterfaceWidget;
class UMorDevMinimapWorldWidget;
class UMorWorldModelZoneWidget;
class UMorZoomieConfirmWidget;
class UPanelWidget;
class USlider;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDevInteractiveMinimapWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MouseWheelLayerDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord IncrementLayerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord DecrementLayerKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord ZoomieConfirmMouseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord ZoomieImmediateMouseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorWorldModelZoneWidget> ZoneLegendWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorBubbleInterfaceWidget> BubbleInterfaceLegendWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WorldLayoutSeedLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* LayerSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MinLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MaxLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* FullZoneFilterCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* CurrentAdjacentZoneFilterCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* CurrentZoneFilterCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ZonesLegendPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BubbleInterfacesLegendPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HoveredCellPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HoveredCellPositionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HoveredCellNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HoveredCellBubbleNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HoveredCellContentsLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HoveredCellZoneNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorZoomieConfirmWidget* ZoomieConfirmWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorMinimapManager* MinimapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorDevMinimapWorldWidget* MinimapWorldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMorWorldModelZoneWidget*> ZonesLegendWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorWorldModelZoneWidget* HighlightedZoneLegendWidget;
    
public:
    UMorDevInteractiveMinimapWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImmediateZoomieStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnLayerSliderValueChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFullZoneFilterCheckBoxChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCurrentZoneFilterCheckBoxChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCurrentAdjacentZoneFilterCheckBoxChanged(bool bIsChecked);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMorDevMinimapWorldWidget* GetMinimapWorldWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    float GetCurrentMinimapVisibleLayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyNormalizedFilteredLayersRange(float Min, float Max);
    
};

