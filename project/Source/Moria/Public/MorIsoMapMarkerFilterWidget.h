#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "MorIsoMapMarkerFilter.h"
#include "MorWaypointData.h"
#include "MorIsoMapMarkerFilterWidget.generated.h"

class AMorWaypointsManager;
class APlayerState;
class UMorIsoMapViewWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorIsoMapMarkerFilterWidget : public UFGKUserWidget, public IMorIsoMapMarkerFilter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorIsoMapViewWidget* MapViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorWaypointsManager* CachedWaypointsManager;
    
public:
    UMorIsoMapMarkerFilterWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeMapFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeInitializeMapFilter();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeMapFilter(UMorIsoMapViewWidget* InMapViewWidget);
    
    UFUNCTION(BlueprintCallable)
    void DeInitializeMapFilter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanShowWaypoint(const FMorWaypointData& WaypointData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanShowPlayerMarker(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanShowImportantGoalMarker();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMapFilter();
    

    // Fix for true pure virtual functions not being implemented
};

