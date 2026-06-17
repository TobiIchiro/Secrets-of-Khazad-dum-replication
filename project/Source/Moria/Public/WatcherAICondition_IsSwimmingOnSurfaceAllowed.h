#pragma once
#include "CoreMinimal.h"
#include "WatcherAICondition.h"
#include "WatcherAICondition_IsSwimmingOnSurfaceAllowed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherAICondition_IsSwimmingOnSurfaceAllowed : public UWatcherAICondition {
    GENERATED_BODY()
public:
    UWatcherAICondition_IsSwimmingOnSurfaceAllowed();

};

