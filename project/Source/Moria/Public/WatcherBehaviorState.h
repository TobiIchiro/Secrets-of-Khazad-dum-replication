#pragma once
#include "CoreMinimal.h"
#include "WatcherBState.h"
#include "WatcherBehaviorState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherBehaviorState : public UWatcherBState {
    GENERATED_BODY()
public:
    UWatcherBehaviorState();

};

