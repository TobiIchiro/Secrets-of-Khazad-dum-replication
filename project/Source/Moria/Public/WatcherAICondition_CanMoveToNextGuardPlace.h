#pragma once
#include "CoreMinimal.h"
#include "WatcherAICondition.h"
#include "WatcherAICondition_CanMoveToNextGuardPlace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherAICondition_CanMoveToNextGuardPlace : public UWatcherAICondition {
    GENERATED_BODY()
public:
    UWatcherAICondition_CanMoveToNextGuardPlace();

};

