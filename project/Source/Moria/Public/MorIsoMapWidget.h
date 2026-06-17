#pragma once
#include "CoreMinimal.h"
#include "MorMinimapWidget.h"
#include "MorIsoMapWidget.generated.h"

class AMorWaypointsManager;
class UMorIsoMapTuningData;
class UMorIsoMapViewWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorIsoMapWidget : public UMorMinimapWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorIsoMapViewWidget* MinimapView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorIsoMapTuningData* TuningData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoFocusOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoFocusOnPlayerCell: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorWaypointsManager* WaypointsManager;
    
public:
    UMorIsoMapWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_UseIsoMap();
    
};

