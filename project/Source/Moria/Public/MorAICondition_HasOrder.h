#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "EAIOrders.h"
#include "MorAICondition_HasOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasOrder : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOrders TargetOrder;
    
public:
    UMorAICondition_HasOrder();

};

