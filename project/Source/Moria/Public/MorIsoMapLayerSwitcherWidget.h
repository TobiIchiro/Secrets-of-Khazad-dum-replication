#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MorIsoMapLayerSwitcherWidget.generated.h"

class UMorIsoMapLayerSwitcherPipWidget;
class UMorIsoMapViewWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorIsoMapLayerSwitcherWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorIsoMapLayerSwitcherPipWidget> PipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorIsoMapViewWidget* MapViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorIsoMapLayerSwitcherPipWidget*> Pips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLayerFloat;
    
public:
    UMorIsoMapLayerSwitcherWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlacePipsToLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeLayerSwitcher();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeinitializeLayerSwitcher();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentLayerChanged(bool bChangedInteger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChapterChanged(int32 MinLayer, int32 MaxLayer, bool bDisabledPipsOutOfRange, bool bIsFullRange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NormalizeLayer(float Layer) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeLayerSwitcher(UMorIsoMapViewWidget* InMapViewWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnLayerGoalsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLayerChanged(int32 NewLayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnChapterChanged(int32 NewChapterId, bool bIsValid);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeinitializeLayerSwitcher();
    
};

