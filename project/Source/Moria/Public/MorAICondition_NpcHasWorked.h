#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_NpcHasWorked.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_NpcHasWorked : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThresholdTime;
    
public:
    UMorAICondition_NpcHasWorked();

};

