#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_LeavePatrolPoint.generated.h"

class UFGKAIPatrolComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_LeavePatrolPoint : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIPatrolComponent* PatrolComponent;
    
public:
    UFGKBehaviorState_LeavePatrolPoint();

};

