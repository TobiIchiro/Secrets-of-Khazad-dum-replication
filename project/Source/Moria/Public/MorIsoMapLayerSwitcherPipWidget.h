#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "Styling/SlateBrush.h"
#include "MorIsoMapLayerSwitcherPipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorIsoMapLayerSwitcherPipWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush GoalBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPipEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCurrentLayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasPlayerIndicator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayerInCurrentChapter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGoalVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGoalInCurrentChapter: 1;
    
public:
    UMorIsoMapLayerSwitcherPipWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerIndicatorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipLayerSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipGoalWaypointChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipEnabledChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCurrentLayerChanged();
    
};

