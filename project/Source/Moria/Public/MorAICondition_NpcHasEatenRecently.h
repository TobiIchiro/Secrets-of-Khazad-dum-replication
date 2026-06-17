#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "ERecentEatThreshold.h"
#include "MorAICondition_NpcHasEatenRecently.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NpcHasEatenRecently : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecentEatThreshold Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomTime;
    
public:
    UMorAICondition_NpcHasEatenRecently();

};

