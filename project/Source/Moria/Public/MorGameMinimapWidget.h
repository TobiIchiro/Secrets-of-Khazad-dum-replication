#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MorMinimapWidget.h"
#include "MorZoneRowHandle.h"
#include "MorGameMinimapWidget.generated.h"

class AWorldLayout;
class UMorGameMinimapWorldWidget;
class UWorldLayoutBubble;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorGameMinimapWidget : public UMorMinimapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoFocusOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoFocusOnPlayerCell: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorGameMinimapWorldWidget* MinimapWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxZoomCellSizeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePawnRotationInsteadOfCameraRotationForArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullMap;
    
public:
    UMorGameMinimapWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateStartingDiscoveredZones(const TArray<FMorZoneRowHandle>& StartingDiscoveredZones);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFogOfWar(const FGuid& PlayerGuid, UWorldLayoutBubble* Bubble);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDiscoveredChaptersUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGivenCellCoordinateVisible(const FIntVector CellPosition);
    
    UFUNCTION(BlueprintCallable)
    void FocusMapTransformOnWorldLocation(const FVector& WorldLocation, AWorldLayout* WorldLayout, float Zoom, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void FocusMapLayerOnPlayer(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverAllChapters();
    
};

