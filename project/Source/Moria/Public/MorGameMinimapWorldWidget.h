#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "EMorGameMinimapLayerBehavior.h"
#include "MorGameMinimapWorldWidgetStyle.h"
#include "MorWaypointData.h"
#include "OnWaypointClickedDelegate.h"
#include "MorGameMinimapWorldWidget.generated.h"

class AMoriaPlayerState;
class AWorldLayout;
class UMorMinimapRootIconWidget;

UCLASS(Blueprintable)
class MORIA_API UMorGameMinimapWorldWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaypointClicked OnWaypointClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGameMinimapWorldWidgetStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayerTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledInputControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxZoomCellViewSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseMoveZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseMovePanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomRecenterPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomPanRestrictionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X_PAN_OFFSET;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y_PAN_OFFSET;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
public:
    UMorGameMinimapWorldWidget();

    UFUNCTION(BlueprintCallable)
    void WaypointClicked(FMorWaypointData WaypointData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoom(float Value, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleLayer(int32 Value, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldIconsRotate(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerBehavior(EMorGameMinimapLayerBehavior LayerBehavior);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionSecret(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionInChapter(const FVector& Location, int32 ChapterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCellSecret(const FIntVector& CellPosition) const;
    
    UFUNCTION(BlueprintCallable)
    float GetZoom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetVisibleLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLayer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMapPanningValue(FIntVector& MinCell, FIntVector& MaxCell, bool bVisibleOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayerForPosition(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorGameMinimapLayerBehavior GetLayerBehavior() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetDiscoveredChapters(AMoriaPlayerState* PlayerState) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentVisibleLayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentChapterNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentChapterName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterForLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishedSetup(UMorMinimapRootIconWidget* RootIconWidget, AWorldLayout* NewWorldLayout);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AdvanceToSpecificChapter(int32 ChapterId);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToPreviousChapterFilter();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceToNextChapterFilter();
    
};

