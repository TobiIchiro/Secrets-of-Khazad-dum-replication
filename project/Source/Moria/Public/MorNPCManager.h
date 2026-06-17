#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MorChallengeRowHandle.h"
#include "MorNPCActivityRowHandle.h"
#include "MorNPCInfoArray.h"
#include "MorNPCManagerNpcDismissedDelegate.h"
#include "MorNPCManagerNpcRecruitedDelegate.h"
#include "MorNPCManagerNpcSavedInExpeditionDelegate.h"
#include "MorNPCRoleRowHandle.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectId.h"
#include "MorSaveGameObjectNative.h"
#include "MorNPCManager.generated.h"

class AMorCharacter;
class AMorConstructionManager;
class AMorSettlementManager;
class ATimeManager;
class UMorNpcOfflineProduction;
class UMorNpcTuningData;

UCLASS(Blueprintable)
class MORIA_API AMorNPCManager : public AMorReplicatedManager, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCManagerNpcSavedInExpedition OnNpcSavedInExpedition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCManagerNpcRecruited OnNpcRecruited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCManagerNpcDismissed OnNpcDismissed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumNpcTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HungryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StarvingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedsMealPredictionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShiftMinuteRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorNpcTuningData* TuningData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcLeashRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityRowHandle IdleActivityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityRowHandle InteractingActivityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCRoleRowHandle> IgnoreRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorChallengeRowHandle> ResearchChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ResearchCraftTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnNpcTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FColor> DebugBlackboardKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeAlertRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NpcInfo, meta=(AllowPrivateAccess=true))
    FMorNPCInfoArray NpcInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> UsedNpcRowNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorSaveGameObjectId SaveGameObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActivityPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle WandererRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle BuilderRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle RecruitRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle WandererInMoriaProgressRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle RitesCompletedProgressRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> ValidNpcClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ValidNpcRestores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidNpcRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSettlementManager* SettlementManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATimeManager* TimeManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorConstructionManager* ConstructionManagerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMorNpcOfflineProduction*> OfflineProductions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeashRangeSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CommonGreetingAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> ExpeditionNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> FirstNpcRowNames;
    
public:
    AMorNPCManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ServerUpdateNpcTracking(int32 CurrentHour);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NpcInfo(FMorNPCInfoArray OldNpcInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAllNpcAsRescued(bool bCorrectionLogic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcRescued(const FGuid& NpcId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNpcKidnapped(const FGuid& NpcId) const;
    

    // Fix for true pure virtual functions not being implemented
};

