#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMonumentType.h"
#include "ESettlementType.h"
#include "MorMonumentDataArray.h"
#include "MorNPCActivityActionRowHandle.h"
#include "MorNpcUIData.h"
#include "MorOnMonumentFullyBuiltDelegateDelegate.h"
#include "MorOnMonumentStageBuiltDelegateDelegate.h"
#include "MorOnNpcRescuedDelegateDelegate.h"
#include "MorOnSettlementActivatedDelegateDelegate.h"
#include "MorOnSettlementDataUpdateDelegateDelegate.h"
#include "MorOnSettlementDeactivatedDelegateDelegate.h"
#include "MorOnSettlementLevelUpDelegateDelegate.h"
#include "MorOnSettlementNamedDelegateDelegate.h"
#include "MorOnSettlementNpcAddedDelegateDelegate.h"
#include "MorOnSettlementNpcRemovedDelegateDelegate.h"
#include "MorOnSettlementReadyForLevelUpDelegateDelegate.h"
#include "MorReplicatedManager.h"
#include "MorSettlementDataArray.h"
#include "MorSettlementHandle.h"
#include "MorSettlementLevelDefinition.h"
#include "MorSettlementMovedDelegateDelegate.h"
#include "MorSettlementNPCDataArray.h"
#include "MorSettlementProgressionData.h"
#include "MorShowLocalPlayerEnteredSettlementDelegateDelegate.h"
#include "MorWorldLevelDefinition.h"
#include "MorSettlementManager.generated.h"

class AMorDiscoveryManager;
class AMorMonument;
class AMorNPCManager;
class AMorSettlementStone;
class AMorWaypointsManager;
class AWorldLayout;

UCLASS(Blueprintable)
class MORIA_API AMorSettlementManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementActivatedDelegate OnSettlementActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementDeactivatedDelegate OnSettlementDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementNpcAddedDelegate OnNpcAddedToSettlement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementNpcRemovedDelegate OnNpcRemovedFromSettlementDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementLevelUpDelegate OnSettlementLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementReadyForLevelUpDelegate OnSettlementReadyForLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementDataUpdateDelegate OnSettlementDataUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnMonumentFullyBuiltDelegate OnMonumentFullyBuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnMonumentStageBuiltDelegate OnMonumentStageBuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnNpcRescuedDelegate OnNpcRescued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorShowLocalPlayerEnteredSettlementDelegate ShowLocalPlayerEnteredSettlement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnSettlementNamedDelegate OnSettlementNamed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementMovedDelegate OnSettlementMoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorNPCManager* NPCManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorDiscoveryManager* DiscoveryManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorWaypointsManager* WaypointsManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayoutCache;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 NextValidId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxSettlementLevelReached;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ActiveSettlements, meta=(AllowPrivateAccess=true))
    TArray<uint32> ActiveSettlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettlementBlockCellRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRecruitsToUnlockTier2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRecruitsToUnlockTier3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentWorldLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalNpcRecruitedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalNpcRescuedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMorNPCActivityActionRowHandle, int32> ActivityActionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_SettlementDataArray, meta=(AllowPrivateAccess=true))
    FMorSettlementDataArray SettlementDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_SettlementNPCDataArray, meta=(AllowPrivateAccess=true))
    FMorSettlementNPCDataArray SettlementNPCDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MonumentDataArray, meta=(AllowPrivateAccess=true))
    FMorMonumentDataArray MonumentDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorSettlementLevelDefinition> SettlementLevelDefinitionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorWorldLevelDefinition> WorldLevelDefinitionArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, AMorSettlementStone*> QueuedSettlementStoneReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMonumentType, AMorMonument*> QueuedMonumentReferences;
    
public:
    AMorSettlementManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasSettlementActivatedBefore(FMorSettlementHandle SettlementHandle) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SettlementNPCDataArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SettlementDataArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MonumentDataArray();
    
    UFUNCTION()
    void OnRep_ActiveSettlements(const TArray<uint32>& OldActiveSettlements);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_NpcMoved(FGuid NpcGuid, uint32 FromSettlementId, uint32 ToSettlementId, int32 FromSettlementNpcCount, int32 ToSettlementNpcCount);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_LevelUpReadyEvent(uint32 SettlementId, int32 Level);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_LevelUpEvent(uint32 SettlementId, int32 Level);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ActivityPointsGained(uint32 SettlementId);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManuallyDeactivateSettlement(FMorSettlementHandle SettlmenetHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSettlementHandle(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettlementLoaded(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettlementFull(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveSettlement(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveSettlements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingSettlementLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESettlementType GetSettlementType(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSettlementProgressionData GetSettlementProgressionData(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettlementNpcCount(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSettlementName(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSettlementHandle GetSettlementHandleFromWaypointId(int32 WaypointId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSettlementHandle GetSettlementHandleFromStone(AMorSettlementStone* SettlementStone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorNpcUIData> GetRescuedNpcUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNpcWorldCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSettlementHandle GetNpcSettlementHandle(const FGuid& NpcGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNpcsInWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNpcsForSettlement(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxActiveSettlementsAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWorldLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSettlementLevelCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCowerChangeForSettlement(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorSettlementHandle> GetAllSettlementHandles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorSettlementHandle> GetActiveSettlementHandles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveSettlementCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equality_SettlementHandle(FMorSettlementHandle A, FMorSettlementHandle B);
    
private:
    UFUNCTION(BlueprintCallable)
    void DespawnRecruitedWanderer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPatrolInSettlement(FMorSettlementHandle SettlementHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAssignBedsInSettlement(FMorSettlementHandle SettlementHandle) const;
    
};

