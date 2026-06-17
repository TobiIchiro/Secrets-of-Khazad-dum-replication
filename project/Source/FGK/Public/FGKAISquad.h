#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "AI/Navigation/NavigationTypes.h"
#include "FGKAISquadOnMemberAddedDelegate.h"
#include "FGKAISquadOnMemberRemovedDelegate.h"
#include "FGKAISquad.generated.h"

class AFGKAIController;
class UBlackboardComponent;
class UFGKAISquadMovementComponent;
class UFGKActorFSMComponent;
class UPathFollowingComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FGK_API AFGKAISquad : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKAISquadOnMemberAdded OnMemberAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKAISquadOnMemberRemoved OnMemberRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties NavAgentProps;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFGKAIController>> ManagedAI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* BehaviorFSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKAISquadMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
public:
    AFGKAISquad(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnMemberDestroyed(AActor* Member);
    

    // Fix for true pure virtual functions not being implemented
};

