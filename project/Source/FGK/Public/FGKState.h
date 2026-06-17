#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "FGKHashedString.h"
#include "FGKStateRef.h"
#include "FGKTransition.h"
#include "OnTransitionSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "FGKState.generated.h"

class AActor;
class UFGKActorFSMComponent;
class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionSignature OnTransition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAddToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllChildrenActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSelfFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyFinishOnLastChild: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFinishOnActiveChild: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsHub: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanActivateIfAnyChildCan: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRememberActiveChild: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFinishNextFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoActivateDefaultChild: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bConsiderTransitionsLocally: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAborted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFGKHashedString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName HierarchyID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> RequiredChildType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKTransition> Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKStateRef> ChildStateRefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* ComponentOwner;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 FlatHierarchyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ActiveChildIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKState*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FFGKHashedString, UFGKState*> ChildMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* ActiveChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetDataHandle TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TagHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReplicationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReplicationKey;
    
public:
    UFGKState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool TransitionIfApt();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldReplicateTransitions() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShouldConsiderTransitionsLocally() const;
    
    UFUNCTION(BlueprintCallable)
    void RefreshContext();
    
    UFUNCTION(BlueprintCallable)
    void PrepareForPotentialActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit(UObject* OwnerParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintCallable)
    void MarkDirtyForReplication();
    
    UFUNCTION(BlueprintCallable)
    bool IsHub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAborted() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(AActor* ActorOwnerParam, UFGKActorFSMComponent* ComponentOwnerParam, UFGKState* ParentParam, const FFGKHashedString& IDParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeActive() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStateDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKState* GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetID() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetHierarchyOutlineString(int32 IndentLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHierarchyID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKHashedString GetHashedID() const;
    
    UFUNCTION()
    uint16 GetFlatHierarchyIndex() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFGKState*> GetDeepestActiveStates() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugChecksum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetConciseFSMDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKActorFSMComponent* GetComponentOwner() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFGKState*> GetChildren() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKState* GetChildByID(FName ChildID) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFGKState*> GetAllStates(TSubclassOf<UFGKState> StateClass);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllChildrenActive() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetActiveChildIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKHashedString GetActiveChildID() const;
    
    UFUNCTION(BlueprintCallable)
    UFGKState* GetActiveChild();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearCooldownTimer();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeState(UFGKState* NewActiveChild, bool bReplicateTransition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivate() const;
    
    UFUNCTION(BlueprintCallable)
    void Begin();
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

