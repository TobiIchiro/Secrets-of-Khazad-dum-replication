#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CannotSleepSignatureDelegate.h"
#include "EUnableSleepState.h"
#include "FadeInUISleepSignatureDelegate.h"
#include "FadeOutUISleepSignatureDelegate.h"
#include "GoToSleepSignatureDelegate.h"
#include "MorAIPopulationRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorGamePauseScopeDescription.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectNative.h"
#include "ShowFallbackGrendelNotificationSignatureDelegate.h"
#include "SleepStartedSignatureDelegate.h"
#include "SleepTimeJumpedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SleepManager.generated.h"

class AActor;
class AMorCharacter;
class AMorSettlementStone;
class UEnvQuery;
class UGameplayEffect;
class UMorAISpawnerComponent;

UCLASS(Blueprintable)
class MORIA_API ASleepManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCannotSleepSignature OnCannotSleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoToSleepSignature OnPlayerGoToSleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSleepStartedSignature OnSleepStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeInUISleepSignature OnFadeInUISleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSleepTimeJumped OnSleepTimeJumped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeOutUISleepSignature OnFadeOutUISleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSleepTimeRequirement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorGamePauseScopeDescription SleepPauseBlockDescription;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 NightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NightBrewGameplayTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultipleSleepsPerNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HardcodedNights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarliestRestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestRestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepCooldownInMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyDetectionRadius;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastSleepTimeInGameMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NightsToEarthquake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElderNightsBetweenEarthquake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> RestEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> NightBrewEffects;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowFallbackGrendelNotificationSignature OnShowFallbackGrendelNotification;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* GrendelSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressToTriggerGrendel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle Progress_GrendelKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle Progress_GrendelExpeditionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIPopulationRowHandle GrendelRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GrendelSpawnQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange GrendelSpawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StopKidnapNumberThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxKidnapPerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumNpcTeleportNearGrendel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range GrendelTriggerCooldownGameTimeInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysToWaitUntilFallbackKidnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorCharacter> NpcDwarfClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastGrendelSpawnedGameTimeInMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalKidnappedNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* SpawnedGrendel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSettlementStone* InvadingSettlementStone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> TeleportedNpcs;
    
public:
    ASleepManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelSleep(AMorCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGrendelDestroyed(AActor* SpawnedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrendelBaseInvasionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrendelBaseInvasionFinished();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWakeUp();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastShowFallbackGrendelNotif(bool bIsFinalKidnap);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnPlayerGoToBed(AMorCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLieDown(const bool bInIsEarthquakePlanned);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFadeOut();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFadeIn();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCannotActivateSleep(AMorCharacter* Player, EUnableSleepState Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelSleep(AMorCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalKidnappedNPC() const;
    

    // Fix for true pure virtual functions not being implemented
};

