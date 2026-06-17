#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKCondition_AIHasBlackboardBoolValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_AIHasBlackboardBoolValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoolValue;
    
public:
    UFGKCondition_AIHasBlackboardBoolValue();

};

