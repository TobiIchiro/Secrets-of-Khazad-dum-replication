#pragma once
#include "CoreMinimal.h"
#include "WatcherBState.h"
#include "WatcherBehaviorMachine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherBehaviorMachine : public UWatcherBState {
    GENERATED_BODY()
public:
    UWatcherBehaviorMachine();

};

