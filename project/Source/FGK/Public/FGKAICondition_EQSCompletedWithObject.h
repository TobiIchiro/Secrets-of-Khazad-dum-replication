#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardObjectValue.h"
#include "FGKAICondition_EQSCompletedWithObject.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_EQSCompletedWithObject : public UFGKAICondition_HasBlackboardObjectValue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEQSFailed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* StateContext;
    
public:
    UFGKAICondition_EQSCompletedWithObject();

};

