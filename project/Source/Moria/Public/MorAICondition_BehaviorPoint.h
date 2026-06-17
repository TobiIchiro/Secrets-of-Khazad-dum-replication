#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_BehaviorPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_BehaviorPoint : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorAICondition_BehaviorPoint();

};

