#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "EMorMultiplayerNamesMode.h"
#include "EMorWaypointContext.h"
#include "MorAnyItemRowHandle.h"
#include "MorChallengeRowHandle.h"
#include "MorLandmarkWaypointProperties.h"
#include "MorOnWaypointAddedDelegate.h"
#include "MorOnWaypointUpdatedDelegate.h"
#include "MorOnWaypointsRemovedDelegate.h"
#include "MorPermitData.h"
#include "MorReplicatedManager.h"
#include "MorWaypointData.h"
#include "MorWaypointReplicatedDataArray.h"
#include "MorWaypointRowHandle.h"
#include "MorZoneRowHandle.h"
#include "Templates/SubclassOf.h"
#include "WaypointIconSet.h"
#include "MorWaypointsManager.generated.h"

class ACharacter;
class AMorCharacter;
class AMorMinimapManager;
class AMorPlayerListManager;
class AMorWaypoint;
class AMorWaypointsManager;
class UEnvQuery;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorWaypointsManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointRowHandle DefaultHearthRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointRowHandle PlayerMadeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointRowHandle PlayerMadeMapstoneRowHandle;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnWaypointAdded OnWaypointAddedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnWaypointUpdated OnWaypointUpdatedCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnWaypointsRemoved OnWaypointsRemovedCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorWaypoint> WaypointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorWaypoint> PlayerWaypointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorWaypoint> LandmarkWaypointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWaypointIconSet> IconTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GenericWaypointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GenericLandmarkWaypointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaypointIconSet FallBackWaypointIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMinimapManager* MinimapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorZoneRowHandle, int32> MapStoneDirectionsIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCustomWaypointDescriptionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValidationWaypointDescriptionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReplicatedWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultWaypointDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorWaypointRowHandle> PlayerWaypointTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CustomDescriptionWaypointTags;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EQSRequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* FindLocationNearBaseQuery;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerListManager* PlayerListManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMorWaypointReplicatedDataArray ReplicatedWaypointsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FMorWaypointData> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorWaypoint*> WorldWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MostRecentIDUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WaypointIDsPendingFastTravelLocationUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaypointBeingUpdatedForFastTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorMultiplayerNamesMode PlayersNameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorMultiplayerNamesMode WaypointsNameMode;
    
public:
    AMorWaypointsManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void UpdateWaypointDataFromRowHandle(UPARAM(Ref) FMorWaypointData& WaypointData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWaypoint(const FMorWaypointData& NewWaypointData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocalVisibility(FMorWaypointData& WaypointData);
    
    UFUNCTION(BlueprintCallable)
    void TrackResourceInZone(const FMorAnyItemRowHandle& ItemHandle, const FMorZoneRowHandle& ZoneHandle, AMorCharacter* Discoverer, FMorWaypointRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    void TrackChallengeInZone(const FMorChallengeRowHandle& ChallengeHandle, const FMorZoneRowHandle& ZoneHandle, FMorWaypointRowHandle RowHandle, const FVector& Offset, bool bExactLocation, bool bIgnoreMissing);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnWaypoint(FMorWaypointData& WaypointData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWaypointVisibilityById(int32 WaypointId, bool bNewWorldVisibility, bool bNewMinimapVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWaypointVisibility(UPARAM(Ref) FMorWaypointData& WaypointData, bool bNewWorldVisibility, bool bNewMinimapVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetFastTravelPoint(int32 WaypointId, FVector FastTravelLocation);
    
    UFUNCTION(BlueprintCallable)
    void ServerDestroyWaypointById(int32 WaypointId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyWaypoint(const FMorWaypointData& WaypointData);
    
    UFUNCTION(BlueprintCallable)
    int32 RequestCreateWaypoint(FMorWaypointData WaypointData, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFastTravelPoint(int32 WaypointId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGuidUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEnteredNewZone(ACharacter* Character, FMorZoneRowHandle Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsVisibleForLocalPlayer(const UObject* WorldContext, const FMorWaypointData& WaypointData, EMorWaypointContext WaypointContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsDataPrimarilyDerivedFromDataTable(const FMorWaypointData& WaypointData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnWaypointsNameModeChanged(EMorMultiplayerNamesMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayersNameModeChanged(EMorMultiplayerNamesMode NewMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    FMorLandmarkWaypointProperties GetWaypointPropertiesByRowHandle(FMorWaypointRowHandle RowHandle, FMorZoneRowHandle ZoneRowHandle, FIntVector& OutIntPosition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorWaypoint* GetWaypointFromWaypointId(int32 WaypointId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorWaypoint* GetWaypointFromWaypointData(const FMorWaypointData& WaypointData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorWaypoint* GetWaypointFromRowHandle(const FMorWaypointRowHandle& RowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorWaypoint* GetWaypointFromLandmark(FGameplayTag LandmarkId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FText GetWaypointDescriptionStatic(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWaypointDescription(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetWaypointDataTags(FMorWaypointData WaypointData);
    
    UFUNCTION(BlueprintCallable)
    bool GetWaypointDataFromWaypointId(int32 WaypointId, FMorWaypointData& OutWaypointData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorWaypoint* GetWaypointBeingUpdatedForFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorWaypointRowHandle GetRowHandleFromLandmarkID(FGameplayTag LandmarkId) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextAvailableID();
    
protected:
    UFUNCTION(BlueprintCallable)
    AMorMinimapManager* GetMinimapManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetMapIconByFName(FName IconName, const FGameplayTag& LandmarkId) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetLandmarkTargetForZone(FMorZoneRowHandle Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetIconByFName(FName IconName, const FGameplayTag& LandmarkId) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetFNameByIcon(const FSlateBrush& IconBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFastTravelPoint(int32 WaypointId, bool& bOutIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorWaypointData> GetAllWaypointsWithTags(FGameplayTagContainer RequiredTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMorWaypoint*> GetAllWaypoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AMorWaypointsManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equality_WaypointData(FMorWaypointData A, FMorWaypointData B);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverWaypointByRowHandle(FMorWaypointRowHandle WaypointRowHandle, FVector CallingLocation, FMorZoneRowHandle TargetZone);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMorWaypointData CreateSettlementWaypointData(FVector SettlementLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText CreateDefaultWaypointDescriptionWithCounter(const FMorWaypointData& WaypointData, const FText& DescriptionFormatBase, const FText& DescriptionFormatWithCounter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText CreateDefaultWaypointDescription(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMorWaypointData CreateBaseWaypointData(FMorPermitData PermitData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFastTravelToWaypoint(const FMorWaypointData& WaypointData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddNewPlayerWaypoint() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddWaypoint(FMorWaypointData NewWaypointData, bool bForce);
    
};

