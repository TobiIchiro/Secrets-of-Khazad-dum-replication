#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardVectorValue.h"
#include "FGKAICondition_EQSCompletedWithVector.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_EQSCompletedWithVector : public UFGKAICondition_HasBlackboardVectorValue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEQSFailed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* StateContext;
    
public:
    UFGKAICondition_EQSCompletedWithVector();

};

