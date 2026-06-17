#pragma once
#include "CoreMinimal.h"
#include "WatcherAICondition.h"
#include "WatcherAICondition_HasMainTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherAICondition_HasMainTarget : public UWatcherAICondition {
    GENERATED_BODY()
public:
    UWatcherAICondition_HasMainTarget();

};

