#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "FGKFastStateTransitionRecord.h"
#include "FGKFastStateTransitionRecordContainer.h"
#include "FGKHashedString.h"
#include "FGKRunTimeStateArray.h"
#include "FGKStateIdentifier.h"
#include "Templates/SubclassOf.h"
#include "FGKActorFSMComponent.generated.h"

class AActor;
class UFGKState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKActorFSMComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFGKFastStateTransitionRecordContainer FastTransitionsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateInTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicatesInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleNetworkedTransitionsPerTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RunTimeStates, meta=(AllowPrivateAccess=true))
    FFGKRunTimeStateArray RunTimeStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> FSMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKState* FSMAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLogTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* FSMRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKState*> AllStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFGKState*> StateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextFreeStateReplicationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AllStatesArrayReplicationKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDynamicRunTimeStateReplication;
    
public:
    UFGKActorFSMComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransmitStateTransitionWithTarget(FFGKStateIdentifier StateIdentifier, float Time, AActor* Target, FGameplayAbilityTargetDataHandle Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransmitStateTransition(FFGKStateIdentifier StateIdentifier, float Time);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveState(UFGKState* State);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FinishState(FFGKStateIdentifier StateIdentifier);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CreateFSM();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddState(UFGKState* ParentState, TSubclassOf<UFGKState> ChildStateClass, FFGKHashedString ChildStateID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RunTimeStates();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FinishState(FFGKStateIdentifier StateIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void LogTransitionIfApt(UFGKState* Sender, UFGKState* LastNode, UFGKState* NextNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessingInitialTransitions() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasFSM() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FFGKFastStateTransitionRecord> GetNextPendingTransitions(UFGKState* State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKState* GetFSMRoot() const;
    
};

