#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKAICondition_HasBlackboardObjectValue.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasBlackboardObjectValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ObjectValue;
    
public:
    UFGKAICondition_HasBlackboardObjectValue();

};

