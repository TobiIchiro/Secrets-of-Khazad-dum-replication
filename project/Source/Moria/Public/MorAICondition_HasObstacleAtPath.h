#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_HasObstacleAtPath.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasObstacleAtPath : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UMorAICondition_HasObstacleAtPath();

};

