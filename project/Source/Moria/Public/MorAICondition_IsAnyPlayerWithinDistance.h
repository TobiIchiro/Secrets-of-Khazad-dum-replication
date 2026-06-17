#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_IsAnyPlayerWithinDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsAnyPlayerWithinDistance : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UMorAICondition_IsAnyPlayerWithinDistance();

};

