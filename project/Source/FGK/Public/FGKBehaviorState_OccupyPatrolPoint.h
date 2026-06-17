#pragma once
#include "CoreMinimal.h"
#include "FGKAIPatrolPointOccupation.h"
#include "FGKBehaviorState_DynamicBase.h"
#include "FGKBehaviorState_OccupyPatrolPoint.generated.h"

class UFGKAIPatrolComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_OccupyPatrolPoint : public UFGKBehaviorState_DynamicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIPatrolComponent* PatrolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKAIPatrolPointOccupation PatrolPointData;
    
public:
    UFGKBehaviorState_OccupyPatrolPoint();

};

