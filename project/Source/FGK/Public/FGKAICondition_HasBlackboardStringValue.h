#pragma once
#include "CoreMinimal.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKAICondition_HasBlackboardStringValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasBlackboardStringValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
public:
    UFGKAICondition_HasBlackboardStringValue();

};

