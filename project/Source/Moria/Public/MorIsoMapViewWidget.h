#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Input/Events.h"
#include "Components/Widget.h"
#include "EMorIsoMapMarkerType.h"
#include "EMorIsoMapPanSpace.h"
#include "EMorIsoMapViewValueChange.h"
#include "EMorIsoMapViewValueType.h"
#include "MorIsoMapConfig.h"
#include "MorIsoMapInputConfig.h"
#include "MorIsoMapMarkerId.h"
#include "MorIsoMapMarkerUpdate.h"
#include "MorIsoMapPivot.h"
#include "MorIsoMapWidgetStyle.h"
#include "MorWaypointData.h"
#include "MorZoneRowHandle.h"
#include "MorIsoMapViewWidget.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class MORIA_API UMorIsoMapViewWidget : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneHovered, const FMorZoneRowHandle&, HoveredZone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkersUpdated, const TArray<FMorIsoMapMarkerUpdate>&, UpdatedMarkes);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMarkerHovered, const FMorIsoMapMarkerId&, MarkerId, const FVector&, CellPosition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLayerGoalsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLayerChanged, int32, NewLayer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChapterChanged, int32, NewChapterId, bool, bIsValid);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCellHovered, const FVector&, CellPosition, bool, bIsValidCell);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCellClicked, const FVector&, CellPosition, const FMorIsoMapMarkerId&, MarkerId, const FPointerEvent&, MouseEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChapterChanged OnChapterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayerChanged OnLayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayerGoalsChanged OnLayerGoalsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayerChanged OnMainLayerMeshChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkersUpdated OnMarkersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerHovered OnMarkerHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCellHovered OnCellHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCellClicked OnCellClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneHovered OnZoneHovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapWidgetStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapConfig MapConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorIsoMapInputConfig InputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledMouseEvents;
    
public:
    UMorIsoMapViewWidget();

    UFUNCTION(BlueprintCallable)
    void SetTargetZoomToDefaultStep();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetZoomSteps(int32 ZoomSteps, float ZoomMin, float ZoomMax);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetZoomExpDelta(float ZoomDelta, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetZoom(float NewZoom, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPan(const FVector2D& NewPan, EMorIsoMapPanSpace PanSpace, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLayer(int32 NewLayer, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void SetPivot(const FMorIsoMapPivot& NewPivot, bool bResetOnFinishedTransitions);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseEventsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerFocused(FMorIsoMapMarkerId MarkerId, bool bFocusOnCell);
    
    UFUNCTION(BlueprintCallable)
    void SetMapConfig(const FMorIsoMapConfig& NewMapConfig, bool bUpdateView);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPivot(const FMorIsoMapPivot& DefaultPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPivot(const FMorIsoMapPivot& NewCursorPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentChapter(int32 NewChapterId, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void ResetPivot();
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentChapter(EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaypointInCurrentChapter(const FMorWaypointData& WaypointData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetZoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetPlayerFromMarker(FMorIsoMapMarkerId PlayerMarkerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNeighborHoveredMarker(const FMorIsoMapMarkerId& FromMarkerId, int32 Offset, EMorIsoMapMarkerType FilteredType, FMorIsoMapMarkerId& OutMarkerId, FVector& OutCellPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMarkerCellPosition(FMorIsoMapMarkerId MarkerId, FVector& OutCellPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerCellPosition(FVector& OutCellPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLayerRange(int32& OutMinLayer, int32& OutMaxLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHoveredCell(bool& bOutIsFallbackPan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorIsoMapMarkerId GetFocusedMarker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentZoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorIsoMapPivot GetCurrentPivot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentPan(EMorIsoMapPanSpace PanSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorIsoMapPivot GetCurrentCursorPivot(bool& bOutIsFallbackPan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentChapterId(bool& bOutIsSet) const;
    
    UFUNCTION(BlueprintCallable)
    void FocusOnWorldPosition(const FVector& WorldPosition, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void FocusOnCell(const FVector& CellCoords, EMorIsoMapViewValueType Type, EMorIsoMapViewValueChange Change);
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusedMarker();
    
};

