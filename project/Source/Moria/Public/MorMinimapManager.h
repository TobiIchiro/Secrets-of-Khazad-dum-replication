#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMorMapType.h"
#include "MorFogOfWarRef.h"
#include "MorMapInstance.h"
#include "MorReplicatedManager.h"
#include "MorWaypointData.h"
#include "MorZoneRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorMinimapManager.generated.h"

class AMorMinimapManager;
class UMorGameMinimapWidget;
class UMorMinimapWidget;
class UObject;
class UUserWidget;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorMinimapManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoneDiscovered, const FMorZoneRowHandle&, Zone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChapterDiscovered, int32, ChapterId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBubbleDiscovered, const FIntVector&, BubbleCoords);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChapterDiscovered OnChapterDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoneDiscovered OnZoneDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBubbleDiscovered OnBubbleDiscovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmallMinimapZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LargeMinimapZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorMapType, TSoftClassPtr<UUserWidget>> MapClassTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> PreloadedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMorMapType, FMorMapInstance> MapInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorMinimapWidget* LastRegisteredMinimapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorMinimapWidget*> MinimapWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorGameMinimapWidget*> GameMinimapWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldLayoutBubble*> BubblesVisited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorMinimapWidget*> MinimapWidgetsToAdd;
    
public:
    AMorMinimapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWaypoint(FMorWaypointData& WaypointData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFogOfWar(const FGuid& PlayerGuid, UWorldLayoutBubble* Bubble);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingDiscoveredZones(const TArray<FMorZoneRowHandle>& DiscoveredZones);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWaypointFromMap(FMorWaypointData WaypointData);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnZoneDiscovered(FGuid PlayerID, const FMorZoneRowHandle& ZoneRowHandle, bool bManuallyTrigger, bool bFirstDiscovery);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleMapColorSetChanged(int32 InMapColorSet);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalPlayerCellPosition(bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayerForWorldPosition(const FVector& WorldPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayerForCellPosition(const FVector& CellPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayerForCellCoords(const FIntVector& CellCoords, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorFogOfWarRef GetFogOfWarRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterForWorldPosition(const FVector& WorldPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterForCellPosition(const FVector& CellPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterForCellCoords(const FIntVector& CellCoords, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterAtLocalPlayerPosition(bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChapterAt(const FIntVector& CellPosition, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMorMinimapManager* Get(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AfterMapOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AfterMapClosed();
    
};

