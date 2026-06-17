#pragma once
#include "CoreMinimal.h"
#include "WatcherAICondition.h"
#include "WatcherAICondition_IsAttackingTooManyConstructions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherAICondition_IsAttackingTooManyConstructions : public UWatcherAICondition {
    GENERATED_BODY()
public:
    UWatcherAICondition_IsAttackingTooManyConstructions();

};

