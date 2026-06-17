#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_CanOccupyPatrolPoint.generated.h"

class UFGKAIPatrolComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_CanOccupyPatrolPoint : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIPatrolComponent* PatrolComponent;
    
public:
    UFGKAICondition_CanOccupyPatrolPoint();

};

