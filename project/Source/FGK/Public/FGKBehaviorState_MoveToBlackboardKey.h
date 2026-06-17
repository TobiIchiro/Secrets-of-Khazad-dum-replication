#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "FGKBehaviorState_MoveToBlackboardKey.generated.h"

class AFGKAIMoveToGoalActor;
class UBlackboardComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MoveToBlackboardKey : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTrackMovingDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAIMoveToGoalActor* SpawnedGoalActor;
    
public:
    UFGKBehaviorState_MoveToBlackboardKey();

};

