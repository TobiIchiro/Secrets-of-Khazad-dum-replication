#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKAICondition_HasBlackboardFloatValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasBlackboardFloatValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
public:
    UFGKAICondition_HasBlackboardFloatValue();

};

