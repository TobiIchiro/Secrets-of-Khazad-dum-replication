#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "NavPowerAIController.h"
#include "GameplayTagContainer.h"
#include "FGKAIBehaviorPointInteractionDelegate.h"
#include "FGKAITargetingQueryInterface.h"
#include "Templates/SubclassOf.h"
#include "FGKAIController.generated.h"

class AActor;
class AController;
class AFGKBaseCharacter;
class UBehaviorTree;
class UBlackboardData;
class UDamageType;
class UFGKAIAttackSettings;
class UFGKAIPatrolComponent;
class UFGKAITargetingComponent;
class UFGKActorFSMComponent;
class UFGKBehaviorState;
class UFGKHealthComponent;

UCLASS(Blueprintable)
class FGK_API AFGKAIController : public ANavPowerAIController, public IFGKAITargetingQueryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* BehaviorFSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UFGKBehaviorState>> DynamicBehaviors;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKAIBehaviorPointInteraction OnStartedUsingBehaviorPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKAIBehaviorPointInteraction OnStoppedUsingBehaviorPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId DefaultTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKAITargetingComponent* TargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKAIPatrolComponent* PatrolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKAIAttackSettings* AttackSettings;
    
public:
    AFGKAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGenericTeamId(const FGenericTeamId& NewTeamID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RunBehaviorFSM();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceBehaviorState(TSubclassOf<UFGKBehaviorState> NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    UFGKActorFSMComponent* GetBehaviorFSMComp() const;
    

    // Fix for true pure virtual functions not being implemented
};

