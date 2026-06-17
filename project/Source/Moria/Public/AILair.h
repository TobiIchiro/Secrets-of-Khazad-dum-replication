#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EBubbleState.h"
#include "MorAILairPopulationRowHandle.h"
#include "MorAISpawnManagementInterface.h"
#include "MorChallengeInstance.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectNative.h"
#include "OnEnemyCountChangedDelegate.h"
#include "AILair.generated.h"

class AMorAISquad;
class AMorAIWaveEncounter;
class AMorCharacter;
class UMorAISpawnerComponent;
class USceneComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AAILair : public AActor, public IMorChallengeInstance, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorAISpawnManagementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLairBeginPlayCalled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyCountChanged OnEnemyCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LairDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasASpawnRaisedTheAlarmRecently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAILairPopulationRowHandle FinalLairPopulationRow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAILairPopulationRowHandle OverrideLairPopulationRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAlwaysUseOverridePopulationRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBubbleState BeginPlayRequiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedInWhitebox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorCharacter*> CurrentSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAISquad* PatrolSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAISquad* GuardSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAISquad* IdleSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIWaveEncounter* SpawnedEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> LairActivatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookForActivatorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod Spawning;
    
public:
    AAILair(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TriggerSpawns();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TriggerEncounter(AMorCharacter* TargetDwarf);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGenDone();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedDeadOrDestroyed(AActor* SpawnedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnScreamTimerEnded();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPatrolSpawnFinished(AMorCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnIdleInBaseSpawnFinished(AMorCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnGuardBaseSpawnFinished(AMorCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetUnitCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMorCharacter*> GetSpawnedCharacters(float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQueuedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasASpawnRaisedTheAlarmRecently();
    
    UFUNCTION(BlueprintCallable)
    FText GetDisplayStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMorCharacter*> GetCurrentSpawns();
    

    // Fix for true pure virtual functions not being implemented
};

