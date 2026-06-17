#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_HasClearPathToTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasClearPathToTarget : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UFGKAICondition_HasClearPathToTarget();

};

