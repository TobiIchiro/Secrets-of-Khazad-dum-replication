#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKEffectState.h"
#include "FGKAISquadState.generated.h"

class AFGKAIController;
class AFGKAISquad;
class UBlackboardComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadState : public UFGKEffectState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAISquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* Blackboard;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAddToMembers;
    
public:
    UFGKAISquadState();

private:
    UFUNCTION(BlueprintCallable)
    void OnMemberRemoved(AFGKAISquad* InSquad, AFGKAIController* RemovedMember);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberAdded(AFGKAISquad* InSquad, AFGKAIController* AddedMember);
    
};

