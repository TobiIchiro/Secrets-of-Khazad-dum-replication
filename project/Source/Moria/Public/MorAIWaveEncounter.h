#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "EMorAIWaveEncounterState.h"
#include "MorAIEncounterFinishedDelegate.h"
#include "MorAIEncounterStateChangeDelegate.h"
#include "MorAIEncounterWaveEndedDelegate.h"
#include "MorAIEncounterWaveStartedDelegate.h"
#include "MorAIPopulationRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorAIWaveEncounter.generated.h"

class ACharacter;
class AMorAIController;
class AMorCharacter;
class AMorDrums;
class UMorAISpawnerComponent;
class UMorAIWaveEncounterSettings;
class USceneComponent;
class UWorldLayoutZone;

UCLASS(Blueprintable)
class MORIA_API AMorAIWaveEncounter : public AActor, public INavAgentInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIEncounterStateChange OnStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIEncounterFinished OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIEncounterWaveEnded OnWaveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIEncounterWaveStarted OnWaveStarted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorAIWaveEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> CurrentSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorAIPopulationRowHandle> BagOfEnemyClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetNumberOfWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeOfLastWaveEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID EQSRequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorDrums* Drums;
    
public:
    AMorAIWaveEncounter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RequestStateChangeDialogue();
    
    UFUNCTION(BlueprintCallable)
    void QueueWave();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDeadOrDestroyed(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredZone(ACharacter* Character, const UWorldLayoutZone* Zone);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberExitedCombat(AMorAIController* MemberController);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDied(AActor* Member);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEncounterFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorAIWaveEncounterState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishEncounter(EMorAIWaveEncounterState FinishType);
    

    // Fix for true pure virtual functions not being implemented
};

