#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_NpcHasDrunk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NpcHasDrunk : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThresholdTime;
    
public:
    UMorAICondition_NpcHasDrunk();

};

