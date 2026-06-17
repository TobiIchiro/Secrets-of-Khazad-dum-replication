#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKAICondition_HasBlackboardValueBase.h"
#include "FGKAICondition_HasBlackboardRotatorValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasBlackboardRotatorValue : public UFGKAICondition_HasBlackboardValueBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotatorValue;
    
public:
    UFGKAICondition_HasBlackboardRotatorValue();

};

