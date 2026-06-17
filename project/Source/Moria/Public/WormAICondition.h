#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "WormAICondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWormAICondition : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UWormAICondition();

};

