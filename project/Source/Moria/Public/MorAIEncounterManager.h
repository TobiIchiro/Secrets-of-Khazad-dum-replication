#pragma once
#include "CoreMinimal.h"
#include "EMorAIHordeAwarenessEventType.h"
#include "MorAIBossEventDelegate.h"
#include "MorAISiegeTriggeringSettings.h"
#include "MorDifficultySettingRowHandle.h"
#include "MorLoreRowHandle.h"
#include "MorProgressRowCondition.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorWaypointData.h"
#include "MorZoneRowHandle.h"
#include "MorAIEncounterManager.generated.h"

class AActor;
class AMorAIWaveEncounter;
class AMorCharacter;
class APlayerState;
class UCurveFloat;
class UMorAIBossComponent;
class UMorAIWaveEncounterSettings;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorAIEncounterManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorAIHordeAwarenessEventType, float> AwarenessEventValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> AwarenessEventScalars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle AwarenessEventDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightTimeAwarenessEventModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingingMiningBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingingTavernBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingingVenerationBaseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeRollingAwarenessInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAwarenessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeRollingAwarenessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AwarenessLevelToHordeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AwarenessLevelToHordeChance_IgnoreThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessResetAmountAfterFailedHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostHordeAwarenessCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearAwarenessOnSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountOfAwarenessClearedOnSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwarenessDecays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessDecayInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessDecayDelay;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLoreRowHandle> LoreOnFirstHordeTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasAHordeTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeTimeLimit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* HordeFallbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIWaveEncounter* CurrentHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenHarrassment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBetweenHarrassment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> HarassmentBlacklistZones;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* HarassmentFallbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressRowCondition> SiegeUnlockRequiredProgressConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAISiegeTriggeringSettings DayTimeSiegeTriggeringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAISiegeTriggeringSettings NightTimeSiegeTriggeringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle SiegeRollIntervalDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle SiegeCooldownDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle SiegeChanceInputDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SiegeTriggerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SiegeTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SiegeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwarenessAmountToSubtractWhenSiegeEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFailedSiegeRollsToSubtractWhenHordeEnds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* SiegeFallbackSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SiegeWaypointZOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointData SiegeWaypointData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle FirstSiegeTriggeredHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> SiegeBlacklistZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIWaveEncounter* CurrentSiege;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> TempPlayers;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIBossEvent OnBossCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIBossEvent OnBossDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAIBossComponent* ActiveBossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowBossHealthBarCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SummoningLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorAIWaveEncounter*> CurrentSummonedEncounters;
    
public:
    AMorAIEncounterManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SummonedEncounterDestroyed(AActor* DestroyedSummonedEncounter);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AMorAIWaveEncounter* SpawnEncounter(AMorCharacter* EncounterTarget, UMorAIWaveEncounterSettings* EncounterSettings, bool bIsHorde);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ReportAwarenessEvent(EMorAIHordeAwarenessEventType EventType, AMorCharacter* EventTriggerer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSiegeEnded(AMorAIWaveEncounter* FinishedEncounter);
    
    UFUNCTION(BlueprintCallable)
    void OnSiegeDestroyed(AActor* DestroyedSiege);
    
    UFUNCTION(BlueprintCallable)
    void OnHordeFinished(AMorAIWaveEncounter* FinishedEncounter);
    
    UFUNCTION(BlueprintCallable)
    void OnHordeDestroyed(AActor* DestroyedHorde);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReportHorde(const AMorCharacter* TriggeringCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    UMorAIBossComponent* GetBossComponent(bool& Success);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAwarenessLevelForZoneWithOrcTownProgressRow(const UObject* WorldContextObject, FMorProgressRowHandle ProgressRow);
    
};

