#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKManager.h"
#include "GameplayTagContainer.h"
#include "EBubbleUpdateState.h"
#include "EMorAINavigationQueryStatus.h"
#include "MorAIPatrolRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorAITimedPatrolChanceData.h"
#include "MorDifficultySettingRowHandle.h"
#include "MorSaveGameObjectNative.h"
#include "Templates/SubclassOf.h"
#include "MorAIPatrolManager.generated.h"

class AActor;
class AMorAISquad;
class AMorCharacter;
class UEnvQuery;
class UFGKAISquadState;
class UMorAISpawnerComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorAIPatrolManager : public AFGKManager, public IMorAISpawnManagementInterface, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAITimedPatrolChanceData DefaultDaytimePatrolChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAITimedPatrolChanceData DefaultNighttimePatrolChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAITimedPatrolChanceData FaunaDaytimePatrolChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAITimedPatrolChanceData FaunaNighttimePatrolChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimedPatrolRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrcMaxNumberOfPatrols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle MaxNumberOfOrcPatrolsDifficultySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle OrcPatrolChanceInputDifficultySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaunaMaxNumberOfPatrols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle MaxNumberOfFaunaPatrolsDifficultySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDifficultySettingRowHandle FaunaPatrolChanceInputDifficultySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostEncounterTimeSinceLastPatrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromEndedEncounterToResetPatrolTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UFGKAISquadState>> PatrolUnawareSquadBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UFGKAISquadState>> PatrolAwareSquadBehaviors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISquadState> PatrolRootBehaviorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorAISquad*> CurrentPatrols;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenTimeOfDayChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* SpawnQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GetRandomPointRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* PlayerToSpawnPatrolAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorAIPatrolRowHandle TimedPatrolToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID EQSRequestID;
    
public:
    AMorAIPatrolManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
    UFUNCTION(BlueprintCallable)
    void OnSleepCycle(int32 SleepCount);
    
    UFUNCTION(BlueprintCallable)
    void OnPatrolDestroyed(AActor* DestroyedPatrol);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState);
    

    // Fix for true pure virtual functions not being implemented
};

