#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "Templates/SubclassOf.h"
#include "MorGameInteractiveMinimapWidget.generated.h"

class AMorMinimapManager;
class UMorBubbleInterfaceWidget;
class UMorGameMinimapWorldWidget;
class UMorIsoMapWidget;
class UMorSettingsElement;
class UMorWorldModelZoneWidget;
class UPanelWidget;
class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorGameInteractiveMinimapWidget : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZoomInIsInstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorWorldModelZoneWidget> ZoneLegendWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorBubbleInterfaceWidget> BubbleInterfaceLegendWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* LayerSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MinLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MaxLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ZonesLegendPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMinimapManager* MinimapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorGameMinimapWorldWidget* MinimapWorldWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorIsoMapWidget* IsoMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorWorldModelZoneWidget*> ZonesLegendWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldModelZoneWidget* HighlightedZoneLegendWidget;
    
public:
    UMorGameInteractiveMinimapWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWaypointPlacement();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnMinimapWorldModelChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnMainLayerMeshChanged(int32 NewLayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLayerSliderValueChanged(float NewValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSettingsWidgets(TArray<UMorSettingsElement*>& OutWidgets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMorGameMinimapWorldWidget* GetMinimapWorldWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMorIsoMapWidget* GetIsoMapWidget();
    
private:
    UFUNCTION(BlueprintCallable)
    float GetCurrentMinimapVisibleLayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableMinimapInput(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyNormalizedFilteredLayersRange(float Min, float Max);
    
};

