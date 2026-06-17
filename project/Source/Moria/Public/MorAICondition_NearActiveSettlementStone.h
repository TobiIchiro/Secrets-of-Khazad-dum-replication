#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_NearActiveSettlementStone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NearActiveSettlementStone : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UMorAICondition_NearActiveSettlementStone();

};

